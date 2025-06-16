/*
 * File:   adc.c
 * Author: Sindhu M
 * Desc : Car Black Box
 * Created on 3 February, 2025, 10:38 AM
 */

#include <xc.h>
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#include"ADC.h"
void init_adc(void)
{
    /* Selecting Right Justification */
    ADFM = 1;
    /* Starting the ADC Module */
    ADON = 1;
}

unsigned short read_adc(void)
{
    unsigned short adc_reg_val;
    
    /* Start the ADC conversion */
    GO = 1;
    /* Wait for the convertion to complete */
    while (nDONE);
    
    adc_reg_val = (ADRESH << 8) | ADRESL;//to store the value into the register after conversion 
    return adc_reg_val;
}
