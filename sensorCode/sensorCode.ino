#define SENSORPINA A0 // x axis
 //TODO: define other sensor inputs

unsigned long targetTime=0;
const unsigned long interval=2500; //TODO: How was should we read
void setup(){
// TODO: begin the serial connection with a baudrate of 115200
}


void loop(){
	if(millis()>=targetTime){
		targetTime= millis()+interval;
		Serial.println(analogRead(SENSORPINA));

		 //TODO: Add other sensor read outs
     //TODO: convert values into a string https://www.arduino.cc/en/Tutorial/StringConstructors
		 //TODO: combine them into a string that can be understood by server.js
		 //TODO: send the string over serial


	}
	// TODO: Detect if you want to reset the screen(shake the etch-a-sketch)
  // TODO: write the reset message(see server.js) to the serial port

}
