/*****************************************************/
/* File   : Port.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Port_EcuM.h"
#include "Port_SchM.h"
#include "Port_Unused.h"

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
   ,  public interface_Port_EcuM
   ,  public interface_Port_SchM
{
   public:
      FUNC(void, PORT_CODE) InitFunction   (void);
      FUNC(void, PORT_CODE) DeInitFunction (void);
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
module_Port Port;

interface_Port_EcuM *EcuM_Client_ptr_Port = &Port;
interface_Port_SchM *SchM_Client_ptr_Port = &Port;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, PORT_CODE) module_Port::InitFunction(void){
}

FUNC(void, PORT_CODE) module_Port::DeInitFunction(void){
}

FUNC(void, PORT_CODE) module_Port::MainFunction(void){
}

FUNC(void, PORT_CODE) class_Port_Unused::SetPinDirection(void){
}

FUNC(void, PORT_CODE) class_Port_Unused::RefreshPortDirection(void){
}

FUNC(void, PORT_CODE) class_Port_Unused::GetVersionInfo(void){
}

FUNC(void, PORT_CODE) class_Port_Unused::SetPortMode(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

