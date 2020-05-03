int number;
String msg="enter ur number";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){
    }
    number=Serial.parseInt();
    Serial.print("ur number is ");
    Serial.println( number);
    Serial.println( );
    delay (1000);
}
