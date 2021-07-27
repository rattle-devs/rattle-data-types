add_library (List list.c node.c)
target_include_directories (List PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})