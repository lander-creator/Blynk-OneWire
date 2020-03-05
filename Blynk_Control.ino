#define BLYNK_PRINT Serial

int pin        = 18;

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>


// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "iyFDjTSp0yOimpvd_AtXzQ7LQ9UHWpWJ";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "LAPTOP-OTLNMOI8 2568";
char pass[] = "1756{Bn9";

void setup() {  
  pinMode(pin, OUTPUT); 
  pinMode(pin, HIGH);
  Serial.begin(115200);

  delay(10);
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, pass);
  int wifi_ctr = 0;
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("WiFi connected");  

  Blynk.begin(auth, ssid, pass);

}

void loop(){
    Blynk.run();
}
