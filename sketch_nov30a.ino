#include <stdlib.h>
int ledArray[]={13,12,11,10,9,8};
int num;
void setup() {
Serial.begin(9600);
  for(int i=0;i<6;i++){
   pinMode(ledArray[i],OUTPUT); 
  }
}


void loop() {
  // put your main code here, to run repeatedly:

label:Serial.println("Give value");
num=Serial.parseInt();
Serial.println(num);
for(int i=0;i<num;i++){
showBinary(i);
delay(500);
}
for(int i=0;i<6;i++){
digitalWrite(ledArray[i],LOW);
}

}





void showBinary(byte num_byte){

for(int i=0;i<6;i++)
{
if(bitRead(num_byte,i)==1)digitalWrite(ledArray[i],HIGH);
else digitalWrite(ledArray[i],LOW);
}
}
