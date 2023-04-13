#define RED_LED 5 

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0 ;i <= 255 ; i++){
    
     analogWrite(RED_LED,i);
     delay(5);
    }
     for(int i = 255 ;i >= 0 ; i--){
    
     analogWrite(RED_LED,i);
     delay(5);
    }
 

}
