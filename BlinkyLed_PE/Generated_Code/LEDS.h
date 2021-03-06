/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LEDS.h
**     Project     : BlinkyLED_PE
**     Processor   : SKEAZN64MLH2
**     Component   : BitsIO
**     Version     : Component 02.108, Driver 01.00, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-05-18, 17:42, # CodeGen: 8
**     Abstract    :
**         This component "BitsIO" implements a multi-bit input/output.
**         It uses selected pins of one 1-bit to 8-bit port.
**         Note: This component is set to work in Output direction only.
**     Settings    :
**          Component name                                 : LEDS
**          Port                                           : GPIOB
**          BitsIO_LDD                                     : BitsIO_LDD
**          Pins                                           : 2
**            Pin0                                         : 
**              Pin                                        : PTE0/SPI0_SCK/FTM1_CLK
**              Pin signal                                 : 
**            Pin1                                         : 
**              Pin                                        : PTE1/SPI0_MOSI
**              Pin signal                                 : 
**          Direction                                      : Output
**          Initialization                                 : 
**            Init. direction                              : Output
**            Init. value                                  : 0
**          Safe mode                                      : yes
**          Optimization for                               : speed
**     Contents    :
**         GetDir - bool LEDS_GetDir(void);
**         GetVal - byte LEDS_GetVal(void);
**         PutVal - void LEDS_PutVal(byte Val);
**         GetBit - bool LEDS_GetBit(byte Bit);
**         PutBit - void LEDS_PutBit(byte Bit, bool Val);
**         SetBit - void LEDS_SetBit(byte Bit);
**         ClrBit - void LEDS_ClrBit(byte Bit);
**         NegBit - void LEDS_NegBit(byte Bit);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file LEDS.h
** @version 01.00
** @brief
**         This component "BitsIO" implements a multi-bit input/output.
**         It uses selected pins of one 1-bit to 8-bit port.
**         Note: This component is set to work in Output direction only.
*/         
/*!
**  @addtogroup LEDS_module LEDS module documentation
**  @{
*/         

#ifndef __LEDS_H
#define __LEDS_H

/* MODULE LEDS. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "BitsIoLdd1.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 




/*
** ===================================================================
**     Method      :  LEDS_GetDir (component BitsIO)
**     Description :
**         This method returns direction of the component.
**     Parameters  : None
**     Returns     :
**         ---        - Direction of the component (always <true>, Output only)
**                      <false> = Input, <true> = Output
** ===================================================================
*/
#define LEDS_GetDir() (BitsIoLdd1_GetDir(BitsIoLdd1_DeviceData))

/*
** ===================================================================
**     Method      :  LEDS_GetVal (component BitsIO)
**     Description :
**         This method returns an input value.
**           a) direction = Input  : reads the input value from the
**                                   pins and returns it
**           b) direction = Output : returns the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  : None
**     Returns     :
**         ---        - Input value (0 to 3)
** ===================================================================
*/
#define LEDS_GetVal() ((byte)BitsIoLdd1_GetVal(BitsIoLdd1_DeviceData))

/*
** ===================================================================
**     Method      :  LEDS_PutVal (component BitsIO)
**     Description :
**         This method writes the new output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Val        - Output value (0 to 3)
**     Returns     : Nothing
** ===================================================================
*/
#define LEDS_PutVal(Val) (BitsIoLdd1_PutVal(BitsIoLdd1_DeviceData, ((dword)(Val))))

bool LEDS_GetBit(byte Bit);
/*
** ===================================================================
**     Method      :  LEDS_GetBit (component BitsIO)
**     Description :
**         This method returns the specified bit of the input value.
**           a) direction = Input  : reads the input value from pins
**                                   and returns the specified bit
**           b) direction = Output : returns the specified bit
**                                   of the last written value
**         Note: This component is set to work in Output direction only.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to read (0 to 1)
**     Returns     :
**         ---        - Value of the specified bit (FALSE or TRUE)
**                      FALSE = "0" or "Low", TRUE = "1" or "High"
** ===================================================================
*/

/*
** ===================================================================
**     Method      :  LEDS_PutBit (component BitsIO)
**     Description :
**         This method writes the new value to the specified bit
**         of the output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit (0 to 1)
**         Val        - New value of the bit (FALSE or TRUE)
**                      FALSE = "0" or "Low", TRUE = "1" or "High"
**     Returns     : Nothing
** ===================================================================
*/
#define LEDS_PutBit(Bit,Val) ((void)BitsIoLdd1_PutBit(BitsIoLdd1_DeviceData, (Bit), (Val)))

/*
** ===================================================================
**     Method      :  LEDS_SetBit (component BitsIO)
**     Description :
**         This method sets (sets to one) the specified bit of the
**         output value.
**         [ It is the same as "PutBit(Bit,TRUE);" ]
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to set (0 to 1)
**     Returns     : Nothing
** ===================================================================
*/
#define LEDS_SetBit(Bit) ((void)BitsIoLdd1_SetBit(BitsIoLdd1_DeviceData, (Bit)))

/*
** ===================================================================
**     Method      :  LEDS_ClrBit (component BitsIO)
**     Description :
**         This method clears (sets to zero) the specified bit
**         of the output value.
**         [ It is the same as "PutBit(Bit,FALSE);" ]
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to clear (0 to 1)
**     Returns     : Nothing
** ===================================================================
*/
#define LEDS_ClrBit(Bit) ((void)BitsIoLdd1_ClrBit(BitsIoLdd1_DeviceData, (Bit)))

/*
** ===================================================================
**     Method      :  LEDS_NegBit (component BitsIO)
**     Description :
**         This method negates (inverts) the specified bit of the
**         output value.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Bit        - Number of the bit to invert (0 to 31)
**     Returns     : Nothing
** ===================================================================
*/
#define LEDS_NegBit(Bit) ((void)BitsIoLdd1_NegBit(BitsIoLdd1_DeviceData, (Bit)))

/* END LEDS. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __LEDS_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
