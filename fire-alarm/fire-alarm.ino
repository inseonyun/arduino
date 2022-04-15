#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>

SoftwareSerial swSerial(2,3); //블루투스 tx rx핀
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE); 

int flame = A0;     //센서가 연결된 아날로그핀
int buzzer = 12;    //피에조부저가 연결된 디지털핀
int val = 0;        //센서출력값 저장 변수

void setup() {
  swSerial.begin(9600);         //블루투스 화면 설정
  pinMode(buzzer, OUTPUT);      //피에조부저 출력설정
  pinMode(flame,INPUT);         //센서 입력설정
  Serial.begin(9600);           //시리얼모니터 설정
}
 
void loop() {
  val = analogRead(flame);      //센서에서 값을 읽어옴
  Serial.println(val);          //센서 입력값 시리얼모니터로 출력
  if(val >= 100)                //센서 입력값이 100이상이면 부저가 울림
  {
    digitalWrite(buzzer,HIGH);          //피에조 부저가 울림
    swSerial.println("Danger!!!!!");    //휴대폰 화면에 "Danger!!!"가 출력
    swSerial.println();                 //좀더 보기 편하게 한줄을 띔
  }else{
    digitalWrite(buzzer,LOW);           //피에조 부저가 꺼짐
    swSerial.println("Caution");        //휴대폰 화면에 "Caution"이 출력됨
    swSerial.println();                 //좀더 보기 편하게 한줄을 띔
  }
  if(val >=100) {                       //센서 입력값이 100이상이면, lcd화면에 "Danger!!!"이 출력됨
    lcd.begin(16,2); 
    lcd.backlight(); 
    lcd.setCursor(0,0); 
    lcd.print("Danger!!!"); 
  }else {                               //센서 입력값이 100미만이면, lcd화면에 "Caution!!!"이 출력됨
    lcd.begin(16,2); 
    lcd.backlight(); 
    lcd.setCursor(0,0); 
    lcd.print("Caution!!!"); 
  }
  delay(500);                   //이 반복을 딜레이를 주며 반복함.
}
