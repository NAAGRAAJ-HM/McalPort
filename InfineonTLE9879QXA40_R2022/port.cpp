/******************************************************************************/
/* File   : port.cpp                                                          */
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
#include "types.hpp"

#include "port.hpp"

#include "uC_Port.hpp"
#include "uC_Scu.hpp"

#include "sfr_access.hpp"

#include "port_defines.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

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
PORT_Type PORT = {
      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
   ,  0, 0, 0, 0, 0
};

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void PORT_Init(void){
#if(PORT_XML_VERSION < 10303)
   uint8 Value;
   PORT.P0_DIR.reg = (uint8) PORT_P0_DIR;
   SCU.P0_POCON0.reg = (uint8)SCU_P0_POCON0;
   SCU.P0_POCON1.reg = (uint8)SCU_P0_POCON1;
   SCU.P0_POCON2.reg = (uint8)SCU_P0_POCON2;
   PORT.P0_OD.reg = (uint8) PORT_P0_OD;
   Value  = (uint8) ((PORT_P0_0_PUD & 0x02u) >> 1u);
   Value |= (uint8) ((PORT_P0_1_PUD & 0x02u));
   Value |= (uint8) ((PORT_P0_2_PUD & 0x02u) << 1u);
   Value |= (uint8) ((PORT_P0_3_PUD & 0x02u) << 2u);
   Value |= (uint8) ((PORT_P0_4_PUD & 0x02u) << 3u);
   PORT.P0_PUDEN.reg = Value;
   Value  = (uint8) ((PORT_P0_0_PUD & 0x01u));
   Value |= (uint8) ((PORT_P0_1_PUD & 0x01u) << 1u);
   Value |= (uint8) ((PORT_P0_2_PUD & 0x01u) << 2u);
   Value |= (uint8) ((PORT_P0_3_PUD & 0x01u) << 3u);
   Value |= (uint8) ((PORT_P0_4_PUD & 0x01u) << 4u);
   PORT.P0_PUDSEL.reg = Value;
   Value  = (uint8) ((PORT_P0_0_ALT & 0x01u));
   Value |= (uint8) ((PORT_P0_1_ALT & 0x01u) << 1u);
   Value |= (uint8) ((PORT_P0_2_ALT & 0x01u) << 2u);
   Value |= (uint8) ((PORT_P0_3_ALT & 0x01u) << 3u);
   Value |= (uint8) ((PORT_P0_4_ALT & 0x01u) << 4u);
   PORT.P0_ALTSEL0.reg = Value;
   Value  = (uint8) ((PORT_P0_0_ALT & 0x02u) >> 1u);
   Value |= (uint8) ((PORT_P0_1_ALT & 0x02u));
   Value |= (uint8) ((PORT_P0_2_ALT & 0x02u) << 1u);
   Value |= (uint8) ((PORT_P0_3_ALT & 0x02u) << 2u);
   Value |= (uint8) ((PORT_P0_4_ALT & 0x02u) << 3u);
   PORT.P0_ALTSEL1.reg = Value;
   PORT.P0_DATA.reg = (uint8) PORT_P0_DATA;
   PORT.P1_DIR.reg = (uint8) PORT_P1_DIR;
   SCU.P1_POCON0.reg = (uint8)SCU_P1_POCON0;
   SCU.P1_POCON1.reg = (uint8)SCU_P1_POCON1;
   SCU.P1_POCON2.reg = (uint8)SCU_P1_POCON2;
   PORT.P1_OD.reg = (uint8) PORT_P1_OD;
   Value  = (uint8) ((PORT_P1_0_PUD & 0x02u) >> 1u);
   Value |= (uint8) ((PORT_P1_1_PUD & 0x02u));
   Value |= (uint8) ((PORT_P1_2_PUD & 0x02u) << 1u);
   Value |= (uint8) ((PORT_P1_3_PUD & 0x02u) << 2u);
   Value |= (uint8) ((PORT_P1_4_PUD & 0x02u) << 3u);
   PORT.P1_PUDEN.reg = Value;
   Value  = (uint8) ((PORT_P1_0_PUD & 0x01u));
   Value |= (uint8) ((PORT_P1_1_PUD & 0x01u) << 1u);
   Value |= (uint8) ((PORT_P1_2_PUD & 0x01u) << 2u);
   Value |= (uint8) ((PORT_P1_3_PUD & 0x01u) << 3u);
   Value |= (uint8) ((PORT_P1_4_PUD & 0x01u) << 4u);
   PORT.P1_PUDSEL.reg = Value;
   Value  = (uint8) ((PORT_P1_0_ALT & 0x01u));
   Value |= (uint8) ((PORT_P1_1_ALT & 0x01u) << 1u);
   Value |= (uint8) ((PORT_P1_2_ALT & 0x01u) << 2u);
   Value |= (uint8) ((PORT_P1_3_ALT & 0x01u) << 3u);
   Value |= (uint8) ((PORT_P1_4_ALT & 0x01u) << 4u);
   PORT.P1_ALTSEL0.reg = Value;
   Value  = (uint8) ((PORT_P1_0_ALT & 0x02u) >> 1u);
   Value |= (uint8) ((PORT_P1_1_ALT & 0x02u));
   Value |= (uint8) ((PORT_P1_2_ALT & 0x02u) << 1u);
   Value |= (uint8) ((PORT_P1_3_ALT & 0x02u) << 2u);
   Value |= (uint8) ((PORT_P1_4_ALT & 0x02u) << 3u);
   PORT.P1_ALTSEL1.reg = Value;
   PORT.P1_DATA.reg = (uint8) PORT_P1_DATA;
   PORT.P2_DIR.reg = (uint8) PORT_P2_DIR;
   Value  = (uint8) ((PORT_P2_0_PUD & 0x02u) >> 1u);
   Value |= (uint8) ((PORT_P2_1_PUD & 0x02u));
   Value |= (uint8) ((PORT_P2_2_PUD & 0x02u) << 1u);
   Value |= (uint8) ((PORT_P2_3_PUD & 0x02u) << 2u);
   Value |= (uint8) ((PORT_P2_4_PUD & 0x02u) << 3u);
   Value |= (uint8) ((PORT_P2_5_PUD & 0x02u) << 4u);
   Value |= (uint8) ((PORT_P2_7_PUD & 0x02u) << 6u);
   PORT.P2_PUDEN.reg = Value;
   Value  = (uint8) ((PORT_P2_0_PUD & 0x01u));
   Value |= (uint8) ((PORT_P2_1_PUD & 0x01u) << 1u);
   Value |= (uint8) ((PORT_P2_2_PUD & 0x01u) << 2u);
   Value |= (uint8) ((PORT_P2_3_PUD & 0x01u) << 3u);
   Value |= (uint8) ((PORT_P2_4_PUD & 0x01u) << 4u);
   Value |= (uint8) ((PORT_P2_5_PUD & 0x01u) << 5u);
   Value |= (uint8) ((PORT_P2_7_PUD & 0x01u) << 7u);
   PORT.P2_PUDSEL.reg = Value;
#else
   PORT.P0_DIR.reg = (uint8)PORT_P0_DIR;
   SCU.P0_POCON0.reg = (uint8)SCU_P0_POCON0;
   SCU.P0_POCON1.reg = (uint8)SCU_P0_POCON1;
   SCU.P0_POCON2.reg = (uint8)SCU_P0_POCON2;
   PORT.P0_OD.reg = (uint8)PORT_P0_OD;
   PORT.P0_PUDEN.reg = (uint8)PORT_P0_PUDEN;
   PORT.P0_PUDSEL.reg = (uint8)PORT_P0_PUDSEL;
   PORT.P0_ALTSEL0.reg = (uint8)PORT_P0_ALTSEL0;
   PORT.P0_ALTSEL1.reg = (uint8)PORT_P0_ALTSEL1;
   PORT.P0_DATA.reg = (uint8)PORT_P0_DATA;
   PORT.P1_DIR.reg = (uint8)PORT_P1_DIR;
   PORT.P1_OD.reg = (uint8)PORT_P1_OD;
   SCU.P1_POCON0.reg = (uint8)SCU_P1_POCON0;
   SCU.P1_POCON1.reg = (uint8)SCU_P1_POCON1;
   SCU.P1_POCON2.reg = (uint8)SCU_P1_POCON2;
   PORT.P1_PUDEN.reg = (uint8)PORT_P1_PUDEN;
   PORT.P1_PUDSEL.reg = (uint8)PORT_P1_PUDSEL;
   PORT.P1_ALTSEL0.reg = (uint8)PORT_P1_ALTSEL0;
   PORT.P1_ALTSEL1.reg = (uint8)PORT_P1_ALTSEL1;
   PORT.P1_DATA.reg = (uint8)PORT_P1_DATA;
   PORT.P2_DIR.reg = (uint8)PORT_P2_DIR;
   PORT.P2_PUDEN.reg = (uint8)PORT_P2_PUDEN;
   PORT.P2_PUDSEL.reg = (uint8)PORT_P2_PUDSEL;
#endif
}
/*
void PORT_ChangePin(uint32 PortPin, uint32 Action){
  uint8 *pSfr;
  uint8 PinMask;
  uint8 PinPos;
  uint8* addr;
  uint16 idx;
  PinPos = (uint8)(PortPin & 0x7U);
  PinMask = (uint8)(1U << PinPos);
  addr = (uint8*)&(PORT.P0_DATA.reg);
  idx = (uint16)((PortPin >> 4U) << 3U);
  addr += idx;
  pSfr = (uint8*) addr;
  CMSIS_Irq_Dis();
  if(Action == PORT_ACTION_CLEAR){
    Field_Clr8(pSfr, PinMask);
  }
  else if(Action == PORT_ACTION_SET){
    Field_Mod8(pSfr, PinPos, PinMask, 1u);
  }
  else if(Action == PORT_ACTION_TOGGLE){
    Field_Inv8(pSfr, PinMask);
  }
  else if(Action == PORT_ACTION_INPUT){
    addr = (uint8*)&(PORT.P0_DIR.reg);
    idx = (uint16)((PortPin >> 4U) << 3U);
    addr += idx;
    pSfr = (uint8*) addr;
    Field_Clr8(pSfr, PinMask);
  }
  else{
    addr = (uint8*)&(PORT.P0_DIR.reg);
    idx = (uint16)((PortPin >> 4U) << 3U);
    addr += idx;
    pSfr = (uint8*) addr;
    Field_Mod8(pSfr, PinPos, PinMask, 1u);
  }
  CMSIS_Irq_En();
}

uint8 PORT_ReadPin(uint32 PortPin){
  const uint8* pSfr;
  uint8 PinMask;
  uint8 PinPos;
  uint8* addr;
  uint16 idx;
  PinPos = (uint8)(PortPin & 0x7U);
  PinMask = (uint8)(1U << PinPos);
  addr = (uint8*)&(PORT.P0_DATA.reg);
  idx = (uint16)((PortPin >> 4U) << 3U);
  addr += idx;
  pSfr = (uint8*) addr;
   return(u8_Field_Rd8(pSfr, PinPos, PinMask) );
}

uint8 PORT_ReadPort(uint32 Port){
  const uint8 PortMsk[3] = {0x1F, 0x1F, 0x3D};
  const uint8* pSfr;
  uint8* addr;
  uint16 idx;
  addr = (uint8*)&(PORT.P0_DATA.reg);
  idx = (uint16)(Port << 3U);
  addr += idx;
  pSfr = (uint8*) addr;
  //return *pSfr;
   return(u8_Field_Rd8(pSfr, 0, PortMsk[Port]));
}

void PORT_ChangePinAlt(uint32 PortPin, uint8 AltSel){
  uint8* pSfr0;
  uint8* pSfr1;
  uint8 PinMask;
  uint8 PinPos;
  uint8* addr;
  uint16 idx;
  PinPos = (uint8)(PortPin & 0x7U);
  PinMask = (uint8)(1U << PinPos);
  addr = (uint8*)&(PORT.P0_ALTSEL0.reg);
  idx = (uint16)((PortPin >> 4U) << 3U);
  addr += idx;
  pSfr0 = (uint8*) addr;
  addr = (uint8*)&(PORT.P0_ALTSEL1.reg);
  idx = (uint16)((PortPin >> 4U) << 3U);
  addr += idx;
  pSfr1 = (uint8*) addr;
  CMSIS_Irq_Dis();
  Field_Mod8(pSfr0, PinPos, PinMask, (AltSel & 1u));
  Field_Mod8(pSfr1, PinPos, PinMask, ((AltSel >> 1u) & 1u));
  CMSIS_Irq_En();
}

void PORT_P00_Output_Set(void){
  Field_Mod8(&PORT.P0_DIR.reg, (uint8)PORT_P0_DIR_P0_Pos, (uint8)PORT_P0_DIR_P0_Msk, 1u);
}

void PORT_P00_Input_Set(void){
  Field_Mod8(&PORT.P0_DIR.reg, (uint8)PORT_P0_DIR_P0_Pos, (uint8)PORT_P0_DIR_P0_Msk, 0u);
}

void PORT_P01_Output_Set(void){
  Field_Mod8(&PORT.P0_DIR.reg, (uint8)PORT_P0_DIR_P1_Pos, (uint8)PORT_P0_DIR_P1_Msk, 1u);
}

void PORT_P01_Input_Set(void){
  Field_Mod8(&PORT.P0_DIR.reg, (uint8)PORT_P0_DIR_P1_Pos, (uint8)PORT_P0_DIR_P1_Msk, 0u);
}

void PORT_P02_Output_Set(void){
  Field_Mod8(&PORT.P0_DIR.reg, (uint8)PORT_P0_DIR_P2_Pos, (uint8)PORT_P0_DIR_P2_Msk, 1u);
}

void PORT_P02_Input_Set(void){
  Field_Mod8(&PORT.P0_DIR.reg, (uint8)PORT_P0_DIR_P2_Pos, (uint8)PORT_P0_DIR_P2_Msk, 0u);
}

void PORT_P03_Output_Set(void){
  Field_Mod8(&PORT.P0_DIR.reg, (uint8)PORT_P0_DIR_P3_Pos, (uint8)PORT_P0_DIR_P3_Msk, 1u);
}

void PORT_P03_Input_Set(void){
  Field_Mod8(&PORT.P0_DIR.reg, (uint8)PORT_P0_DIR_P3_Pos, (uint8)PORT_P0_DIR_P3_Msk, 0u);
}

void PORT_P04_Output_Set(void){
  Field_Mod8(&PORT.P0_DIR.reg, (uint8)PORT_P0_DIR_P4_Pos, (uint8)PORT_P0_DIR_P4_Msk, 1u);
}

void PORT_P04_Input_Set(void){
  Field_Mod8(&PORT.P0_DIR.reg, (uint8)PORT_P0_DIR_P4_Pos, (uint8)PORT_P0_DIR_P4_Msk, 0u);
}

void PORT_P00_Output_High_Set(void){
  Field_Mod8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P0_Pos, (uint8)PORT_P0_DATA_P0_Msk, 1u);
}

void PORT_P00_Output_Low_Set(void){
  Field_Mod8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P0_Pos, (uint8)PORT_P0_DATA_P0_Msk, 0u);
}

void PORT_P00_Output_Toggle_Set(void){
  Field_Inv8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P0_Msk);
}

void PORT_P01_Output_High_Set(void){
  Field_Mod8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P1_Pos, (uint8)PORT_P0_DATA_P1_Msk, 1u);
}

void PORT_P01_Output_Low_Set(void){
  Field_Mod8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P1_Pos, (uint8)PORT_P0_DATA_P1_Msk, 0u);
}

void PORT_P01_Output_Toggle_Set(void){
  Field_Inv8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P1_Msk);
}

void PORT_P02_Output_High_Set(void){
  Field_Mod8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P2_Pos, (uint8)PORT_P0_DATA_P2_Msk, 1u);
}

void PORT_P02_Output_Low_Set(void){
  Field_Mod8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P2_Pos, (uint8)PORT_P0_DATA_P2_Msk, 0u);
}

void PORT_P02_Output_Toggle_Set(void){
  Field_Inv8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P2_Msk);
}

void PORT_P03_Output_High_Set(void){
  Field_Mod8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P3_Pos, (uint8)PORT_P0_DATA_P3_Msk, 1u);
}

void PORT_P03_Output_Low_Set(void){
  Field_Mod8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P3_Pos, (uint8)PORT_P0_DATA_P3_Msk, 0u);
}

void PORT_P03_Output_Toggle_Set(void){
  Field_Inv8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P3_Msk);
}

void PORT_P04_Output_High_Set(void){
  Field_Mod8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P4_Pos, (uint8)PORT_P0_DATA_P4_Msk, 1u);
}

void PORT_P04_Output_Low_Set(void){
  Field_Mod8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P4_Pos, (uint8)PORT_P0_DATA_P4_Msk, 0u);
}

void PORT_P04_Output_Toggle_Set(void){
  Field_Inv8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P4_Msk);
}

uint8 PORT_P00_Get(void){
   return( u8_Field_Rd8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P0_Pos, (uint8)PORT_P0_DATA_P0_Msk) );
}

uint8 PORT_P01_Get(void){
   return( u8_Field_Rd8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P1_Pos, (uint8)PORT_P0_DATA_P1_Msk) );
}

uint8 PORT_P02_Get(void){
   return( u8_Field_Rd8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P2_Pos, (uint8)PORT_P0_DATA_P2_Msk) );
}

uint8 PORT_P03_Get(void){
   return( u8_Field_Rd8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P3_Pos, (uint8)PORT_P0_DATA_P3_Msk) );
}

uint8 PORT_P04_Get(void){
   return( u8_Field_Rd8(&PORT.P0_DATA.reg, (uint8)PORT_P0_DATA_P4_Pos, (uint8)PORT_P0_DATA_P4_Msk) );
}

void PORT_P00_OpenDrain_En(void){
  Field_Mod8(&PORT.P0_OD.reg, (uint8)PORT_P0_OD_P0_Pos, (uint8)PORT_P0_OD_P0_Msk, 1u);
}

void PORT_P00_OpenDrain_Dis(void){
  Field_Mod8(&PORT.P0_OD.reg, (uint8)PORT_P0_OD_P0_Pos, (uint8)PORT_P0_OD_P0_Msk, 0u);
}

void PORT_P01_OpenDrain_En(void){
  Field_Mod8(&PORT.P0_OD.reg, (uint8)PORT_P0_OD_P1_Pos, (uint8)PORT_P0_OD_P1_Msk, 1u);
}

void PORT_P01_OpenDrain_Dis(void){
  Field_Mod8(&PORT.P0_OD.reg, (uint8)PORT_P0_OD_P1_Pos, (uint8)PORT_P0_OD_P1_Msk, 0u);
}

void PORT_P02_OpenDrain_En(void){
  Field_Mod8(&PORT.P0_OD.reg, (uint8)PORT_P0_OD_P2_Pos, (uint8)PORT_P0_OD_P2_Msk, 1u);
}

void PORT_P02_OpenDrain_Dis(void){
  Field_Mod8(&PORT.P0_OD.reg, (uint8)PORT_P0_OD_P2_Pos, (uint8)PORT_P0_OD_P2_Msk, 0u);
}

void PORT_P03_OpenDrain_En(void){
  Field_Mod8(&PORT.P0_OD.reg, (uint8)PORT_P0_OD_P3_Pos, (uint8)PORT_P0_OD_P3_Msk, 1u);
}

void PORT_P03_OpenDrain_Dis(void){
  Field_Mod8(&PORT.P0_OD.reg, (uint8)PORT_P0_OD_P3_Pos, (uint8)PORT_P0_OD_P3_Msk, 0u);
}

void PORT_P04_OpenDrain_En(void){
  Field_Mod8(&PORT.P0_OD.reg, (uint8)PORT_P0_OD_P4_Pos, (uint8)PORT_P0_OD_P4_Msk, 1u);
}

void PORT_P04_OpenDrain_Dis(void){
  Field_Mod8(&PORT.P0_OD.reg, (uint8)PORT_P0_OD_P4_Pos, (uint8)PORT_P0_OD_P4_Msk, 0u);
}

void PORT_P00_PullUpDown_En(void){
  Field_Mod8(&PORT.P0_PUDEN.reg, (uint8)PORT_P0_PUDEN_P0_Pos, (uint8)PORT_P0_PUDEN_P0_Msk, 1u);
}

void PORT_P00_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P0_PUDEN.reg, (uint8)PORT_P0_PUDEN_P0_Pos, (uint8)PORT_P0_PUDEN_P0_Msk, 0u);
}

void PORT_P01_PullUpDown_En(void){
  Field_Mod8(&PORT.P0_PUDEN.reg, (uint8)PORT_P0_PUDEN_P1_Pos, (uint8)PORT_P0_PUDEN_P1_Msk, 1u);
}

void PORT_P01_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P0_PUDEN.reg, (uint8)PORT_P0_PUDEN_P1_Pos, (uint8)PORT_P0_PUDEN_P1_Msk, 0u);
}

void PORT_P02_PullUpDown_En(void){
  Field_Mod8(&PORT.P0_PUDEN.reg, (uint8)PORT_P0_PUDEN_P2_Pos, (uint8)PORT_P0_PUDEN_P2_Msk, 1u);
}

void PORT_P02_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P0_PUDEN.reg, (uint8)PORT_P0_PUDEN_P2_Pos, (uint8)PORT_P0_PUDEN_P2_Msk, 0u);
}

void PORT_P03_PullUpDown_En(void){
  Field_Mod8(&PORT.P0_PUDEN.reg, (uint8)PORT_P0_PUDEN_P3_Pos, (uint8)PORT_P0_PUDEN_P3_Msk, 1u);
}

void PORT_P03_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P0_PUDEN.reg, (uint8)PORT_P0_PUDEN_P3_Pos, (uint8)PORT_P0_PUDEN_P3_Msk, 0u);
}

void PORT_P04_PullUpDown_En(void){
  Field_Mod8(&PORT.P0_PUDEN.reg, (uint8)PORT_P0_PUDEN_P4_Pos, (uint8)PORT_P0_PUDEN_P4_Msk, 1u);
}

void PORT_P04_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P0_PUDEN.reg, (uint8)PORT_P0_PUDEN_P4_Pos, (uint8)PORT_P0_PUDEN_P4_Msk, 0u);
}

void PORT_P00_PullUp_Set(void){
  Field_Mod8(&PORT.P0_PUDSEL.reg, (uint8)PORT_P0_PUDSEL_P0_Pos, (uint8)PORT_P0_PUDSEL_P0_Msk, 1u);
}

void PORT_P00_PullDown_Set(void){
  Field_Mod8(&PORT.P0_PUDSEL.reg, (uint8)PORT_P0_PUDSEL_P0_Pos, (uint8)PORT_P0_PUDSEL_P0_Msk, 0u);
}

void PORT_P01_PullUp_Set(void){
  Field_Mod8(&PORT.P0_PUDSEL.reg, (uint8)PORT_P0_PUDSEL_P1_Pos, (uint8)PORT_P0_PUDSEL_P1_Msk, 1u);
}

void PORT_P01_PullDown_Set(void){
  Field_Mod8(&PORT.P0_PUDSEL.reg, (uint8)PORT_P0_PUDSEL_P1_Pos, (uint8)PORT_P0_PUDSEL_P1_Msk, 0u);
}

void PORT_P02_PullUp_Set(void){
  Field_Mod8(&PORT.P0_PUDSEL.reg, (uint8)PORT_P0_PUDSEL_P2_Pos, (uint8)PORT_P0_PUDSEL_P2_Msk, 1u);
}

void PORT_P02_PullDown_Set(void){
  Field_Mod8(&PORT.P0_PUDSEL.reg, (uint8)PORT_P0_PUDSEL_P2_Pos, (uint8)PORT_P0_PUDSEL_P2_Msk, 0u);
}

void PORT_P03_PullUp_Set(void){
  Field_Mod8(&PORT.P0_PUDSEL.reg, (uint8)PORT_P0_PUDSEL_P3_Pos, (uint8)PORT_P0_PUDSEL_P3_Msk, 1u);
}

void PORT_P03_PullDown_Set(void){
  Field_Mod8(&PORT.P0_PUDSEL.reg, (uint8)PORT_P0_PUDSEL_P3_Pos, (uint8)PORT_P0_PUDSEL_P3_Msk, 0u);
}

void PORT_P04_PullUp_Set(void){
  Field_Mod8(&PORT.P0_PUDSEL.reg, (uint8)PORT_P0_PUDSEL_P4_Pos, (uint8)PORT_P0_PUDSEL_P4_Msk, 1u);
}

void PORT_P04_PullDown_Set(void){
  Field_Mod8(&PORT.P0_PUDSEL.reg, (uint8)PORT_P0_PUDSEL_P4_Pos, (uint8)PORT_P0_PUDSEL_P4_Msk, 0u);
}

void PORT_P10_Output_Set(void){
  Field_Mod8(&PORT.P1_DIR.reg, (uint8)PORT_P1_DIR_P0_Pos, (uint8)PORT_P1_DIR_P0_Msk, 1u);
}

void PORT_P10_Input_Set(void){
  Field_Mod8(&PORT.P1_DIR.reg, (uint8)PORT_P1_DIR_P0_Pos, (uint8)PORT_P1_DIR_P0_Msk, 0u);
}

void PORT_P11_Output_Set(void){
  Field_Mod8(&PORT.P1_DIR.reg, (uint8)PORT_P1_DIR_P1_Pos, (uint8)PORT_P1_DIR_P1_Msk, 1u);
}

void PORT_P11_Input_Set(void){
  Field_Mod8(&PORT.P1_DIR.reg, (uint8)PORT_P1_DIR_P1_Pos, (uint8)PORT_P1_DIR_P1_Msk, 0u);
}

void PORT_P12_Output_Set(void){
  Field_Mod8(&PORT.P1_DIR.reg, (uint8)PORT_P1_DIR_P2_Pos, (uint8)PORT_P1_DIR_P2_Msk, 1u);
}

void PORT_P12_Input_Set(void){
  Field_Mod8(&PORT.P1_DIR.reg, (uint8)PORT_P1_DIR_P2_Pos, (uint8)PORT_P1_DIR_P2_Msk, 0u);
}

void PORT_P13_Output_Set(void){
  Field_Mod8(&PORT.P1_DIR.reg, (uint8)PORT_P1_DIR_P3_Pos, (uint8)PORT_P1_DIR_P3_Msk, 1u);
}

void PORT_P13_Input_Set(void){
  Field_Mod8(&PORT.P1_DIR.reg, (uint8)PORT_P1_DIR_P3_Pos, (uint8)PORT_P1_DIR_P3_Msk, 0u);
}

void PORT_P14_Output_Set(void){
  Field_Mod8(&PORT.P1_DIR.reg, (uint8)PORT_P1_DIR_P4_Pos, (uint8)PORT_P1_DIR_P4_Msk, 1u);
}

void PORT_P14_Input_Set(void){
  Field_Mod8(&PORT.P1_DIR.reg, (uint8)PORT_P1_DIR_P4_Pos, (uint8)PORT_P1_DIR_P4_Msk, 0u);
}

void PORT_P10_Output_High_Set(void){
  Field_Mod8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P0_Pos, (uint8)PORT_P1_DATA_P0_Msk, 1u);
}

void PORT_P10_Output_Low_Set(void){
  Field_Mod8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P0_Pos, (uint8)PORT_P1_DATA_P0_Msk, 0u);
}

void PORT_P10_Output_Toggle_Set(void){
  Field_Inv8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P0_Msk);
}

void PORT_P11_Output_High_Set(void){
  Field_Mod8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P1_Pos, (uint8)PORT_P1_DATA_P1_Msk, 1u);
}

void PORT_P11_Output_Low_Set(void){
  Field_Mod8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P1_Pos, (uint8)PORT_P1_DATA_P1_Msk, 0u);
}

void PORT_P11_Output_Toggle_Set(void){
  Field_Inv8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P1_Msk);
}

void PORT_P12_Output_High_Set(void){
  Field_Mod8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P2_Pos, (uint8)PORT_P1_DATA_P2_Msk, 1u);
}

void PORT_P12_Output_Low_Set(void){
  Field_Mod8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P2_Pos, (uint8)PORT_P1_DATA_P2_Msk, 0u);
}

void PORT_P12_Output_Toggle_Set(void){
  Field_Inv8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P2_Msk);
}

void PORT_P13_Output_High_Set(void){
  Field_Mod8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P3_Pos, (uint8)PORT_P1_DATA_P3_Msk, 1u);
}

void PORT_P13_Output_Low_Set(void){
  Field_Mod8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P3_Pos, (uint8)PORT_P1_DATA_P3_Msk, 0u);
}

void PORT_P13_Output_Toggle_Set(void){
  Field_Inv8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P3_Msk);
}

void PORT_P14_Output_High_Set(void){
  Field_Mod8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P4_Pos, (uint8)PORT_P1_DATA_P4_Msk, 1u);
}

void PORT_P14_Output_Low_Set(void){
  Field_Mod8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P4_Pos, (uint8)PORT_P1_DATA_P4_Msk, 0u);
}

void PORT_P14_Output_Toggle_Set(void){
  Field_Inv8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P4_Msk);
}

uint8 PORT_P10_Get(void){
   return( u8_Field_Rd8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P0_Pos, (uint8)PORT_P1_DATA_P0_Msk) );
}

uint8 PORT_P11_Get(void){
   return( u8_Field_Rd8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P1_Pos, (uint8)PORT_P1_DATA_P1_Msk) );
}

uint8 PORT_P12_Get(void){
   return( u8_Field_Rd8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P2_Pos, (uint8)PORT_P1_DATA_P2_Msk) );
}

uint8 PORT_P13_Get(void){
   return( u8_Field_Rd8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P3_Pos, (uint8)PORT_P1_DATA_P3_Msk) );
}

uint8 PORT_P14_Get(void){
   return( u8_Field_Rd8(&PORT.P1_DATA.reg, (uint8)PORT_P1_DATA_P4_Pos, (uint8)PORT_P1_DATA_P4_Msk) );
}

void PORT_P10_OpenDrain_En(void){
  Field_Mod8(&PORT.P1_OD.reg, (uint8)PORT_P1_OD_P0_Pos, (uint8)PORT_P1_OD_P0_Msk, 1u);
}

void PORT_P10_OpenDrain_Dis(void){
  Field_Mod8(&PORT.P1_OD.reg, (uint8)PORT_P1_OD_P0_Pos, (uint8)PORT_P1_OD_P0_Msk, 0u);
}

void PORT_P11_OpenDrain_En(void){
  Field_Mod8(&PORT.P1_OD.reg, (uint8)PORT_P1_OD_P1_Pos, (uint8)PORT_P1_OD_P1_Msk, 1u);
}

void PORT_P11_OpenDrain_Dis(void){
  Field_Mod8(&PORT.P1_OD.reg, (uint8)PORT_P1_OD_P1_Pos, (uint8)PORT_P1_OD_P1_Msk, 0u);
}

void PORT_P12_P13_OpenDrain_En(void){
  Field_Mod8(&PORT.P1_OD.reg, (uint8)PORT_P1_OD_P3_P2_Pos, (uint8)PORT_P1_OD_P3_P2_Msk, 1u);
}

void PORT_P12_P13_OpenDrain_Dis(void){
  Field_Mod8(&PORT.P1_OD.reg, (uint8)PORT_P1_OD_P3_P2_Pos, (uint8)PORT_P1_OD_P3_P2_Msk, 0u);
}

void PORT_P14_OpenDrain_En(void){
  Field_Mod8(&PORT.P1_OD.reg, (uint8)PORT_P1_OD_P4_Pos, (uint8)PORT_P1_OD_P4_Msk, 1u);
}

void PORT_P14_OpenDrain_Dis(void){
  Field_Mod8(&PORT.P1_OD.reg, (uint8)PORT_P1_OD_P4_Pos, (uint8)PORT_P1_OD_P4_Msk, 0u);
}

void PORT_P10_PullUpDown_En(void){
  Field_Mod8(&PORT.P1_PUDEN.reg, (uint8)PORT_P1_PUDEN_P0_Pos, (uint8)PORT_P1_PUDEN_P0_Msk, 1u);
}

void PORT_P10_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P1_PUDEN.reg, (uint8)PORT_P1_PUDEN_P0_Pos, (uint8)PORT_P1_PUDEN_P0_Msk, 0u);
}

void PORT_P11_PullUpDown_En(void){
  Field_Mod8(&PORT.P1_PUDEN.reg, (uint8)PORT_P1_PUDEN_P1_Pos, (uint8)PORT_P1_PUDEN_P1_Msk, 1u);
}

void PORT_P11_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P1_PUDEN.reg, (uint8)PORT_P1_PUDEN_P1_Pos, (uint8)PORT_P1_PUDEN_P1_Msk, 0u);
}

void PORT_P12_PullUpDown_En(void){
  Field_Mod8(&PORT.P1_PUDEN.reg, (uint8)PORT_P1_PUDEN_P2_Pos, (uint8)PORT_P1_PUDEN_P2_Msk, 1u);
}

void PORT_P12_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P1_PUDEN.reg, (uint8)PORT_P1_PUDEN_P2_Pos, (uint8)PORT_P1_PUDEN_P2_Msk, 0u);
}

void PORT_P13_PullUpDown_En(void){
  Field_Mod8(&PORT.P1_PUDEN.reg, (uint8)PORT_P1_PUDEN_P3_Pos, (uint8)PORT_P1_PUDEN_P3_Msk, 1u);
}

void PORT_P13_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P1_PUDEN.reg, (uint8)PORT_P1_PUDEN_P3_Pos, (uint8)PORT_P1_PUDEN_P3_Msk, 0u);
}

void PORT_P14_PullUpDown_En(void){
  Field_Mod8(&PORT.P1_PUDEN.reg, (uint8)PORT_P1_PUDEN_P4_Pos, (uint8)PORT_P1_PUDEN_P4_Msk, 1u);
}

void PORT_P14_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P1_PUDEN.reg, (uint8)PORT_P1_PUDEN_P4_Pos, (uint8)PORT_P1_PUDEN_P4_Msk, 0u);
}

void PORT_P10_PullUp_Set(void){
  Field_Mod8(&PORT.P1_PUDSEL.reg, (uint8)PORT_P1_PUDSEL_P0_Pos, (uint8)PORT_P1_PUDSEL_P0_Msk, 1u);
}

void PORT_P10_PullDown_Set(void){
  Field_Mod8(&PORT.P1_PUDSEL.reg, (uint8)PORT_P1_PUDSEL_P0_Pos, (uint8)PORT_P1_PUDSEL_P0_Msk, 0u);
}

void PORT_P11_PullUp_Set(void){
  Field_Mod8(&PORT.P1_PUDSEL.reg, (uint8)PORT_P1_PUDSEL_P1_Pos, (uint8)PORT_P1_PUDSEL_P1_Msk, 1u);
}

void PORT_P11_PullDown_Set(void){
  Field_Mod8(&PORT.P1_PUDSEL.reg, (uint8)PORT_P1_PUDSEL_P1_Pos, (uint8)PORT_P1_PUDSEL_P1_Msk, 0u);
}

void PORT_P12_PullUp_Set(void){
  Field_Mod8(&PORT.P1_PUDSEL.reg, (uint8)PORT_P1_PUDSEL_P2_Pos, (uint8)PORT_P1_PUDSEL_P2_Msk, 1u);
}

void PORT_P12_PullDown_Set(void){
  Field_Mod8(&PORT.P1_PUDSEL.reg, (uint8)PORT_P1_PUDSEL_P2_Pos, (uint8)PORT_P1_PUDSEL_P2_Msk, 0u);
}

void PORT_P13_PullUp_Set(void){
  Field_Mod8(&PORT.P1_PUDSEL.reg, (uint8)PORT_P1_PUDSEL_P3_Pos, (uint8)PORT_P1_PUDSEL_P3_Msk, 1u);
}

void PORT_P13_PullDown_Set(void){
  Field_Mod8(&PORT.P1_PUDSEL.reg, (uint8)PORT_P1_PUDSEL_P3_Pos, (uint8)PORT_P1_PUDSEL_P3_Msk, 0u);
}

void PORT_P14_PullUp_Set(void){
  Field_Mod8(&PORT.P1_PUDSEL.reg, (uint8)PORT_P1_PUDSEL_P4_Pos, (uint8)PORT_P1_PUDSEL_P4_Msk, 1u);
}

void PORT_P14_PullDown_Set(void){
  Field_Mod8(&PORT.P1_PUDSEL.reg, (uint8)PORT_P1_PUDSEL_P4_Pos, (uint8)PORT_P1_PUDSEL_P4_Msk, 0u);
}

void PORT_P20_Dis(void){
  Field_Mod8(&PORT.P2_DIR.reg, (uint8)PORT_P2_DIR_P0_Pos, (uint8)PORT_P2_DIR_P0_Msk, 1u);
}

void PORT_P20_Input_Set(void){
  Field_Mod8(&PORT.P2_DIR.reg, (uint8)PORT_P2_DIR_P0_Pos, (uint8)PORT_P2_DIR_P0_Msk, 0u);
}

void PORT_P22_Dis(void){
  Field_Mod8(&PORT.P2_DIR.reg, (uint8)PORT_P2_DIR_P2_Pos, (uint8)PORT_P2_DIR_P2_Msk, 1u);
}

void PORT_P22_Input_Set(void){
  Field_Mod8(&PORT.P2_DIR.reg, (uint8)PORT_P2_DIR_P2_Pos, (uint8)PORT_P2_DIR_P2_Msk, 0u);
}

void PORT_P23_Dis(void){
  Field_Mod8(&PORT.P2_DIR.reg, (uint8)PORT_P2_DIR_P3_Pos, (uint8)PORT_P2_DIR_P3_Msk, 1u);
}

void PORT_P23_Input_Set(void){
  Field_Mod8(&PORT.P2_DIR.reg, (uint8)PORT_P2_DIR_P3_Pos, (uint8)PORT_P2_DIR_P3_Msk, 0u);
}

void PORT_P24_Dis(void){
  Field_Mod8(&PORT.P2_DIR.reg, (uint8)PORT_P2_DIR_P4_Pos, (uint8)PORT_P2_DIR_P4_Msk, 1u);
}

void PORT_P24_Input_Set(void){
  Field_Mod8(&PORT.P2_DIR.reg, (uint8)PORT_P2_DIR_P4_Pos, (uint8)PORT_P2_DIR_P4_Msk, 0u);
}

void PORT_P25_Dis(void){
  Field_Mod8(&PORT.P2_DIR.reg, (uint8)PORT_P2_DIR_P5_Pos, (uint8)PORT_P2_DIR_P5_Msk, 1u);
}

void PORT_P25_Input_Set(void){
  Field_Mod8(&PORT.P2_DIR.reg, (uint8)PORT_P2_DIR_P5_Pos, (uint8)PORT_P2_DIR_P5_Msk, 0u);
}

uint8 PORT_P20_Get(void){
   return( u8_Field_Rd8(&PORT.P2_DATA.reg, (uint8)PORT_P2_DATA_P0_Pos, (uint8)PORT_P2_DATA_P0_Msk) );
}

uint8 PORT_P22_Get(void){
   return( u8_Field_Rd8(&PORT.P2_DATA.reg, (uint8)PORT_P2_DATA_P2_Pos, (uint8)PORT_P2_DATA_P2_Msk) );
}

uint8 PORT_P23_Get(void){
   return( u8_Field_Rd8(&PORT.P2_DATA.reg, (uint8)PORT_P2_DATA_P3_Pos, (uint8)PORT_P2_DATA_P3_Msk) );
}

uint8 PORT_P24_Get(void){
   return( u8_Field_Rd8(&PORT.P2_DATA.reg, (uint8)PORT_P2_DATA_P4_Pos, (uint8)PORT_P2_DATA_P4_Msk) );
}

uint8 PORT_P25_Get(void){
   return( u8_Field_Rd8(&PORT.P2_DATA.reg, (uint8)PORT_P2_DATA_P5_Pos, (uint8)PORT_P2_DATA_P5_Msk) );
}

void PORT_P20_PullUpDown_En(void){
  Field_Mod8(&PORT.P2_PUDEN.reg, (uint8)PORT_P2_PUDEN_P0_Pos, (uint8)PORT_P2_PUDEN_P0_Msk, 1u);
}

void PORT_P20_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P2_PUDEN.reg, (uint8)PORT_P2_PUDEN_P0_Pos, (uint8)PORT_P2_PUDEN_P0_Msk, 0u);
}

void PORT_P22_PullUpDown_En(void){
  Field_Mod8(&PORT.P2_PUDEN.reg, (uint8)PORT_P2_PUDEN_P2_Pos, (uint8)PORT_P2_PUDEN_P2_Msk, 1u);
}

void PORT_P22_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P2_PUDEN.reg, (uint8)PORT_P2_PUDEN_P2_Pos, (uint8)PORT_P2_PUDEN_P2_Msk, 0u);
}

void PORT_P23_PullUpDown_En(void){
  Field_Mod8(&PORT.P2_PUDEN.reg, (uint8)PORT_P2_PUDEN_P3_Pos, (uint8)PORT_P2_PUDEN_P3_Msk, 1u);
}

void PORT_P23_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P2_PUDEN.reg, (uint8)PORT_P2_PUDEN_P3_Pos, (uint8)PORT_P2_PUDEN_P3_Msk, 0u);
}

void PORT_P24_PullUpDown_En(void){
  Field_Mod8(&PORT.P2_PUDEN.reg, (uint8)PORT_P2_PUDEN_P4_Pos, (uint8)PORT_P2_PUDEN_P4_Msk, 1u);
}

void PORT_P24_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P2_PUDEN.reg, (uint8)PORT_P2_PUDEN_P4_Pos, (uint8)PORT_P2_PUDEN_P4_Msk, 0u);
}

void PORT_P25_PullUpDown_En(void){
  Field_Mod8(&PORT.P2_PUDEN.reg, (uint8)PORT_P2_PUDEN_P5_Pos, (uint8)PORT_P2_PUDEN_P5_Msk, 1u);
}

void PORT_P25_PullUpDown_Dis(void){
  Field_Mod8(&PORT.P2_PUDEN.reg, (uint8)PORT_P2_PUDEN_P5_Pos, (uint8)PORT_P2_PUDEN_P5_Msk, 0u);
}

void PORT_P20_PullUp_Set(void){
  Field_Mod8(&PORT.P2_PUDSEL.reg, (uint8)PORT_P2_PUDSEL_P0_Pos, (uint8)PORT_P2_PUDSEL_P0_Msk, 1u);
}

void PORT_P20_PullDown_Set(void){
  Field_Mod8(&PORT.P2_PUDSEL.reg, (uint8)PORT_P2_PUDSEL_P0_Pos, (uint8)PORT_P2_PUDSEL_P0_Msk, 0u);
}

void PORT_P22_PullUp_Set(void){
  Field_Mod8(&PORT.P2_PUDSEL.reg, (uint8)PORT_P2_PUDSEL_P2_Pos, (uint8)PORT_P2_PUDSEL_P2_Msk, 1u);
}

void PORT_P22_PullDown_Set(void){
  Field_Mod8(&PORT.P2_PUDSEL.reg, (uint8)PORT_P2_PUDSEL_P2_Pos, (uint8)PORT_P2_PUDSEL_P2_Msk, 0u);
}

void PORT_P23_PullUp_Set(void){
  Field_Mod8(&PORT.P2_PUDSEL.reg, (uint8)PORT_P2_PUDSEL_P3_Pos, (uint8)PORT_P2_PUDSEL_P3_Msk, 1u);
}

void PORT_P23_PullDown_Set(void){
  Field_Mod8(&PORT.P2_PUDSEL.reg, (uint8)PORT_P2_PUDSEL_P3_Pos, (uint8)PORT_P2_PUDSEL_P3_Msk, 0u);
}

void PORT_P24_PullUp_Set(void){
  Field_Mod8(&PORT.P2_PUDSEL.reg, (uint8)PORT_P2_PUDSEL_P4_Pos, (uint8)PORT_P2_PUDSEL_P4_Msk, 1u);
}

void PORT_P24_PullDown_Set(void){
  Field_Mod8(&PORT.P2_PUDSEL.reg, (uint8)PORT_P2_PUDSEL_P4_Pos, (uint8)PORT_P2_PUDSEL_P4_Msk, 0u);
}

void PORT_P25_PullUp_Set(void){
  Field_Mod8(&PORT.P2_PUDSEL.reg, (uint8)PORT_P2_PUDSEL_P5_Pos, (uint8)PORT_P2_PUDSEL_P5_Msk, 1u);
}

void PORT_P25_PullDown_Set(void){
  Field_Mod8(&PORT.P2_PUDSEL.reg, (uint8)PORT_P2_PUDSEL_P5_Pos, (uint8)PORT_P2_PUDSEL_P5_Msk, 0u);
}
*/
/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

