# This program has been developed by students from the bachelor Computer Science at
# Utrecht University within the Software Project course.
# © Copyright Utrecht University (Department of Information and Computing Sciences)

cmake_minimum_required(VERSION 3.13)

project(SearchSECOParserStandalone)

if (UNIX)
  list(APPEND CMAKE_CXX_FLAGS "-pthread ${CMAKE_CXX_FLAGS}")
endif(UNIX)

set(CMAKE_CXX_STANDARD 14)      
set(EXE_NAME SearchSECOParserStandalone)
add_executable(${EXE_NAME} Main.cpp)
target_link_libraries(${EXE_NAME} libSearchSECOParser)

if(CMAKE_DL_LIBS)
    target_link_libraries(${EXE_NAME} ${CMAKE_DL_LIBS})
endif()


target_include_directories(${EXE_NAME} PUBLIC "${PROJECT_BINARY_DIR}" ../libSearchSECOParser)
