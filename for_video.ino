#include <Blynk.h>
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "TPDGmKbToJl7C_agnoEh5BVieBRdaGvY";

char ssid[] = "Vempati_BSNL";
char pass[] = "Anirudh@8935";
int led_pin = D3;
int led_pim = D5;

void setup()
{
  Serial.begin(115200);
  WiFi.begin(ssid, pass);
  Serial.print("Connecting.....");

  while(WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print("Waiting to connect WiFi\n");
  }
  Serial.print("WiFi is connected \n");
  Serial.print(WiFi.localIP()); 
  pinMode(led_pin, OUTPUT);
  pinMode(led_pim, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}
void loop()
{
  Blynk.run();
}
