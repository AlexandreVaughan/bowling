set(Main_SRCS
    main.cpp
)

add_executable(bowling
    ${Main_SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(bowling
    libbowling
)

install(TARGETS bowling DESTINATION bin)
