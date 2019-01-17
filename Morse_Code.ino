void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    String input = Serial.readString();
    for (int i = 0; i < input.length(); i++) {
      if (input.charAt(i) == 'A') { 
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500); 
        }
      else if (input.charAt(i) == 'B') {
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);
        }
      else if (input.charAt(i) == 'C'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);
        }
      else if (input.charAt(i) == 'D'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);
        }
      else if (input.charAt(i) == 'E'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);
        }
      else if (input.charAt(i) == 'F'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);
        }
      else if (input.charAt(i) == 'G'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);
        }
      else if (input.charAt(i) == 'H'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);     
        }
      else if (input.charAt(i) == 'I'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);
        }
      else if (input.charAt(i) == 'J'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);
        }
      else if (input.charAt(i) == 'K'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'L'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500); 
        }
      else if (input.charAt(i) == 'M'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'N'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'O'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'P'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500); 
        }
      else if (input.charAt(i) == 'Q'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'R'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'S'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'T'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'U'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'V'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'W'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);
        }
      else if (input.charAt(i) == 'X'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);
        }
      else if (input.charAt(i) == 'Y'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == 'Z'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == ' '){
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == '1'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == '2'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == '3'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == '4'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == '5'){
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == '6'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == '7'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if  (input.charAt(i) == '8'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500); 
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500); 
        }
      else if (input.charAt(i) == '9'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
      else if (input.charAt(i) == '0'){
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(500);
        digitalWrite(13, HIGH);
        delay(1500);
        digitalWrite(13, LOW);
        delay(1500);  
        }
        }
    }
  delay(1000);
}
