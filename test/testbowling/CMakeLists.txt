file(GLOB SRCS *.cpp)

set (CMAKE_CXX_STANDARD 14)

if(WIN32)
    set(CMAKE_CXX_FLAGS_RELEASE "/MT")
    set(CMAKE_CXX_FLAGS_DEBUG "/MTd")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /NODEFAULTLIB:msvcrtd")

endif()

add_executable(testbowling ${SRCS})

target_link_libraries(testbowling
    libbowling
    libgtest
    libgmock
)

add_test(NAME testbowling
         COMMAND testbowling)
