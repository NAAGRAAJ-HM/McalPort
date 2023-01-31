#pragma once
/******************************************************************************/
/* File   : McalPort_Version.hpp                                              */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALPORT_AR_RELEASE_VERSION_MAJOR                                      4
#define MCALPORT_AR_RELEASE_VERSION_MINOR                                      3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALPORT_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALPORT_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALPORT_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALPORT_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

