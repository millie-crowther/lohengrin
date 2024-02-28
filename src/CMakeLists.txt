cmake_minimum_required(VERSION 3.21)
project (lohengrin C)

# add_compile_options(-Wall -Wextra -pedantic -Werror)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)


set(SOURCES
    main.c
    request.c
    server.c
    router.c
    url.c
)

add_executable(lohengrin ${SOURCES})
target_link_libraries(lohengrin PUBLIC Threads::Threads)
set_property(TARGET lohengrin PROPERTY C_STANDARD 23)
