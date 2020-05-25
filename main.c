/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.0
        Device            :  PIC16F1708
        Driver Version    :  2.00
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

#include <pic16f1708.h>
#include <pic.h>

#include "mcc_generated_files/mcc.h"

/*
                         Main application
 */
void main(void)
{
    char tempstr[]= "Hello world";
    int stringsize;
    int i;
    
    // initialize the device
    SYSTEM_Initialize();

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    // Initialize 16x2 character LCD
    /* 4bit interface, 2line display
    */
    
    DELAY_milliseconds(20);      // wait time after Vcc rises to 4.5v
    
    
    // gpio direction should already been set before by MCC
    // in System_Initialize() function

    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    // ensure enable pin is inactive (high) to avoid latching invalid data to lcd module
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin

    
    // we want to write to lcd, so set r/w pin to 0
    readwrite_LAT = 0;
    
    // we will be writing to an instruction register, set register select to 0
    regselect_LAT = 0;
    
    // issue the function_set command, "001D NFxx" to set lcd to 4bit interface operation
    // since portb upper nibble is used, we will just use latb
    // for future improvement, maybe create a structure to hold all the d4 to d7 bits together
    LATB = 0x30;    // DL: interface data is 8/4 bits  1=4bit 0=8bit
                    // NL: number of line is 2/1       1=2line 0=1line
                    // F: font size is 5x11/5x8 dots   1=5x11 0=5x8
    
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    // ensure enable pin is inactive (high) to avoid latching invalid data to lcd module
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin

    DELAY_milliseconds(20);      // wait time after issuing first instruction
     
    // issue the function_set command, "001D NFxx" to set lcd to 4bit interface operation
    // since portb upper nibble is used, we will just use latb
    // for future improvement, maybe create a structure to hold all the d4 to d7 bits together
    LATB = 0x30;    // DL: interface data is 8/4 bits  1=4bit 0=8bit
                    // NL: number of line is 2/1       1=2line 0=1line
                    // F: font size is 5x11/5x8 dots   1=5x11 0=5x8
    
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    // ensure enable pin is inactive (high) to avoid latching invalid data to lcd module
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin

    DELAY_milliseconds(20);      // wait time after issuing 2nd instruction
    
    // issue the function_set command, "001D NFxx" to set lcd to 4bit interface operation
    // since portb upper nibble is used, we will just use latb
    // for future improvement, maybe create a structure to hold all the d4 to d7 bits together
    LATB = 0x30;    // DL: interface data is 8/4 bits  1=4bit 0=8bit
                    // NL: number of line is 2/1       1=2line 0=1line
                    // F: font size is 5x11/5x8 dots   1=5x11 0=5x8
    
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    // ensure enable pin is inactive (high) to avoid latching invalid data to lcd module
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
   
    LATB = 0x20;    // DL: interface data is 8/4 bits  1=4bit 0=8bit
                    // NL: number of line is 2/1       1=2line 0=1line
                    // F: font size is 5x11/5x8 dots   1=5x11 0=5x8
    
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    // ensure enable pin is inactive (high) to avoid latching invalid data to lcd module
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
  
    
    // start of 4bit pairing
    
    LATB = 0x20;    // DL: interface data is 8/4 bits  1=4bit 0=8bit
                    // NL: number of line is 2/1       1=2line 0=1line
                    // F: font size is 5x11/5x8 dots   1=5x11 0=5x8
    
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    // ensure enable pin is inactive (high) to avoid latching invalid data to lcd module
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin

     LATB = 0x80;    // DL: interface data is 8/4 bits  1=4bit 0=8bit
                    // NL: number of line is 2/1       1=2line 0=1line
                    // F: font size is 5x11/5x8 dots   1=5x11 0=5x8
    
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    // ensure enable pin is inactive (high) to avoid latching invalid data to lcd module
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
      
    DELAY_milliseconds(10); // ~37us instruction execution time x 2
    
    
    
    // now issue command for display control just like in the HD44780
    // initialization sequence in datasheet '0000 1DCB'
    LATB = 0x00;     // high nibble first
    // latch upper nibble
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    
    LATB = 0xC0;     // lower nibble last  ;D=0 display off ;C=0 cursor off ;B=0 character blinking off 
    // latch lower nibble
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
  
    DELAY_milliseconds(10);      // delay for clear screen instruction execution
    
    
    // now issue command to return to home "0000 0001"
    // Clears entire display and sets DDRAM address 0 in address counter.
    LATB = 0x00;     // high nibble first
    // latch upper nibble
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    
    LATB = 0x10;     // lower nibble last
    // latch lower nibble
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
  
    DELAY_milliseconds(10);      // delay for clear screen instruction execution
    
    
   // now issue command for text entry mode "0000 01IS"
    LATB = 0x00;     // high nibble first
    // latch upper nibble
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    
    LATB = 0x60;     // lower nibble last
                        // I=1 increment address counter after DDRAM/CGRAM write
                        // S=0 No display shift after writing to DDRAM/CGRAM
    // latch lower nibble
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 0;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    enable_LAT = 1;
    DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
  
    DELAY_milliseconds(10);      // delay for clear screen instruction execution
     
    
    // *tempstr="Hello There";    // string to be written to lcd
    
    stringsize = sizeof(tempstr);   // get length of string
    
    i=0;    // initialize the loop counter
    
    // prepare the lcd to receive data for DDRAM
    // we will be writing to data register, set register select to 1
    regselect_LAT = 1;
  
    // the previous clear display instruction writes the address of DDRAM so the 
    // data register will transfer it's contents to DDRAM instead of CGRAM
    // no need to issue another instruction to set the DDRAM address
    
    while (i < (stringsize-1))
    {
        //write the upper nibble first
        LATB = tempstr[i];
        DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
        enable_LAT = 0;
        DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
        enable_LAT = 1;
        DELAY_microseconds(5); // add a delay anytime there is a change in enable pin

        // shift the lower nibble to upper nibble position
        // this is equivalent to multiplying the char value by 16 in decimal
        tempstr[i] = tempstr[i]<<4;
        
        //write the lower nibble 
        LATB = tempstr[i];
        DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
        enable_LAT = 0;
        DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
        enable_LAT = 1               ;
        DELAY_microseconds(5); // add a delay anytime there is a change in enable pin
    
        DELAY_microseconds(100); // ~43us instruction execution time
        
        i=i+1;
     
    }
               
    
    while (1)
    {
        // Add your application code
        
     __nop();   
        
    }
}
/**
 End of File
*/