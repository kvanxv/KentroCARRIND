cmake_minimum_required(VERSION 3.7)
project(KentroCARRIND)

set(CMAKE_CXX_STANDARD 23)
set(VCPKG_TARGET_TRIPLET "x64-windows" CACHE STRING "")

include_directories("C:/Users/kcarr/vcpkg/installed/x64-windows/include/antlr4-runtime")

# Link directory
link_directories("C:/Users/kcarr/vcpkg/installed/x64-windows/lib")

# add the path to the vcpkg installed package toolchain file
set(CMAKE_TOOLCHAIN_FILE "C:/Users/kcarr/vcpkg/scripts/buildsystems/vcpkg.cmake")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -frtti")

link_directories("C:/Users/kcarr/vcpkg/installed/x64-windows/lib")
set(antlr4-runtime_DIR "C:/Users/kcarr/vcpkg/installed/x64-windows/share/antlr4-runtime")

# Find antlr4 package using vcpkg
find_package(antlr4-runtime CONFIG REQUIRED)

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
        include/options/Options.cpp
        include/options/Options.hpp
        core/KentroFiscus.cpp
        core/KentroFiscus.hpp
)

target_include_directories(KentroCARRIND PRIVATE # the location of ANTLR generated .h files
        ${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET}/include/antlr4-runtime
)

target_link_libraries(KentroCARRIND PRIVATE antlr4-runtime)
