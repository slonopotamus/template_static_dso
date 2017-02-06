#pragma once

#include "shared.h"

class __attribute__((visibility("default"))) BBB : public TSingleton<BBB>
{
public:

    BBB();
};
