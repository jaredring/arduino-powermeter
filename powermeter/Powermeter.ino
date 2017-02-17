/*
 * Power Meter Powered by arduino
 *
 */

/* Libraries Provied by Arduino IDE */
#include <Wire.h>	// One Wire Proto (used by temp sensor)
#include <SPI.h>    // Required for Ethernet

/* Additional Libraries in ../libs */
#include <Time.h>       // git://github.com/PaulStoffregen/Time
#include <Ethernet2.h>  // git://github.com/adafruit/Ethernet2
#define LED13 13

void setup() {

    pinMode(LED13, OUTPUT);

}

void loop() {

    digitalWrite(LED13, HIGH);
    delay(500);
    digitalWrite(LED13, LOW);
    delay(500);

}

