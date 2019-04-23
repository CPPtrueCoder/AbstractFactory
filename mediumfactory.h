#ifndef MEDIUMFACTORY_H
#define MEDIUMFACTORY_H

#include "m60.h"
#include "tanks.h"
class MediumFactory {
public:
  MediumFactory();
  MainBattleTank *AssembleTank();
};

#endif // MEDIUMFACTORY_H
