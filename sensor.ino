int LDR = 0;       // select the input pin for the LDR
int ledPin = 2;   // select the pin for the LED
int val = 0;       // variable to store the value coming from the sensor

long i;

void setup() {
  Serial.begin(9600);
  pinMode(LDR, INPUT);       // declare the LDR as an INPUT
  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
}
void loop() {
  val = analogRead(LDR);       // read the value from the sensor
  digitalWrite(ledPin, 1);  // turn the ledPin on
  delay(val);                  // stop the program for some time
  digitalWrite(ledPin, 0);   // turn the ledPin off
  delay(val);                  // stop the program for some time
  
  if(val > 0){
  i = random(9);
    digitalWrite(5, 1);
    digitalWrite(6, 1);
    digitalWrite(7, 1);
    digitalWrite(8, 1);
    if(i == 0){
      Serial.println("Energy efficiency #yolo!");
      delay(500);
    }
    else if(i == 1){
      Serial.println("Awesome, green energy!");
      delay(500);
    }
    else if(i == 2){
      Serial.println("Your room is consuming low energy!");
      delay(500);
    }
    else if(i == 3){
      Serial.println("Low energy consumption #treehugger");
      delay(500);
    }
    else if(i == 4){
      Serial.println("#yoloswag420 saving energy, no more endagered species");
      delay(500);
    }
    else if(i == 5){
      Serial.println("Protecting planet Earth!!!");
      delay(500);
    }
    else if(i == 6){
      Serial.println("Alternative energy choices is the way to go");
      delay(500);
    }
    else if(i == 7){
      Serial.println("Everyday is Earth day!");
      delay(500);
    }
    else if(i == 8){
      Serial.println("Go green!");
      delay(500);
    }
    else if(i == 9){
      Serial.println("Energry conservation, be smart about your electricity!");
      delay(500);
    }
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
    digitalWrite(8, 0);
  }
}
