#include "esp32-temp.c"


float temperatureReadFixed();

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("Temperature: ");
  Serial.print(temperatureReadFixed());
  Serial.println(" C");
  delay(5000);
}
