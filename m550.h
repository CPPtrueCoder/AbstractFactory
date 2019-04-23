#ifndef M550_H
#define M550_H

#include "tanks.h"
class M550 : public MainBattleTank {
public:
  M550() {
    counttanks++;
    ID = counttanks;
  }
  void GetID();
  void Info();

private:
  int ID;
};

#endif // M550_H
