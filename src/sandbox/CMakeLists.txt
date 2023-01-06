set(NAME sandbox)

add_executable(${NAME} Main.cpp)

find_library(LIB_ENGINE NAMES engine.lib PATHS ../../lib REQUIRED)

target_include_directories(${NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_features(${NAME} PRIVATE cxx_std_20)
target_link_libraries(${NAME} PRIVATE ${LIB_ENGINE})