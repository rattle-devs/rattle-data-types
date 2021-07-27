add_library (Queue queue.c)
target_include_directories (Queue PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(Queue PRIVATE List)