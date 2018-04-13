/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.c
**     Project     : SerialECHO
**     Processor   : SKEAZN64MLH2
**     Component   : MKE02Z64QH2
**     Version     : Component 01.044, Driver 01.04, CPU db: 3.00.000
**     Repository  : Kinetis
**     Datasheet   : MKE02Z64M20SF0RM, Rev.2.1, Apr-23 2013; KEAZ64RM, Rev.1, Sep 2013
**     Compiler    : GNU C Compiler
**     Date/Time   : 2018-04-02, 16:22, # CodeGen: 1
**     Abstract    :
**
**     Settings    :
**          Component name                                 : Cpu
**          CPU type                                       : SKEAZN64MLH2
**          CPU                                            : CPU
**          MemModelDev                                    : MemModel_NoFlexMem
**          Clock settings                                 : 
**            Internal oscillator                          : 
**              Slow internal reference clock [kHz]        : 31.25
**              Initialize slow trim value                 : no
**            System oscillator                            : Disabled
**            Clock source settings                        : 1
**              Clock source setting 0                     : 
**                Internal reference clock                 : 
**                  ICSIRCLK clock                         : Enabled
**                  ICSIRCLK in stop                       : Disabled
**                  ICSIRCLK clock [MHz]                   : 0.03125
**                External reference clock                 : 
**                  OSCERCLK in stop                       : Disabled
**                  OSCERCLK clock [MHz]                   : 0
**                ICS settings                             : 
**                  ICS mode                               : FEI
**                  ICS external ref. clock [MHz]          : 0
**                  Clock monitor                          : Disabled
**                  FLL settings                           : 
**                    FLL module                           : Enabled
**                    FLL output [MHz]                     : 32
**                    ICSFFCLK clock [kHz]                 : 31.25
**                    Reference clock source               : Slow internal clock
**                    FLL reference clock [kHz]            : 31.25
**                    Multiplication factor                : Auto select
**                    Loss of lock interrupt               : Disabled
**                  ICS output                             : FLL clock
**                  ICS output prescaler                   : Auto select
**                  ICS output clock                       : 16
**          Initialization priority                        : interrupts enabled
**          Watchdog disable                               : yes
**          Internal peripherals                           : 
**            Bus clock output                             : 
**              Clock output divider                       : 1
**              Bus clock output on pin                    : Disabled
**            NMI pin                                      : Enabled
**              NMI Pin                                    : PTB4/FTM2_CH4/SPI0_MISO/NMI/ACMP1_IN2
**              NMI Pin signal                             : 
**            Reset pin                                    : Enabled
**              Reset pin                                  : PTA5/IRQ/FTM0_CLK/RESET
**              Reset pin signal                           : 
**            Shared Flash memory organization             : 
**              Flash blocks                               : 2
**                Flash block 0                            : PFlash
**                  Address                                : 0x0
**                  Size [bytes]                           : 65536
**                  Write unit size Size [bytes]           : 4
**                  Erase unit size Size [bytes]           : 512
**                Flash block 1                            : EFlash
**                  Address                                : 0x10000000
**                  Size [bytes]                           : 256
**                  Write unit size Size [bytes]           : 1
**                  Erase unit size Size [bytes]           : 2
**            Flash configuration field                    : Enabled
**              Security settings                          : 
**                Flash security                           : Unsecured
**                Backdoor key                             : Disabled (11)
**                Backdoor key 0                           : 255
**                Backdoor key 1                           : 255
**                Backdoor key 2                           : 255
**                Backdoor key 3                           : 255
**                Backdoor key 4                           : 255
**                Backdoor key 5                           : 255
**                Backdoor key 6                           : 255
**                Backdoor key 7                           : 255
**              Protection regions                         : 
**                Flash protection settings                : 
**                  Protection scenario                    : No protection
**                Eeprom protection settings               : 
**                  Protection state                       : Disabled
**                  Protection size                        : 256 bytes
**            MCM settings                                 : Disabled
**            Power management controller                  : 
**              LVD module                                 : Enabled
**                LVD reset                                : Enabled
**                LVD in STOP                              : Enabled
**                LVD voltage treshold                     : Low
**                LVW voltage treshold                     : Low
**                Bandgap buffer                           : Disabled
**                LVD interrupt                            : 
**                  Interrupt                              : INT_LVD_LVW
**                  Interrupt request                      : Disabled
**                  Interrupt priority                     : 0 (Highest)
**                  LVW interrupt                          : Disabled
**            System Integration Module                    : 
**              Clock gating control                       : Disabled
**          CPU interrupts/resets                          : 
**            Non-maskable interrupt                       : Enabled
**              Interrupt                                  : INT_NMI
**            Hard fault                                   : Disabled
**            Supervisor call                              : Disabled
**            Pendable service                             : Disabled
**            ICS Loss of lock                             : Disabled
**          Low power mode settings                        : 
**            Operation mode settings                      : 
**              WAIT operation mode                        : 
**                Return to wait after ISR                 : no
**              SLEEP operation mode                       : 
**                Return to stop after ISR                 : no
**              STOP operation mode                        : Disabled
**          Clock configurations                           : 1
**            Clock configuration 0                        : 
**              __IRC_32kHz                                : 0.03125
**              __SYSTEM_OSC                               : 10
**              Clock source setting                       : configuration 0
**                ICS mode                                 : FEI
**                ICS output [MHz]                         : 16
**                ICSIRCLK clock [MHz]                     : 0.03125
**                ICSFFCLK [kHz]                           : 31.25
**                OSCERCLK clock [MHz]                     : 0
**              System clocks                              : 
**                Core clock                               : 16
**                Bus clock prescaler                      : Auto select
**                Bus clock                                : 16
**     Contents    :
**         No public methods
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
** @file Cpu.c
** @version 01.04
** @brief
**
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

/* MODULE Cpu. */

/* {Default RTOS Adapter} No RTOS includes */
#include "Serial.h"
#include "ASerialLdd1.h"
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "Events.h"
#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Global variables */
volatile uint8_t SR_reg;               /* Current value of the FAULTMASK register */
volatile uint8_t SR_lock = 0x00U;      /* Lock */


/*
** ===================================================================
**     Method      :  Cpu_INT_NMIInterrupt (component MKE02Z64QH2)
**
**     Description :
**         This ISR services the Non Maskable Interrupt interrupt.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(Cpu_INT_NMIInterrupt)
{
  Cpu_OnNMIINT();
}

/*
** ===================================================================
**     Method      :  Cpu_Cpu_Interrupt (component MKE02Z64QH2)
**
**     Description :
**         This ISR services an unused interrupt/exception vector.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
PE_ISR(Cpu_Interrupt)
{
  /* This code can be changed using the CPU component property "Build Options / Unhandled int code" */
  PE_DEBUGHALT();
}


/*** !!! Here you can place your own code using property "User data declarations" on the build options tab. !!! ***/

/*lint -esym(765,__init_hardware) Disable MISRA rule (8.10) checking for symbols (__init_hardware). The function is linked to the EWL library */
/*lint -esym(765,Cpu_Interrupt) Disable MISRA rule (8.10) checking for symbols (Cpu_Interrupt). */
void __init_hardware(void)
{

  /*** !!! Here you can place your own code before PE initialization using property "User code before PE initialization" on the build options tab. !!! ***/

  /*** ### SKEAZN64MLH2 "Cpu" init code ... ***/
  /*** PE initialization code after reset ***/
  SCB_VTOR = (uint32_t)(&__vect_table); /* Set the interrupt vector table position */
  /* Disable the WDOG module */
  /* WDOG_TOVAL: TOVAL=0xE803 */
  WDOG_TOVAL = WDOG_TOVAL_TOVAL(0xE803); /* Timeout value */
  /* WDOG_CS2: WIN=0,FLG=0,??=0,PRES=0,??=0,??=0,CLK=1 */
  WDOG_CS2 = WDOG_CS2_CLK(0x01);       /* 1-kHz clock source */
  /* WDOG_CS1: EN=0,INT=0,UPDATE=1,TST=0,DBG=0,WAIT=1,STOP=1 */
  WDOG_CS1 = WDOG_CS1_UPDATE_MASK |
             WDOG_CS1_TST(0x00) |
             WDOG_CS1_WAIT_MASK |
             WDOG_CS1_STOP_MASK;

  /* System clock initialization */
  /* ICS_C2: BDIV|=1 */
  ICS_C2 |= ICS_C2_BDIV(0x01);         /* Update system prescalers */
  /* SIM_BUSDIV: ??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,??=0,BUSDIV=0 */
  SIM_BUSDIV = 0x00U;                  /* Update system prescalers */
  /* Switch to FEI Mode */
  /* ICS_C1: CLKS=0,RDIV=0,IREFS=1,IRCLKEN=1,IREFSTEN=0 */
  ICS_C1 = ICS_C1_CLKS(0x00) |
           ICS_C1_RDIV(0x00) |
           ICS_C1_IREFS_MASK |
           ICS_C1_IRCLKEN_MASK;
  /* ICS_C2: BDIV=1,LP=0 */
  ICS_C2 = (uint8_t)((ICS_C2 & (uint8_t)~(uint8_t)(
            ICS_C2_BDIV(0x06) |
            ICS_C2_LP_MASK
           )) | (uint8_t)(
            ICS_C2_BDIV(0x01)
           ));
  /* OSC_CR: OSCEN=0,??=0,OSCSTEN=0,OSCOS=0,??=0,RANGE=0,HGO=0,OSCINIT=0 */
  OSC_CR = 0x00U;
  while((ICS_S & ICS_S_IREFST_MASK) == 0x00U) { /* Check that the source of the FLL reference clock is the internal reference clock. */
  }
  while((ICS_S & 0x0CU) != 0x00U) {    /* Wait until output of the FLL is selected */
  }
  /*** End of PE initialization code after reset ***/

  /*** !!! Here you can place your own code after PE initialization using property "User code after PE initialization" on the build options tab. !!! ***/

}



/*
** ===================================================================
**     Method      :  PE_low_level_init (component MKE02Z64QH2)
**
**     Description :
**         Initializes beans and provides common register initialization. 
**         The method is called automatically as a part of the 
**         application initialization code.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void PE_low_level_init(void)
{
  #ifdef PEX_RTOS_INIT
    PEX_RTOS_INIT();                   /* Initialization of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
      /* Initialization of the SIM module */
        /* Initialization of the FTMRx_FlashConfig module */
      /* Initialization of the PMC module */
  /* PMC_SPMSC2: LVDV=0,LVWV=0 */
  PMC_SPMSC2 &= (uint8_t)~(uint8_t)(
                 PMC_SPMSC2_LVDV_MASK |
                 PMC_SPMSC2_LVWV(0x03)
                );
  /* PMC_SPMSC1: LVWACK=1,LVWIE=0,LVDRE=1,LVDSE=1,LVDE=1,??=0,BGBE=0 */
  PMC_SPMSC1 = (uint8_t)((PMC_SPMSC1 & (uint8_t)~(uint8_t)(
                PMC_SPMSC1_LVWIE_MASK |
                PMC_SPMSC1_BGBE_MASK |
                0x02U
               )) | (uint8_t)(
                PMC_SPMSC1_LVWACK_MASK |
                PMC_SPMSC1_LVDRE_MASK |
                PMC_SPMSC1_LVDSE_MASK |
                PMC_SPMSC1_LVDE_MASK
               ));
  /* Common initialization of the CPU registers */
  /* SIM_SOPT: CLKOE=0,RSTPE=1,NMIE=1 */
  SIM_SOPT = (uint32_t)((SIM_SOPT & (uint32_t)~(uint32_t)(
              SIM_SOPT_CLKOE_MASK
             )) | (uint32_t)(
              SIM_SOPT_RSTPE_MASK |
              SIM_SOPT_NMIE_MASK
             ));
  /* NVIC_IPR1: PRI_6=0 */
  NVIC_IPR1 &= (uint32_t)~(uint32_t)(NVIC_IP_PRI_6(0xFF));
  /* ### Asynchro serial "Serial" init code ... */
  Serial_Init();
  __EI();
}
  /* Flash configuration field */
  __attribute__ ((section (".cfmconfig"))) const uint8_t _cfm[0x10] = {
   /* NV_BACKKEY0: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY1: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY2: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY3: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY4: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY5: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY6: KEY=0xFF */
    0xFFU,
   /* NV_BACKKEY7: KEY=0xFF */
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
    0xFFU,
   /* NV_EEPROT: DPOPEN=1,??=0,??=0,??=0,??=0,DPS=7 */
    0x87U,
   /* NV_FPROT: FPOPEN=1,??=1,FPHDIS=1,FPHS=3,FPLDIS=1,FPLS=3 */
    0xFFU,
   /* NV_FSEC: KEYEN=3,??=1,??=1,??=1,??=1,SEC=2 */
    0xFEU,
   /* NV_FOPT: ??=1,??=1,??=1,??=1,??=1,??=1,??=1,??=1 */
    0xFFU
  };

/* END Cpu. */

#ifdef __cplusplus
}  /* extern "C" */
#endif

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
