add_library (Stack stack.c)
target_include_directories (Stack PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Stack PRIVATE List)