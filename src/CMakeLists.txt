
# Récupérer tous les fichiers C du dossier src
file(GLOB SRC_FILES *.c)

# Rendre cette variable visible dans les sous-dossiers
set(SRC_FILES ${SRC_FILES} CACHE INTERNAL "Sources of Sandale2")

# Exécutable
add_executable(${PROJECT_NAME} ${SRC_FILES})


add_library(sandale2_lib STATIC ${SRC_FILES})
target_include_directories(sandale2_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# n'ajoute les tests que si BUILD_TESTING est ON
if (BUILD_TESTING)
  add_subdirectory(tests)
endif()
