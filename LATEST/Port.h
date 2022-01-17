#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_Port.h"

class class_Port{
   public:
      FUNC(void, PORT_CODE) InitFunction         (void);
      FUNC(void, PORT_CODE) SetPinDirection      (void);
      FUNC(void, PORT_CODE) RefreshPortDirection (void);
      FUNC(void, PORT_CODE) GetVersionInfo       (void);
      FUNC(void, PORT_CODE) SetPortMode          (void);
};

extern class_Port Port;

