add_library (Queue queue.c)
target_include_directories (Queue PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
add_subdirectory(../List ../List)
target_link_libraries(Queue PUBLIC List)