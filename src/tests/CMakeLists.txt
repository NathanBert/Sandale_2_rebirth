


file(GLOB TEST_SOURCES *.c)

# Création de l executable de test
add_executable(unit_tests ${TEST_SOURCES})


# Ajout de Sandale2 en librairie de l executable de tests
target_link_libraries(unit_tests PRIVATE sandale2_lib)


# enregistrement auprès de CTest
add_test(NAME unit_tests COMMAND unit_tests)


set_tests_properties(unit_tests PROPERTIES
  LABELS "unit"
  TIMEOUT 10
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)

