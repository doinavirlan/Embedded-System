
#include "uart_stdio.h"
#include <util/delay.h>

int T;
int cnt = 0;
int main(void) {
	uart_stdio_Init();

	printf("System is on");
	while(1){
		cnt++;
		printf("Counter: %d \n", cnt);
		_delay_ms(1000);
	}
	T = LM20_GetTemp();
	if ButtomIsPressed == true
	return 0;
}
