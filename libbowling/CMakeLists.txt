set(libbowling_SRCS
    bowling.h
    bowling.cpp
)

# Declare the library
add_library(libbowling STATIC
    ${libbowling_SRCS}
)


# Specify here the include directories exported
# by this library
target_include_directories(libbowling PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
