#include "tanks.h"
#ifndef M60_H
#define M60_H
#include"interfacemoving.h"
class M60 : public MainBattleTank {
public:

  M60(InterfaceMoving * moving):moving_(moving) {
    counttanks++;
    ID = counttanks;
  }
  void Info();
  void GetID();
  void Moving(){
    moving_->Moving();
  }
private:
  int ID;
  InterfaceMoving * moving_;
};

#endif // M60_H
