
set(V_program_name main)
add_executable(${V_program_name} main.cpp)
set(V_dep_libs ${CONAN_LIBS})
target_link_libraries(${V_program_name}
    proj_lib
    fmt::fmt
    grpc::grpc)
target_link_libraries(${V_program_name}
    ${PLATFORM_LINK_LIB})
