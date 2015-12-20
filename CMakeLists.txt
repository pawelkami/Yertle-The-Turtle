cmake_minimum_required(VERSION 2.8.12)
project(yertle)
set(CMAKE_BUILD_TYPE Release)

include_directories(.
					./src)
					
set(SOURCES
	./src/main.cpp
	./src/ResultsTable.cpp
	./src/Throne.cpp
	./src/ThroneDynamicProgramming.cpp
	./src/ThroneFast.cpp
	./src/ThroneNaive.cpp
	./src/Timer.cpp
	./src/Turtle.cpp
   )

set(PROJECT_LINK_LIBS
	)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(yertle ${SOURCES})
target_link_libraries(yertle ${PROJECT_LINK_LIBS})
