list(APPEND classComplexNumber_headers ${CMAKE_CURRENT_SOURCE_DIR}/ComplexNumber.hpp)
list(APPEND classComplexNumber_sources ${CMAKE_CURRENT_SOURCE_DIR}/ComplexNumber.cpp)

list(APPEND classComplexNumber_includes ${CMAKE_CURRENT_SOURCE_DIR})

set(classComplexNumber_sources ${classComplexNumber_sources} PARENT_SCOPE)
set(classComplexNumber_headers ${classComplexNumber_headers} PARENT_SCOPE)
set(classComplexNumber_includes ${classComplexNumber_includes} PARENT_SCOPE)
