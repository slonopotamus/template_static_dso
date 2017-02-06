#include "a.h"
#include "b.h"
#include "d.h"
#include <cstdio>

int main(int argc, char** argv)
{
    AAA::Get() = 3;
    BBB::Get() = 2;
    printf("A: %d, B: %d, D: %d\n", AAA::Get(), BBB::Get(), DDD::Get());
    return 0;
}
