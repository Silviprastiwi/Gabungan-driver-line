#define rpwm1 6 
#define lpwm1 5
#define en1 4
#define en1b 3

#define rpwm2 11 
#define lpwm2 10
#define en2 12
#define en2b 13

int val1=0;
int val2=0;
int val3=0;
int val4=0;
int val5=0;
int out1= A1;
int out2= A2;
int out3= A3;
int out4= A4;
int out5= A5;

void setup() {
  //DRIVER MOTOR
  pinMode(rpwm1, OUTPUT);
  pinMode(lpwm1, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en1b, OUTPUT);

  pinMode(rpwm2, OUTPUT);
  pinMode(lpwm2, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(en2b, OUTPUT);

 //LINETRACER
  pinMode(out1,INPUT);
  pinMode(out2,INPUT);
  pinMode(out3,INPUT);
  pinMode(out4,INPUT);
  pinMode(out5,INPUT);
  Serial.begin(9600);
}

void maju()
{
 digitalWrite(en1, HIGH);
  digitalWrite(en1b, HIGH);
  analogWrite(lpwm1, 50);
  analogWrite(rpwm1, 0);

  digitalWrite(en2, HIGH);
  digitalWrite(en2b, HIGH);
  analogWrite(lpwm2, 0);
  analogWrite(rpwm2, 50);
 
}

void mundur()
{
 digitalWrite(en1, HIGH);
  digitalWrite(en1b, HIGH);
  analogWrite(lpwm1, 0);
  analogWrite(rpwm1, 50);

  digitalWrite(en2, HIGH);
  digitalWrite(en2b, HIGH);
  analogWrite(lpwm2, 50);
  analogWrite(rpwm2, 0); 
}
void berhenti()
{
 digitalWrite(en1, LOW);
  digitalWrite(en1b, LOW);
  analogWrite(lpwm1, 0);
  analogWrite(rpwm1, 50);

  digitalWrite(en2, LOW);
  digitalWrite(en2b, LOW);
  analogWrite(lpwm2, 50);
  analogWrite(rpwm2, 0);   
}
void loop() {
  // DRIVER MOTOR
  //berhenti();
  //maju();
  //mundur();

if(val3 >=1000){
  maju();
}

if(val3 <=999){
  berhenti();
}
  
  //LINETRACER
  val1=analogRead(out1);
  val2=analogRead(out2);
  val3=analogRead(out3);
  val4=analogRead(out4);
  val5=analogRead(out5);
 /* Serial.print("val1="); 
  Serial.print(val1);
  Serial.print("\tval2="); 
  Serial.print(val2);
  Serial.print("\tval3="); 
  Serial.print(val3);
  Serial.print("\tval4="); 
  Serial.print(val4);
  Serial.print("\tval5="); 
  Serial.println(val5);
  delay(100);*/
}
