#include <iostream>
#include<vector>
using namespace std;
class Warrior {
public:
  virtual void Info()=0;
  virtual ~Warrior (){}
};

class InfantryMan:public Warrior{
public:
  void Info(){
    cout<<"Infantryman"<<endl;
  }
};
class Archer:public Warrior{
public:
  void Info(){
    cout<<"Archer"<<endl;
  }
};
class HorseMan:public Warrior{
public:
  void Info(){
    cout<<"Horseman"<<endl;
  }
};

class Factory
{
public:
  virtual Warrior* createWarrior()=0;
  virtual ~Factory()=default;
};
class InfantryManFactory :public Factory{
public:
   Warrior* createWarrior() {
    return new InfantryMan;
  }
};

class ArcherManFactory:public Factory{
public:
  Warrior *createWarrior(){
    return new Archer;
  }
};
class HorseManFactory:public Factory {
public:  Warrior *createWarrior(){
    return new HorseMan;
  }
};


int main()
{
  InfantryManFactory*infantry_factory= new InfantryManFactory;
  ArcherManFactory* archers_factory = new ArcherManFactory;
  HorseManFactory* hourse_man_factory = new HorseManFactory;

  vector<Warrior*> men;
  men.push_back(infantry_factory->createWarrior());
  men.push_back(archers_factory->createWarrior());
  men.push_back(hourse_man_factory->createWarrior());
 }
