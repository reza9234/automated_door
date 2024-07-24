#include <SoftwareSerial.h>
#define relay_PIN1 9
#define relay_PIN2 8
SoftwareSerial sim800l(11,10); 

void sendSMS(String phone, String msg); // Function declaration

void setup() {
  pinMode(relay_PIN1, OUTPUT);
  pinMode(relay_PIN2, OUTPUT);
  digitalWrite(relay_PIN1, HIGH);
  digitalWrite(relay_PIN2, HIGH);
  sim800l.begin(9600);
  
  // Initialize SIM800L
  sim800l.println("AT"); 
  delay(100);
  sim800l.println("AT+CMGF=1"); // Set SMS mode to text  
  delay(100);
  sim800l.println("AT+CNMI=2,2,0,0,0");
  delay(100);
}

void loop() {

  // Send SMS  
  String message = "";
    
  if (sim800l.available()) {
    message = sim800l.readString();

    if (message.indexOf("On") != -1) {
      sendSMS("your phone number", "done!^");
      delay(2000);
      digitalWrite(relay_PIN1, LOW);
      delay(4000);
    }

    if (message.indexOf("Off") != -1) {
      sendSMS("your phone number", "done!");
      delay(2000);
      digitalWrite(relay_PIN2, LOW);
      delay(4000);
    }
    digitalWrite(relay_PIN1, HIGH);
    digitalWrite(relay_PIN2, HIGH);
  }
}

void sendSMS(String phone, String msg) {
  sim800l.println("AT+CMGS=\"" + phone + "\"");  
  delay(1000);
  sim800l.println(msg);
  sim800l.println((char)26);
  delay(1000);
}
