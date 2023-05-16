void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  
}

void loop() {
  int ldr;
  ldr= analogRead(A0);
  delay(100);
  
  Serial.println("the ldr value is");
  Serial.println(ldr);
  int value;
  value=digitalRead(2);
  Serial.println("the sensor0  value is");
  Serial.println(value);
  int value1;
  value1=digitalRead(4);
   Serial.println("the sensor1  value is");
  Serial.println(value1);
  int value2;
  value2=digitalRead(7);
   Serial.println("the sensor2  value is");
  Serial.println(value2);
  int value3;
  value3=digitalRead(8);
  Serial.println("the sensor3  value is");
  Serial.println(value3);                 
  
  
  
  
  if( ldr<800){
  //1
  if (value==HIGH&&value1==HIGH&&value2==HIGH&&value3==HIGH)
  {
    analogWrite(3,40);
    analogWrite(5,40);
    analogWrite(6,40);
    analogWrite(9,40);
  }
  //2
  else if (value==HIGH&&value1==HIGH&&value2==HIGH&&value3==LOW)
  {
    analogWrite(3,40);
    analogWrite(5,40);
    analogWrite(6,40);
    analogWrite(9,255);
    
  }
  //3
  else if (value==HIGH&&value1==HIGH&&value2==LOW&&value3==HIGH)
  {
    analogWrite(3,40);
    analogWrite(5,40);
    analogWrite(6,255);
    analogWrite(9,40);
    
  }
  //4
   else if (value==HIGH&&value1==HIGH&&value2==LOW&&value3==LOW)
  {
    analogWrite(3,40);
    analogWrite(5,40);
    analogWrite(6,255);
    analogWrite(9,255);
    
  }
  //5
    else if (value==HIGH&&value1==LOW&&value2==HIGH&&value3==HIGH)
  {
    analogWrite(3,40);
    analogWrite(5,255);
    analogWrite(6,40);
    analogWrite(9,40);
    
  }
  //6
  else if (value==HIGH&&value1==LOW&&value2==HIGH&&value3==LOW)
  {
    analogWrite(3,40);
    analogWrite(5,255);
    analogWrite(6,40);
    analogWrite(9,255);
    
  }
  //7
  else if (value==HIGH&&value1==LOW&&value2==LOW&&value3==HIGH)
  {
    analogWrite(3,40);
    analogWrite(5,255);
    analogWrite(6,255);
    analogWrite(9,40);
    
  }
  //8
  else if (value==HIGH&&value1==LOW&&value2==LOW&&value3==LOW)
  {
    analogWrite(3,40);
    analogWrite(5,255);
    analogWrite(6,255);
    analogWrite(9,255);
    
  }
  //9
  else if (value==LOW&&value1==HIGH&&value2==HIGH&&value3==HIGH)
  {
    analogWrite(3,255);
    analogWrite(5,40);
    analogWrite(6,40);
    analogWrite(9,40);
    
  }
  //10
  else if (value==LOW&&value1==HIGH&&value2==HIGH&&value3==LOW)
  {
    analogWrite(3,255);
    analogWrite(5,40);
    analogWrite(6,40);
    analogWrite(9,255);
    
  }
  //11
  else if (value==LOW&&value1==HIGH&&value2==LOW&&value3==HIGH)
  {
    analogWrite(3,255);
    analogWrite(5,40);
    analogWrite(6,255);
    analogWrite(9,40);
    
  }
  //12
  else if (value==LOW&&value1==HIGH&&value2==LOW&&value3==LOW)
  {
    analogWrite(3,255);
    analogWrite(5,40);
    analogWrite(6,255);
    analogWrite(9,255);
    
  }
  //13
  else if (value==LOW&&value1==LOW&&value2==HIGH&&value3==HIGH)
  {
    analogWrite(3,255);
    analogWrite(5,255);
    analogWrite(6,40);
    analogWrite(9,40);
    
  }
  //14
  else if (value==LOW&&value1==LOW&&value2==HIGH&&value3==LOW)
  {
    analogWrite(3,255);
    analogWrite(5,255);
    analogWrite(6,40);
    analogWrite(9,255);
    
  }
  //15
  else if (value==LOW&&value1==LOW&&value2==LOW&&value3==HIGH)
  {
    analogWrite(3,255);
    analogWrite(5,255);
    analogWrite(6,255);
    analogWrite(9,40);
    
  }
  //16
  else if (value==LOW&&value1==LOW&&value2==LOW&&value3==LOW)
  {
    analogWrite(3,255);
    analogWrite(5,255);
    analogWrite(6,255);
    analogWrite(9,255);
    
  }
  }

   
 
 else{
 
    analogWrite(3,0);
    analogWrite(5,0);
    analogWrite(6,0);
    analogWrite(9,0);
    
  }
  

   
 delay(100);
 }



//
// C++ code
//