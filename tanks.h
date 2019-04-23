#ifndef TANKS_H
#define TANKS_H
#include <iostream>
using namespace std;

class MainBattleTank {
public:
  static int counttanks ;
  MainBattleTank() {}
  virtual void Info() = 0;
  virtual void GetID() = 0;
  virtual void Moving()=0;
  virtual ~MainBattleTank() = default;
};

#endif
