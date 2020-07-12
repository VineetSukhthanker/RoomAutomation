const int tube = 13; //tubelight 
const int fan = 12; //fan
const int gLamp = 11; //gallery lamp
const int lamp = 10; //lamp
int in; 
void setup() {
  Serial.begin(9600);
  pinMode(tube,OUTPUT);
  pinMode(fan,OUTPUT);
  pinMode(gLamp,OUTPUT);
  pinMode(lamp,OUTPUT);
}

void loop() {
  if(Serial.available()>0){
    in = Serial.read(); // assigns in to read serial data
    switch(in){
      case 1:
        digitalWrite(fan,HIGH); //1 turns on fan
        break;
      case 0:
        digitalWrite(fan,LOW); //0 turns off fan
        break;
      case 5:
        digitalWrite(lamp,HIGH); //5 turns on lamp
        break;
      case 6:
        digitalWrite(lamp,LOW); //6 turns off lamp 
        break;
      case 3:
        digitalWrite(tube,HIGH); //3 turns on tubelight
        break;  
      case 4:
        digitalWrite(tube,LOW); //4 turns off tubelight
        break;
      case 7:
        digitalWrite(gLamp,HIGH); //7 turns on gallery lamp
        break;
      case 8:
        digitalWrite(gLamp,LOW); //8 turns off gallery lamp 
        break;
    }
  }
}
