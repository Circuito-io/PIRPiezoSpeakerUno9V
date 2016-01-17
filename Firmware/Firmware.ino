#include "Global.h"

void setup() 
{
	Serial.begin(9600);
	Serial.println("start");
}

void loop() 
{	
	if(pir.read())
	{
		Serial.println("PIR detecting");
		piezoSpeaker.write(440);
		delay(500);
		piezoSpeaker.write(880);
		delay(500);
		piezoSpeaker.write(440);
		delay(500); 
		piezoSpeaker.turnOff();
		delay(2500); //delay time for the pir to stabilize.
    
	}
		
	delay(20);
  
}
