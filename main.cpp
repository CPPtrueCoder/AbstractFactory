#include <iostream>
#include<vector>
using namespace std;


static int counttanks=0;
class MainBattleTank {
public:
  virtual void Info()=0;
  void virtual GetID()=0;
  virtual ~MainBattleTank (){}

};


class M60:public MainBattleTank{
public:
  M60(){
    counttanks++;
    ID=counttanks;
  }
  void GetID(){
    cout<<ID;
  }
  void Info(){
    cout<<"M60<<Patton>>"<<endl;
  }
private:
  int ID;

};
class M1A1:public MainBattleTank{
public:
  M1A1(){
    counttanks++;
    ID=counttanks;
  }
  void GetID(){
    cout<<ID;
  }
  void Info(){
    cout<<"M1A1"<<endl;
  }
private:
  int ID;
};
class M550:public MainBattleTank{
public:
  M550(){
    counttanks++;
    ID=counttanks;
  }
  void GetID(){
    cout<<ID;
  }
  void Info(){
    cout<<"M550"<<endl;
  }
private:
  int ID;
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
  for (int i =0; i<10;i++){
  tanks.push_back(heavy_factory->AssembleTank());
  tanks.push_back(medium_factory->AssembleTank());
  tanks.push_back(light_factory->AssembleTank());}
  for (auto i :tanks){
    i->GetID();
    i->Info();
  }
 }
