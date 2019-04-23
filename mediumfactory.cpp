#include "mediumfactory.h"

MediumFactory::MediumFactory() {}

MainBattleTank *MediumFactory::AssembleTank() { return new M60(new LineMoving); }
