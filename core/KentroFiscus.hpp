#pragma once

namespace KentroFiscus
{
   class BlackSholesModel
   {
    public:
        BlackSholesModel()
            : currentStockPrice(0.0), strikePrice(0.0), timeToMaturity(0.0), interestRate(0.0),
              volatility(0.0), d1(0.0), d2(0.0), callCDFD1(0.0), callCDFD2(0.0), putCDFD1(0.0),
              putCDFD2(0.0), callOptionPrice(0.0), putOptionPrice(0.0)
        {}
        ~BlackSholesModel() = default;

        const double getCurrentStockPrice() const { return currentStockPrice; }
        const double getStrikeorice() { return strikePrice; }
        const double getTimeToMaturity() { return timeToMaturity; }
        const double getInterestRare() { return interestRate; }
        const double getVolatility() { return volatility; }

    public:
        double calculateIntermediateD1();
        double calculateIntermediateD2();
        static double t_function(double t); // rename function
        double calculateCallCDFD1(); // omege(d1)
        double calculateCallCDFD2(); //omega(d2)
        double calculatePutCDFD1(); //omega(-d1)
        double calculatePutCDFD2(); //omega(-d2)
        void KentroFiscus_inputBlackSholesModelEU();
        double calculateCallOptionPrice();
        double calculatePutOptionPrice();

    private:
        double currentStockPrice;
        double strikePrice;
        double timeToMaturity;
        double interestRate;
        double volatility;
        double d1;
        double d2;
        double callCDFD1;
        double callCDFD2;
        double putCDFD1;
        double putCDFD2;
        double callOptionPrice;
        double putOptionPrice;
    };

}