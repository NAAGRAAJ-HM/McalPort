#pragma once
/******************************************************************************/
/* File   : port.hpp                                                          */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define PORT_P0                                                             (0U)
#define PORT_P1                                                             (1U)
#define PORT_P2                                                             (2U)
#define PORT_ACTION_CLEAR                                                   (0U)
#define PORT_ACTION_SET                                                     (1U)
#define PORT_ACTION_TOGGLE                                                  (2U)
#define PORT_ACTION_INPUT                                                   (3U)
#define PORT_ACTION_OUTPUT                                                  (4U)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void PORT_P00_Output_Set(void);
extern void PORT_P00_Input_Set(void);
extern void PORT_P01_Output_Set(void);
extern void PORT_P01_Input_Set(void);
extern void PORT_P02_Output_Set(void);
extern void PORT_P02_Input_Set(void);
extern void PORT_P03_Output_Set(void);
extern void PORT_P03_Input_Set(void);
extern void PORT_P04_Output_Set(void);
extern void PORT_P04_Input_Set(void);
extern void PORT_P00_Output_High_Set(void);
extern void PORT_P00_Output_Low_Set(void);
extern void PORT_P00_Output_Toggle_Set(void);
extern void PORT_P01_Output_High_Set(void);
extern void PORT_P01_Output_Low_Set(void);
extern void PORT_P01_Output_Toggle_Set(void);
extern void PORT_P02_Output_High_Set(void);
extern void PORT_P02_Output_Low_Set(void);
extern void PORT_P02_Output_Toggle_Set(void);
extern void PORT_P03_Output_High_Set(void);
extern void PORT_P03_Output_Low_Set(void);
extern void PORT_P03_Output_Toggle_Set(void);
extern void PORT_P04_Output_High_Set(void);
extern void PORT_P04_Output_Low_Set(void);
extern void PORT_P04_Output_Toggle_Set(void);
extern uint8 PORT_P00_Get(void);
extern uint8 PORT_P01_Get(void);
extern uint8 PORT_P02_Get(void);
extern uint8 PORT_P03_Get(void);
extern uint8 PORT_P04_Get(void);
extern void PORT_P00_OpenDrain_En(void);
extern void PORT_P00_OpenDrain_Dis(void);
extern void PORT_P01_OpenDrain_En(void);
extern void PORT_P01_OpenDrain_Dis(void);
extern void PORT_P02_OpenDrain_En(void);
extern void PORT_P02_OpenDrain_Dis(void);
extern void PORT_P03_OpenDrain_En(void);
extern void PORT_P03_OpenDrain_Dis(void);
extern void PORT_P04_OpenDrain_En(void);
extern void PORT_P04_OpenDrain_Dis(void);
extern void PORT_P00_PullUpDown_En(void);
extern void PORT_P00_PullUpDown_Dis(void);
extern void PORT_P01_PullUpDown_En(void);
extern void PORT_P01_PullUpDown_Dis(void);
extern void PORT_P02_PullUpDown_En(void);
extern void PORT_P02_PullUpDown_Dis(void);
extern void PORT_P03_PullUpDown_En(void);
extern void PORT_P03_PullUpDown_Dis(void);
extern void PORT_P04_PullUpDown_En(void);
extern void PORT_P04_PullUpDown_Dis(void);
extern void PORT_P00_PullUp_Set(void);
extern void PORT_P00_PullDown_Set(void);
extern void PORT_P01_PullUp_Set(void);
extern void PORT_P01_PullDown_Set(void);
extern void PORT_P02_PullUp_Set(void);
extern void PORT_P02_PullDown_Set(void);
extern void PORT_P03_PullUp_Set(void);
extern void PORT_P03_PullDown_Set(void);
extern void PORT_P04_PullUp_Set(void);
extern void PORT_P04_PullDown_Set(void);
extern void PORT_P10_Output_Set(void);
extern void PORT_P10_Input_Set(void);
extern void PORT_P11_Output_Set(void);
extern void PORT_P11_Input_Set(void);
extern void PORT_P12_Output_Set(void);
extern void PORT_P12_Input_Set(void);
extern void PORT_P13_Output_Set(void);
extern void PORT_P13_Input_Set(void);
extern void PORT_P14_Output_Set(void);
extern void PORT_P14_Input_Set(void);
extern void PORT_P10_Output_High_Set(void);
extern void PORT_P10_Output_Low_Set(void);
extern void PORT_P10_Output_Toggle_Set(void);
extern void PORT_P11_Output_High_Set(void);
extern void PORT_P11_Output_Low_Set(void);
extern void PORT_P11_Output_Toggle_Set(void);
extern void PORT_P12_Output_High_Set(void);
extern void PORT_P12_Output_Low_Set(void);
extern void PORT_P12_Output_Toggle_Set(void);
extern void PORT_P13_Output_High_Set(void);
extern void PORT_P13_Output_Low_Set(void);
extern void PORT_P13_Output_Toggle_Set(void);
extern void PORT_P14_Output_High_Set(void);
extern void PORT_P14_Output_Low_Set(void);
extern void PORT_P14_Output_Toggle_Set(void);
extern uint8 PORT_P10_Get(void);
extern uint8 PORT_P11_Get(void);
extern uint8 PORT_P12_Get(void);
extern uint8 PORT_P13_Get(void);
extern uint8 PORT_P14_Get(void);
extern void PORT_P10_OpenDrain_En(void);
extern void PORT_P10_OpenDrain_Dis(void);
extern void PORT_P11_OpenDrain_En(void);
extern void PORT_P11_OpenDrain_Dis(void);
extern void PORT_P12_P13_OpenDrain_En(void);
extern void PORT_P12_P13_OpenDrain_Dis(void);
extern void PORT_P14_OpenDrain_En(void);
extern void PORT_P14_OpenDrain_Dis(void);
extern void PORT_P10_PullUpDown_En(void);
extern void PORT_P10_PullUpDown_Dis(void);
extern void PORT_P11_PullUpDown_En(void);
extern void PORT_P11_PullUpDown_Dis(void);
extern void PORT_P12_PullUpDown_En(void);
extern void PORT_P12_PullUpDown_Dis(void);
extern void PORT_P13_PullUpDown_En(void);
extern void PORT_P13_PullUpDown_Dis(void);
extern void PORT_P14_PullUpDown_En(void);
extern void PORT_P14_PullUpDown_Dis(void);
extern void PORT_P10_PullUp_Set(void);
extern void PORT_P10_PullDown_Set(void);
extern void PORT_P11_PullUp_Set(void);
extern void PORT_P11_PullDown_Set(void);
extern void PORT_P12_PullUp_Set(void);
extern void PORT_P12_PullDown_Set(void);
extern void PORT_P13_PullUp_Set(void);
extern void PORT_P13_PullDown_Set(void);
extern void PORT_P14_PullUp_Set(void);
extern void PORT_P14_PullDown_Set(void);
extern void PORT_P20_Dis(void);
extern void PORT_P20_Input_Set(void);
extern void PORT_P22_Dis(void);
extern void PORT_P22_Input_Set(void);
extern void PORT_P23_Dis(void);
extern void PORT_P23_Input_Set(void);
extern void PORT_P24_Dis(void);
extern void PORT_P24_Input_Set(void);
extern void PORT_P25_Dis(void);
extern void PORT_P25_Input_Set(void);
extern uint8 PORT_P20_Get(void);
extern uint8 PORT_P22_Get(void);
extern uint8 PORT_P23_Get(void);
extern uint8 PORT_P24_Get(void);
extern uint8 PORT_P25_Get(void);
extern void PORT_P20_PullUpDown_En(void);
extern void PORT_P20_PullUpDown_Dis(void);
extern void PORT_P22_PullUpDown_En(void);
extern void PORT_P22_PullUpDown_Dis(void);
extern void PORT_P23_PullUpDown_En(void);
extern void PORT_P23_PullUpDown_Dis(void);
extern void PORT_P24_PullUpDown_En(void);
extern void PORT_P24_PullUpDown_Dis(void);
extern void PORT_P25_PullUpDown_En(void);
extern void PORT_P25_PullUpDown_Dis(void);
extern void PORT_P20_PullUp_Set(void);
extern void PORT_P20_PullDown_Set(void);
extern void PORT_P22_PullUp_Set(void);
extern void PORT_P22_PullDown_Set(void);
extern void PORT_P23_PullUp_Set(void);
extern void PORT_P23_PullDown_Set(void);
extern void PORT_P24_PullUp_Set(void);
extern void PORT_P24_PullDown_Set(void);
extern void PORT_P25_PullUp_Set(void);
extern void PORT_P25_PullDown_Set(void);

extern void  PORT_Init                                                   (void);
extern void  PORT_ChangePin                     (uint32 PortPin, uint32 Action);
extern void  PORT_ChangePinAlt                  (uint32 PortPin, uint8  AltSel);
extern uint8 PORT_ReadPin                                      (uint32 PortPin);
extern uint8 PORT_ReadPort                                     (uint32 Port);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

