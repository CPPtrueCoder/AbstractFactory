#ifndef HEAVYFACTRORY_H
#define HEAVYFACTRORY_H
#include "factories.h"
#include "m1a1.h"
#include "tanks.h"
class HeavyFactory : public Factory {
public:
  HeavyFactory();
  MainBattleTank *AssembleTank();
};

#endif // HEAVYFACTRORY_H
