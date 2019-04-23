#ifndef M1A1_H
#define M1A1_H
#include "interfacemoving.h"
#include "tanks.h"
class M1A1 : public MainBattleTank {
public:
  M1A1(InterfaceMoving *moving):moving_(moving) {
    counttanks++;
    ID = counttanks;
  }
  void GetID();
  void Info();
  void Moving() { moving_->Moving(); }

private:
  int ID;
  InterfaceMoving *moving_;
};

#endif // M1A1_H
