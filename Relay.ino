/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
#define relay1 7
#define relay2 6
#define relay3 5
#define relay4 4
#define switch1 11
#define switch2 10

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(relay1, OUTPUT);// connected to Relay 1
  pinMode(relay2, OUTPUT);// connected to Relay 2
  pinMode(relay3, OUTPUT);// connected to Relay 3
  pinMode(relay4, OUTPUT);// connected to Relay 4
  pinMode(switch1, INPUT);// connected to Switch
  pinMode(switch2, INPUT);// connected to Switch

}

// the loop function runs over and over again forever
void loop() {
  
  if(digitalRead(switch1) == HIGH && digitalRead(switch2) == HIGH)
  {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(relay1,HIGH); // turn relay 1 ON
    digitalWrite(relay2,HIGH); //Turn relay 2 ON
    delay(1000);
    //Serial.println(" relay 1 and 2 ON");
  }
  if(digitalRead(switch1) == HIGH)
  {
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      digitalWrite(relay1,HIGH); // turn relay 3 ON
      delay(1000);
      //Serial.println(" relay 3 ON");
  }
  if(digitalRead(switch2) == HIGH){
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      digitalWrite(relay2,HIGH); // turn relay 3 ON
      delay(1000);
      //Serial.println(" relay 3 ON");
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);   // turn the LED off (HIGH is the voltage level)
    digitalWrite(relay1, LOW);// turn relay 1 OFF
    digitalWrite(relay2, LOW);// turn relay 2 OFF
  }
}
