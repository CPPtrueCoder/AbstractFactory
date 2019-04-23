#include "factories.h"
#include "heavyfactrory.h"
#include "lightfactory.h"
#include "mediumfactory.h"
#include "tanks.h"
#include <iostream>
#include <vector>
using namespace std;
int MainBattleTank::counttanks=0;
int main()

{

  HeavyFactory *heavy_factory = new HeavyFactory;
  MediumFactory *medium_factory = new MediumFactory;
  LightFactory *light_factory = new LightFactory;

  vector<MainBattleTank *> tanks;
  tanks.push_back(heavy_factory->AssembleTank());
  tanks.push_back(light_factory->AssembleTank());
  tanks.push_back(medium_factory->AssembleTank());
  for (auto i : tanks) {
    i->GetID();
    i->Info();
  }
}
