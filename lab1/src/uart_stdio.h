#ifndef _UART_STDIO_H_
#define _UART_STDIO_H_
#include <stdio.h>

void uart_stdio_Init(void);
int uart_putchar(char c, FILE *stream);

#endif
