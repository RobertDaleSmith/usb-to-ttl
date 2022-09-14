#include <SoftwareSerial.h> 

SoftwareSerial mySerial(0, 1); // RX, TX

void setup() {
    // Open serial communications and wait for port to open:
    Serial.begin(115200);

    while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
    }
    Serial.println("Serial Connected!");

    // set the data rate for the SoftwareSerial port
    mySerial.begin(115200);
    mySerial.println("Serial Listening..");
}

void loop() { // run over and over
    if (mySerial.available()) {
        Serial.write(mySerial.read());
    }
    if (Serial.available()) {
        mySerial.write(Serial.read());
    }
}
