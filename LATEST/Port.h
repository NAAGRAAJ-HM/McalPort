#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Port.h"

class class_Port{
   public:
      FUNC(void, PORT_CODE) InitFunction(void);
};

extern class_Port Port;

