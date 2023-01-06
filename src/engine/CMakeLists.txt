set(NAME engine)

add_library(${NAME} STATIC Application.cpp)

target_include_directories(${NAME} PUBLIC include)
target_compile_features(${NAME} PRIVATE cxx_std_20)
target_link_libraries(${NAME} PUBLIC SDL2::SDL2 imgui)