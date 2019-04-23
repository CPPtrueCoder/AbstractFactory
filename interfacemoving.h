#ifndef INTERFACEMOVING_H
#define INTERFACEMOVING_H
#include <iostream>

class InterfaceMoving
{
public:
  virtual ~InterfaceMoving(){}
  virtual void Moving()=0;
};

class circleMoving: public InterfaceMoving
{
  void Moving () {
    std::cout<< " I am moving"<<std::endl;
  }
};
class LineMoving:public InterfaceMoving
{
  void Moving(){
    std::cout<<"I am linemoving"<<std::endl;
}
};

#endif // INTERFACEMOVING_H
