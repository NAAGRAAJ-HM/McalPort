#pragma once
/*****************************************************/
/* File   : Port.h                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_Port.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_Port{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      FUNC(void, PORT_CODE) InitFunction         (void);
      FUNC(void, PORT_CODE) SetPinDirection      (void);
      FUNC(void, PORT_CODE) RefreshPortDirection (void);
      FUNC(void, PORT_CODE) GetVersionInfo       (void);
      FUNC(void, PORT_CODE) SetPortMode          (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern class_Port Port;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

