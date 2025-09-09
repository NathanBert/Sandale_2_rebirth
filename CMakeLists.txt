cmake_minimum_required(VERSION 3.31)
project(Sandale2 C)





set(CMAKE_C_STANDARD 11)
set(CMAKE_C_FLAGS "-Wall -Wextra -Wpedantic -g ${CMAKE_C_FLAGS}")



# activer CTest uniquement au niveau racine
if (CMAKE_PROJECT_NAME STREQUAL ${PROJECT_NAME})
  include(CTest)   # crée BUILD_TESTING (ON) et appelle enable_testing()
endif()



# Recherche des paquets SDL2 + extensions
find_package(SDL2 CONFIG REQUIRED)
find_package(SDL2_ttf CONFIG REQUIRED)
find_package(SDL2_image CONFIG REQUIRED)


# Subdirectories
add_subdirectory(src)



# Liaison avec les cibles modernes fournies par les packages
target_link_libraries(Sandale2
    PRIVATE
    SDL2::SDL2
    SDL2::SDL2main
    SDL2_ttf::SDL2_ttf
    SDL2_image::SDL2_image
)
