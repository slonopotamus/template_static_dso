#pragma once

template<typename C>
class TSingleton
{
    static __attribute__((visibility("default"))) int value;

public:

    static int& Get()
    {
        return value;
    }
};

template<typename C>
int TSingleton<C>::value = 1;
