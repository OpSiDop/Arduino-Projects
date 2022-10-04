int buzzer = 9;               
int sensor = 6;             
int state = LOW;             
int val = 0;                 

void setup() {
  pinMode(buzzer, OUTPUT);     
  pinMode(sensor, INPUT);    
  Serial.begin(9600);      
}

void loop(){
  val = digitalRead(sensor);   
  if (val == HIGH) {           
    digitalWrite(buzzer, LOW);   
    delay(100);                
    
    if (state == LOW) {
      Serial.println("Motion stopped!"); 
      state = HIGH;       
    }
  } 
  else {
      digitalWrite(buzzer, HIGH); 
      delay(100);            
      
      if (state == HIGH){
        Serial.println("Motion detected!");
        state = LOW;       
    }
  }
}
