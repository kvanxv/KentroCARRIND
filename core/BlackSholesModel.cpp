#include <boost/math/quadrature/gauss_kronrod.hpp>
#include <boost/math/distributions.hpp>
#include <boost/math/constants/constants.hpp>

#include "../include/libs.hpp"
#include "KentroFiscus.hpp"


double KentroFiscus::BlackSholesModel::calculateIntermediateD1()
{
    return d1 = (log(currentStockPrice / strikePrice)) + (interestRate + (std::pow(volatility, 2) / 2) * timeToMaturity)
                / (volatility * (std::sqrt(timeToMaturity)));
}

double KentroFiscus::BlackSholesModel::calculateIntermediateD2()
{
    return d2 = d1 - (volatility * (std::sqrt(timeToMaturity)));
}

double KentroFiscus::BlackSholesModel::t_function(double t) // rename function
{
    return (1 / (std::sqrt(2 * boost::math::double_constants::pi))) * (std::exp(-(std::pow(t, 2) / 2)));
}


double KentroFiscus::BlackSholesModel::calculateCallCDFD1() // omege(d1)
{
    return callCDFD1 = boost::math::quadrature::gauss_kronrod<double, 61>::integrate(
               t_function, -std::numeric_limits<double>::infinity(), d1);
}

double KentroFiscus::BlackSholesModel::calculateCallCDFD2() //omega(d2)
{
    return callCDFD2 = boost::math::quadrature::gauss_kronrod<double, 61>::integrate(
               t_function, -std::numeric_limits<double>::infinity(), d2);
}

double KentroFiscus::BlackSholesModel::calculatePutCDFD1() //omega(-d1)
{
    return putCDFD1 = boost::math::quadrature::gauss_kronrod<double, 61>::integrate(
               t_function, -std::numeric_limits<double>::infinity(), -d1);
}

double KentroFiscus::BlackSholesModel::calculatePutCDFD2() //omega(-d2)
{
    return putCDFD2 = boost::math::quadrature::gauss_kronrod<double, 61>::integrate(
               t_function, -std::numeric_limits<double>::infinity(), -d2);
}

void KentroFiscus::BlackSholesModel::KentroFiscus_inputBlackSholesModelEU()
{
    std::cin >> currentStockPrice
            >> strikePrice
            >> timeToMaturity
            >> interestRate
            >> volatility;
    calculateIntermediateD1();
    calculateIntermediateD2();
    calculateCallCDFD1();
    calculateCallCDFD2();
    calculatePutCDFD1();
    calculatePutCDFD2();
}

double KentroFiscus::BlackSholesModel::calculateCallOptionPrice()
{
    return callOptionPrice = (currentStockPrice * callCDFD1) - (strikePrice * (std::exp(-(std::pow(interestRate, 1) * timeToMaturity)))) * (callCDFD2);
}

double KentroFiscus::BlackSholesModel::calculatePutOptionPrice()
{
    return putOptionPrice = (strikePrice * (std::exp(-(std::pow(interestRate, 1) * timeToMaturity)))) * (putCDFD2) -
                            (currentStockPrice * putCDFD1);
}
