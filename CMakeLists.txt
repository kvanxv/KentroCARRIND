cmake_minimum_required(VERSION 3.7)
project(KentroCARRIND)

set(CMAKE_CXX_STANDARD 23)
set(VCPKG_TARGET_TRIPLET "x64-windows" CACHE STRING "")

include_directories("C:/Users/kcarr/vcpkg/installed/x64-windows/include/antlr4-runtime")
include_directories("C:/Users/kcarr/vcpkg/installed/x64-windows/include/boost")

# Link directory
link_directories("C:/Users/kcarr/vcpkg/installed/x64-windows/lib")

# add the path to the vcpkg installed package toolchain file
set(CMAKE_TOOLCHAIN_FILE "C:/Users/kcarr/vcpkg/scripts/buildsystems/vcpkg.cmake")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -frtti")

link_directories("C:/Users/kcarr/vcpkg/installed/x64-windows/lib")

set(antlr4-runtime_DIR "C:/Users/kcarr/vcpkg/installed/x64-windows/share/antlr4-runtime")
set(boost_DIR "C:/Users/kcarr/vcpkg/installed/x64-windows/share/boost")
set(CMAKE_VERBOSE_MAKEFILE ON)

# Find antlr4 package using vcpkg
find_package(antlr4-runtime CONFIG REQUIRED)
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
set(BOOST_ROOT "C:/Users/kcarr/vcpkg/installed/x64-windows")
find_package(Boost 1.85.0 COMPONENTS math REQUIRED)
find_package(Boost REQUIRED COMPONENTS math)

file(GLOB GENERATED_SRC
        "${CMAKE_CURRENT_SOURCE_DIR}/grammar/*.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/grammar/*.h"
)


# Point to the manually generated .cpp and .h files


add_executable(KentroCARRIND
        main.cpp
        include/evaluator/EvaluatorKentroComputer.cpp
        core/Kentro.cpp
        core/KentroComputer.cpp
        ${GENERATED_SRC}
        include/evaluator/EvaluatorKentroComputer.hpp
        grammar/libsAntlr4.hpp
        include/test/TestKentro.cpp
        include/test/TestKentro.hpp
        core/BlackSholesModel.cpp
        core/KentroFiscus.hpp
)

target_include_directories(KentroCARRIND PRIVATE # the location of ANTLR generated .h files
        ${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/antlr4-runtime
)

target_include_directories(KentroCARRIND PRIVATE # the location of ANTLR generated .h files
        ${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/boost
)


target_link_libraries(KentroCARRIND PRIVATE antlr4-runtime)
target_link_libraries(KentroCARRIND PRIVATE Boost::boost Boost::math)