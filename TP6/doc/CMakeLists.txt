find_package (Doxygen)

message("vectorD_SOURCE_DIR     " ${c3ga_SOURCE_DIR})
message("vectorD_BINARY_DIR     " ${c3ga_BINARY_DIR})
message("DOXYGEN_EXECUTABLE  " ${DOXYGEN_EXECUTABLE})

if(DOXYGEN_FOUND)
  configure_file (${TP6_exercice_SOURCE_DIR}/doc/Doxyfile-html.cmake ${TP6_exercice_BINARY_DIR}/doc/Doxyfile-html)
  add_custom_target (html ${DOXYGEN_EXECUTABLE} ${vectorD_BINARY_DIR}/doc/Doxyfile-html)
endif (DOXYGEN_FOUND)
