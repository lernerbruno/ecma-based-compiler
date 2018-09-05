#include "lexycal_analyzer.cpp"
#include <errno.h>

using namespace std;

int main(int argc, char const *argv[])
{
    programToCompile = fopen("program.txt", "r");
    if (!programToCompile)
    {
        fprintf(stderr, "Failed to open program: %s\n", strerror(errno));
    }
};