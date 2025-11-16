# define red_pin 11
# define blue_pin 9
# define green_pin 10
# define motor_pin 13

void setup() {
  pinMode(red_pin,OUTPUT);
  pinMode(blue_pin,OUTPUT);
  pinMode(green_pin,OUTPUT);

}
void red (int t){
  analogWrite(red_pin,255);
  delay(t);
  analogWrite(red_pin,0);
}
void blue (int t){
  analogWrite(blue_pin,255);
  delay(t);
  analogWrite(blue_pin,0);
}
void green (int t){
  analogWrite(green_pin,255);
  delay(t);
  analogWrite(green_pin,0);
}
void yellow( int t){
  analogWrite(green_pin, 100);
   analogWrite(red_pin, 255);
   delay(t);
   analogWrite(green_pin, 0);
   analogWrite(red_pin, 0);

}
void indigo( int t){
  analogWrite(blue_pin, 255);
   analogWrite(red_pin, 255);
   delay(t);
   analogWrite(blue_pin, 0);
   analogWrite(red_pin, 0);

}
void cyon( int t){
  analogWrite(blue_pin, 255);
   analogWrite(green_pin, 255);
   delay(t);
   analogWrite(blue_pin, 0);
   analogWrite(green_pin, 0);

}
void white( int t){
  analogWrite(blue_pin, 255);
   analogWrite(green_pin, 255);
    analogWrite(red_pin, 255);

   delay(t);
   analogWrite(blue_pin, 0);
   analogWrite(green_pin, 0);
    analogWrite(red_pin, 255);

}
void multi_color(int del, int rot){
  for(int x = 0; x < rot ; x++){
    //green(1000);
red (del);
blue (del);
yellow(del);
indigo(del);
cyon (del);
white(del);
}
}

void RGB_color(int del, int rot){
for(int y = 0; y < rot; y ++){
  red (del);
blue (del);
green(del);

}
  
}
void custom_color(int r, int g, int b){
analogWrite(red_pin,r);
analogWrite(green_pin,g);
analogWrite(blue_pin,b);



}
void motorON(){
  digitalWrite(motor_pin,HIGH);
}
void motorOFF(){
  digitalWrite(motor_pin,LOW);

}


void loop() {
  //motorON();
  //motorOFF();
//green(1000);
//red (1000);
//blue (1000);
//yellow(1000);
//indigo(1000);
//cyon (1000);
//white(1000);

multi_color(200,10);

//RGB_color(500,10);

//custom_color(100, 100, 100);
//delay(1000);

}
