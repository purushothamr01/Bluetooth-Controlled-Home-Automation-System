// Bluetooth-Controlled Home Automation System
#include <SoftwareSerial.h>

#define RELAY1 2
#define RELAY2 3
#define RELAY3 4
#define RELAY4 5

SoftwareSerial BT(10, 11); // RX, TX pins for HC-05

void setup() {
    pinMode(RELAY1, OUTPUT);
    pinMode(RELAY2, OUTPUT);
    pinMode(RELAY3, OUTPUT);
    pinMode(RELAY4, OUTPUT);
    
    digitalWrite(RELAY1, HIGH);
    digitalWrite(RELAY2, HIGH);
    digitalWrite(RELAY3, HIGH);
    digitalWrite(RELAY4, HIGH);
    
    Serial.begin(9600);
    BT.begin(9600);
    Serial.println("Bluetooth Home Automation Ready");
}

void loop() {
    if (BT.available()) {
        char command = BT.read();
        Serial.print("Received Command: ");
        Serial.println(command);
        
        switch (command) {
            case 'A': digitalWrite(RELAY1, LOW); break;
            case 'a': digitalWrite(RELAY1, HIGH); break;
            case 'B': digitalWrite(RELAY2, LOW); break;
            case 'b': digitalWrite(RELAY2, HIGH); break;
            case 'C': digitalWrite(RELAY3, LOW); break;
            case 'c': digitalWrite(RELAY3, HIGH); break;
            case 'D': digitalWrite(RELAY4, LOW); break;
            case 'd': digitalWrite(RELAY4, HIGH); break;
            default: Serial.println("Invalid Command");
        }
    }
}
