/*****************************************************/
/* File   : Port.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infPort_EcuM.h"
#include "infPort_Dcm.h"
#include "infPort_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Port:
      public abstract_module
{
   public:
      FUNC(void, PORT_CODE) InitFunction   (void);
      FUNC(void, PORT_CODE) DeInitFunction (void);
      FUNC(void, PORT_CODE) GetVersionInfo (void);
      FUNC(void, PORT_CODE) MainFunction   (void);
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
module_Port    Port;
infEcuMClient* gptrinfEcuMClient_Port = &Port;
infDcmClient*  gptrinfDcmClient_Port  = &Port;
infSchMClient* gptrinfSchMClient_Port = &Port;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, PORT_CODE) module_Port::InitFunction(void){
}

FUNC(void, PORT_CODE) module_Port::DeInitFunction(void){
}

FUNC(void, PORT_CODE) module_Port::GetVersionInfo(void){
}

FUNC(void, PORT_CODE) module_Port::MainFunction(void){
}

#include "Port_Unused.h"

FUNC(void, PORT_CODE) class_Port_Unused::SetPinDirection(void){
}

FUNC(void, PORT_CODE) class_Port_Unused::RefreshPortDirection(void){
}

FUNC(void, PORT_CODE) class_Port_Unused::SetPortMode(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

