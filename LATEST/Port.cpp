/******************************************************************************/
/* File   : Port.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Port.hpp"
#include "infPort_Imp.hpp"

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

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Port, PORT_VAR) Port;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, PORT_CODE) module_Port::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, PORT_CONST,       PORT_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   PORT_CONFIG_DATA, PORT_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Port_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == Port_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Port_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Port_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PORT_CODE) module_Port::DeInitFunction(
   void
){
#if(STD_ON == Port_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Port_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Port_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PORT_CODE) module_Port::MainFunction(
   void
){
#if(STD_ON == Port_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Port_InitCheck)
   }
   else{
#if(STD_ON == Port_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  PORT_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, PORT_CODE) module_Port::SetPinDirection(
   void
){
}

FUNC(void, PORT_CODE) module_Port::RefreshPortDirection(
   void
){
}

FUNC(void, PORT_CODE) module_Port::SetPortMode(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

