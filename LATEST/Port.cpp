/******************************************************************************/
/* File   : Port.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgPort.hpp"
#include "Port_core.hpp"
#include "infPort.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PORT_AR_RELEASE_VERSION_MAJOR                                          4
#define PORT_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(PORT_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible PORT_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(PORT_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible PORT_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Port:
      public abstract_module
   ,  public class_Port_Functionality
{
   public:
      module_Port(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, PORT_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, PORT_CONFIG_DATA, PORT_APPL_CONST) lptrCfgModule
      );
      FUNC(void, PORT_CODE) DeInitFunction (void);
      FUNC(void, PORT_CODE) MainFunction   (void);
      PORT_CORE_FUNCTIONALITIES
};

extern VAR(module_Port, PORT_VAR) Port;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, PORT_VAR, PORT_CONST) gptrinfEcuMClient_Port = &Port;
CONSTP2VAR(infDcmClient,  PORT_VAR, PORT_CONST) gptrinfDcmClient_Port  = &Port;
CONSTP2VAR(infSchMClient, PORT_VAR, PORT_CONST) gptrinfSchMClient_Port = &Port;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Port, PORT_VAR) Port(
   {
         PORT_AR_RELEASE_VERSION_MAJOR
      ,  PORT_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, PORT_CODE) module_Port::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, PORT_CONFIG_DATA, PORT_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Port_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Port_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Port_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgPort;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == Port_InitCheck)
   }
#endif
}

FUNC(void, PORT_CODE) module_Port::DeInitFunction(void){
#if(STD_ON == Port_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Port_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Port_InitCheck)
   }
#endif
}

FUNC(void, PORT_CODE) module_Port::MainFunction(void){
#if(STD_ON == Port_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Port_DevErrorDetect)
      Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
#if(STD_ON == Port_InitCheck)
   }
#endif
}

FUNC(void, PORT_CODE) class_Port_Functionality::SetPinDirection(void){
}

FUNC(void, PORT_CODE) class_Port_Functionality::RefreshPortDirection(void){
}

FUNC(void, PORT_CODE) class_Port_Functionality::SetPortMode(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

