void setup() {
  Serial.begin(9600);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

}

void forward() {
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(11,1);
  digitalWrite(12,0);
  //Serial.println("forward");
 }
 void reverse ()
 {
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(11,0);
  digitalWrite(12,1);
  //Serial.println("reverse");
  
 }
 void left()
{
  digitalWrite(4,0);
  digitalWrite(5,1);
  digitalWrite(11,1);
  digitalWrite(12,0);
  //Serial.println("left");
 }
 void right()
 {
  digitalWrite(4,1);
  digitalWrite(5,0);
  digitalWrite(11,0);
  digitalWrite(12,1);
  //Serial.println("right");
 }
 void stops()
 {
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(11,0);
  digitalWrite(12,0);
  //Serial.println("stop");
 }
 char c;
 void loop() {
 
    c=Serial.read();
    if(c=='1')
    {
      forward();
    }
    else if(c=='2')
    {
      stops();
    }
    else if(c=='3')
    {
      left();
    }
    else if(c=='4')
    {
      right();
    }
    else if(c=='5')
    {
      reverse();
    }
    //delay(10);
  
 }   
