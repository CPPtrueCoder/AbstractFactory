#include "lightfactory.h"

LightFactory::LightFactory() {}

MainBattleTank *LightFactory::AssembleTank() { return new M550; }
