cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

project(TP6_exercice)

# compilation flags (but should be avoided)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O2")

# files to compile
#set(src_files src/main.cpp src/main.cpp)
#set(header_files src/VectorD.hpp)

# compile
#add_executable(vectorD ${src_files} ${header_files})
add_executable(TP6_exercice src/main.cpp)

# call the CMakeLists.txt to make the documentation (Doxygen)
# > 'make html' to generate the documentation
# > the documentation is located in : [CMAKE ROOT]/build/doc/doc-doxygen/html
add_subdirectory(doc)

