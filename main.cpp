#include <iostream>
#include<vector>
using namespace std;
class MainBattleTank {
public:
  virtual void Info()=0;
  virtual ~MainBattleTank (){}
};

class M60:public MainBattleTank{
public:
  void Info(){
    cout<<"M60<<Patton>>"<<endl;
  }
};
class M1A1:public MainBattleTank{
public:
  void Info(){
    cout<<"M1A1"<<endl;
  }
};
class M550:public MainBattleTank{
public:
  void Info(){
    cout<<"M550"<<endl;
  }
};

class Factory
{
public:
  virtual MainBattleTank* AssembleTank()=0;
  virtual ~Factory()=default;
};
class MediumTankFactory :public Factory{
public:
   MainBattleTank* AssembleTank() {
    return new M60 ;
  }
};

class HeavyTankFactory:public Factory{
public:
  MainBattleTank * AssembleTank(){
    return new M1A1;
  }
};
class LightTankFactory:public Factory {
public:  MainBattleTank *AssembleTank(){
    return new M550;
  }
};


int main()
{
  HeavyTankFactory*heavy_factory= new HeavyTankFactory;
  MediumTankFactory* medium_factory = new MediumTankFactory;
  LightTankFactory* light_factory = new LightTankFactory;

  vector<MainBattleTank*> tanks;
  tanks.push_back(heavy_factory->AssembleTank());
  tanks.push_back(medium_factory->AssembleTank());
  tanks.push_back(light_factory->AssembleTank());
  for (auto i :tanks){
    i->Info();
  }
 }
