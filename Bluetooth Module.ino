int loadA = 13; //load one
int loadB = 7;  ///load two
int loadC = 8; //load three
int state = 0;
int flag = 0; 
 
void setup() {
 pinMode(13, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(7,OUTPUT);
 digitalWrite(loadA, LOW);
 digitalWrite(loadB, HIGH);
 digitalWrite(loadX, LOW);
 Serial.begin(9600); // Default connection rate for my BT module
}
 
void loop() {

 if(Serial.available() > 0){
 state = Serial.read();
 flag=0;
 }

 if (state == '0') {
 digitalWrite(loadA, LOW);
 digitalWrite(loadB, HIGH);
 digitalWrite(loadC, LOW);
 if(flag == 0){
 Serial.println("Relay: off, Red: on");
 flag = 1;
 }
 }

 else if (state == '1') {
 digitalWrite(loadA, HIGH);
 digitalWrite(loadB, HIGH);
 digitalWrite(loadC), LOW);
 if(flag == 0){
 Serial.println("Relay: on, Green: on");
 flag = 1;
 }
 }
}
