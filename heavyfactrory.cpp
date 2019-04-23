#include "heavyfactrory.h"

HeavyFactory::HeavyFactory() = default;
MainBattleTank *HeavyFactory::AssembleTank() { return new M1A1; }
