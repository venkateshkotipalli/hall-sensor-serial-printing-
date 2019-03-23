int hall;
int hall2;
void setup() {

      Serial.begin(9600);
      pinMode(7,INPUT);
}

void loop() {
              Serial.read();
              hall= digitalRead(7);
              if(hall==HIGH)
              {
                Serial.print("No Magnetic field then output of the hall sensor is one(1)");
                Serial.println(hall);
                delay(500);
              }
              if(hall==LOW)
              {
                Serial.print(" Magnetic field output of the sensor is zero(0)");
                Serial.println(hall);
                delay(500);
              }
            }

