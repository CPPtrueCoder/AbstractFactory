#ifndef M1A1_H
#define M1A1_H
#include "tanks.h"

class M1A1 : public MainBattleTank {
public:
  M1A1() {
    counttanks++;
    ID = counttanks;
  }
  void GetID();
  void Info();

private:
  int ID;
};

#endif // M1A1_H
