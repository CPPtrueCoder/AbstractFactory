#include "tanks.h"
#ifndef M60_H
#define M60_H

class M60 : public MainBattleTank {
public:
  M60() {
    counttanks++;
    ID = counttanks;
  }
  void Info();
  void GetID();

private:
  int ID;
};

#endif // M60_H
