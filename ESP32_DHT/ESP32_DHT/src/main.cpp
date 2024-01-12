#include <Arduino.h>
#include <DHT.h> //DHT header file for using dht sensor and functions

DHT dht(2,DHT11); // Creating an object of DHT type with pin number and dht type as its function

void setup() 
{
  Serial.begin(115200); //Initialising Serial Monitor with Baud Rate of 115200
  dht.begin(); //Initialising DHT sensor
}

void loop() 
{
  float humidity = dht.readHumidity(); // 'humidity' variable is reading Humidy from DHT11
  float temperature = dht.readTemperature(); // 'temperature' variable is reading Temperature from DHT11
  //Printing the values
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%, Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");
  delay(1000); //Delay of 1 second is provided
}
