String stringValue = "";
int intValue = 0;
bool dataReceived = false;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  Serial.println("Arduino initialized");
}

void loop() {
  // Check if data is available to read
  if (Serial.available() > 0) {

    String data = Serial.readStringUntil('>');
    
    int delimiterIndex = data.indexOf('#');
    
    if (delimiterIndex != -1) { // Check if delimiter found
      
      stringValue = data.substring(1, delimiterIndex); // Exclude the first character '<'
      String intValueStr = data.substring(delimiterIndex + 1);
 
      intValue = intValueStr.toInt();

      Serial.print("String Value: ");
      Serial.println(stringValue);
      
      // Set flag to indicate data received
      dataReceived = true;
    } 
    
    else 
    {
      Serial.println("Delimiter not found");
    }
  }
  
  // If data has been received, send back the received data to Python

}
