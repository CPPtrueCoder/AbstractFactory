#ifndef FACTORIES_H
#define FACTORIES_H
#include "tanks.h"

class Factory {
public:
  virtual MainBattleTank *AssembleTank() = 0;
  virtual ~Factory() = default;
};

#endif // FACTORIES_H
