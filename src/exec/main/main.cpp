#include <app/hello_world/hello_world.hpp>


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
