/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.0
        Device            :  PIC16F1708
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.10 and above
        MPLAB 	          :  MPLAB X 5.35	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set lcdd4 aliases
#define lcdd4_TRIS                 TRISBbits.TRISB4
#define lcdd4_LAT                  LATBbits.LATB4
#define lcdd4_PORT                 PORTBbits.RB4
#define lcdd4_WPU                  WPUBbits.WPUB4
#define lcdd4_OD                   ODCONBbits.ODB4
#define lcdd4_ANS                  ANSELBbits.ANSB4
#define lcdd4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define lcdd4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define lcdd4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define lcdd4_GetValue()           PORTBbits.RB4
#define lcdd4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define lcdd4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define lcdd4_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define lcdd4_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define lcdd4_SetPushPull()        do { ODCONBbits.ODB4 = 0; } while(0)
#define lcdd4_SetOpenDrain()       do { ODCONBbits.ODB4 = 1; } while(0)
#define lcdd4_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define lcdd4_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set lcdd5 aliases
#define lcdd5_TRIS                 TRISBbits.TRISB5
#define lcdd5_LAT                  LATBbits.LATB5
#define lcdd5_PORT                 PORTBbits.RB5
#define lcdd5_WPU                  WPUBbits.WPUB5
#define lcdd5_OD                   ODCONBbits.ODB5
#define lcdd5_ANS                  ANSELBbits.ANSB5
#define lcdd5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define lcdd5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define lcdd5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define lcdd5_GetValue()           PORTBbits.RB5
#define lcdd5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define lcdd5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define lcdd5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define lcdd5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define lcdd5_SetPushPull()        do { ODCONBbits.ODB5 = 0; } while(0)
#define lcdd5_SetOpenDrain()       do { ODCONBbits.ODB5 = 1; } while(0)
#define lcdd5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define lcdd5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set lcdd6 aliases
#define lcdd6_TRIS                 TRISBbits.TRISB6
#define lcdd6_LAT                  LATBbits.LATB6
#define lcdd6_PORT                 PORTBbits.RB6
#define lcdd6_WPU                  WPUBbits.WPUB6
#define lcdd6_OD                   ODCONBbits.ODB6
#define lcdd6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define lcdd6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define lcdd6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define lcdd6_GetValue()           PORTBbits.RB6
#define lcdd6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define lcdd6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define lcdd6_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define lcdd6_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define lcdd6_SetPushPull()        do { ODCONBbits.ODB6 = 0; } while(0)
#define lcdd6_SetOpenDrain()       do { ODCONBbits.ODB6 = 1; } while(0)

// get/set lcdd7 aliases
#define lcdd7_TRIS                 TRISBbits.TRISB7
#define lcdd7_LAT                  LATBbits.LATB7
#define lcdd7_PORT                 PORTBbits.RB7
#define lcdd7_WPU                  WPUBbits.WPUB7
#define lcdd7_OD                   ODCONBbits.ODB7
#define lcdd7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define lcdd7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define lcdd7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define lcdd7_GetValue()           PORTBbits.RB7
#define lcdd7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define lcdd7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define lcdd7_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define lcdd7_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define lcdd7_SetPushPull()        do { ODCONBbits.ODB7 = 0; } while(0)
#define lcdd7_SetOpenDrain()       do { ODCONBbits.ODB7 = 1; } while(0)

// get/set regselect aliases
#define regselect_TRIS                 TRISCbits.TRISC0
#define regselect_LAT                  LATCbits.LATC0
#define regselect_PORT                 PORTCbits.RC0
#define regselect_WPU                  WPUCbits.WPUC0
#define regselect_OD                   ODCONCbits.ODC0
#define regselect_ANS                  ANSELCbits.ANSC0
#define regselect_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define regselect_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define regselect_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define regselect_GetValue()           PORTCbits.RC0
#define regselect_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define regselect_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define regselect_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define regselect_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define regselect_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define regselect_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define regselect_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define regselect_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set readwrite aliases
#define readwrite_TRIS                 TRISCbits.TRISC1
#define readwrite_LAT                  LATCbits.LATC1
#define readwrite_PORT                 PORTCbits.RC1
#define readwrite_WPU                  WPUCbits.WPUC1
#define readwrite_OD                   ODCONCbits.ODC1
#define readwrite_ANS                  ANSELCbits.ANSC1
#define readwrite_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define readwrite_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define readwrite_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define readwrite_GetValue()           PORTCbits.RC1
#define readwrite_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define readwrite_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define readwrite_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define readwrite_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define readwrite_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define readwrite_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)
#define readwrite_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define readwrite_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set enable aliases
#define enable_TRIS                 TRISCbits.TRISC2
#define enable_LAT                  LATCbits.LATC2
#define enable_PORT                 PORTCbits.RC2
#define enable_WPU                  WPUCbits.WPUC2
#define enable_OD                   ODCONCbits.ODC2
#define enable_ANS                  ANSELCbits.ANSC2
#define enable_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define enable_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define enable_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define enable_GetValue()           PORTCbits.RC2
#define enable_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define enable_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define enable_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define enable_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define enable_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define enable_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define enable_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define enable_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set button1 aliases
#define button1_TRIS                 TRISCbits.TRISC7
#define button1_LAT                  LATCbits.LATC7
#define button1_PORT                 PORTCbits.RC7
#define button1_WPU                  WPUCbits.WPUC7
#define button1_OD                   ODCONCbits.ODC7
#define button1_ANS                  ANSELCbits.ANSC7
#define button1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define button1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define button1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define button1_GetValue()           PORTCbits.RC7
#define button1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define button1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define button1_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define button1_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define button1_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define button1_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define button1_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define button1_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/