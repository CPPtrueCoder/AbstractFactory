#ifndef M550_H
#define M550_H
#include "interfacemoving.h"
#include "tanks.h"
class M550 : public MainBattleTank {
public:
  M550()=default;
  M550(InterfaceMoving* moving):moving_(moving) {
    counttanks++;
    ID = counttanks;
  }
  void GetID();
  void Info();
  void Moving(){
    moving_->Moving();
  }

private:
  int ID;
  InterfaceMoving * moving_;
};

#endif // M550_H
