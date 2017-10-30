#----------------------------------------------------------------
# Generated CMake target import file for configuration "MinSizeRel".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "lib__micro-CDR" for configuration "MinSizeRel"
set_property(TARGET lib__micro-CDR APPEND PROPERTY IMPORTED_CONFIGURATIONS MINSIZEREL)
set_target_properties(lib__micro-CDR PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_MINSIZEREL "C"
  IMPORTED_LOCATION_MINSIZEREL "${_IMPORT_PREFIX}/lib/liblib__micro-CDR.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS lib__micro-CDR )
list(APPEND _IMPORT_CHECK_FILES_FOR_lib__micro-CDR "${_IMPORT_PREFIX}/lib/liblib__micro-CDR.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
