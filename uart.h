/* 
 * File:   uart.h
 * Author: Sindhu M
 * Desc : Car Black Box
 * Created on 3 February, 2025, 10:38 AM
 */

#ifndef UART_H
#define	UART_H

#define FOSC                20000000

void init_uart(unsigned long baud);
unsigned char getcharx(void);
void putchars(unsigned char data);
void putsx(const char *s);

#endif	/* UART_H */