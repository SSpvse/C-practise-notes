cmake_minimum_required(VERSION 3.31)
project(06_okt)

set(CMAKE_CXX_STANDARD 17)

# Each executable gets a unique name
add_executable(prj1 prj1/main.cpp)
add_executable(ex2 ex2/ex2.cpp)
add_executable(RoomCleaningPrice Section6/RoomCleaningPrice.cpp)
add_executable(arrays_7_1 Section7/arrays_7_1.cpp)
add_executable(vectors_7_2 Section7/vectors_7_2.cpp)
add_executable(operators   Section8/operators.cpp)
add_executable(expressions Section8/mixed_type_expressions.cpp)
add_executable(challange8 Section8/sectionChallage.cpp)
add_executable(forloops       Section9/forloops.cpp)


