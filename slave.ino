#include <Wire.h>
#include <stdlib.h>

// int temp [4] = {"cold", "too cold", "hot", "too-hot"};

void setup() {
  Wire.begin(8);                // join i2c bus with address #8
  Wire.onRequest(requestEvent); // register event
}

void loop() {
  delay(100);
}

void requestEvent() {
  Wire.write("too hot ");
}
