#include <fmt/core.h>

static int hello_world(int argc, char* argv[])
{
    fmt::print("[{}] Hello World!\n", argv[0]);
    return 0;
}

static int program_main(int argc, char* argv[])
{
    int ret = -1;
    ret = hello_world(argc, argv);
    return ret;
}

int main(int argc, char* argv[])
{
    int ret = -1;
    ret = program_main(argc, argv);
    return ret;
}
