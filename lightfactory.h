#ifndef LIGHTFACTORY_H
#define LIGHTFACTORY_H
#include "factories.h"
#include "m550.h"
#include "tanks.h"
class LightFactory : public Factory {
public:
  LightFactory();
  MainBattleTank *AssembleTank();
};

#endif // LIGHTFACTORY_H
