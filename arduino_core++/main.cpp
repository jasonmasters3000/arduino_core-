#include <Arduino.h>

int main(void)
{
	init();

#if defined(USBCON)
	USBDevice.attach();
#endif
	
	setup();
    
	for (;;) {
		loop();
		if (serialEventRun) serialEventRun();
	}
        
	return 0;
}

void feature1(char *p)
{
	/* adding a new feature */
	return;
}

void feature2()
{
	/* new comment */
	return;
}

