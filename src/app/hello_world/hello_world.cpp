#include <app/hello_world/hello_world.hpp>
#include <fmt/core.h>

int hello_world(int argc, char* argv[])
{
    fmt::print("[{}] Hello World!\n", argv[0]);
    return 0;
}
