#define PLUS 11  // 버튼 연결 핀 
#define MINUS 12

// 현재 숫자를 기록하는 변수를 선언합니다.
int digit = 0;

// 0은 led를 끄고, 1은 led를 킨다.
byte digits[10][7] =
{
{ 0,0,0,0,0,0,1 }, // 0
{ 1,0,0,1,1,1,1 }, // 1
{ 0,0,1,0,0,1,0 }, // 2
{ 0,0,0,0,1,1,0 }, // 3
{ 1,0,0,1,1,0,0 }, // 4
{ 0,1,0,0,1,0,0 }, // 5
{ 0,1,0,0,0,0,0 }, // 6
{ 0,0,0,1,1,1,1 }, // 7
{ 0,0,0,0,0,0,0 }, // 8
{ 0,0,0,1,1,0,0 }  // 9
};

void setup() {
    // 버튼 핀들을 입력 모드로 설정합니다.
    pinMode(PLUS, INPUT);
    pinMode(MINUS, INPUT);

    // 2~9번 핀들을 모두 출력 모드로 설정합니다.
    for(int i=2;i<10;i++) {
        pinMode(i, OUTPUT);
    }
    // DP, 점에 해당하는 부분을 켜줍니다.
    digitalWrite(9, HIGH);
}

void loop() {
    if(digitalRead(PLUS) == HIGH) {
        //눌렸다면 digit을 증가시킵니다.
        ++digit;
        if(digit>9) {
            // digit이 9를 넘었는지 확인하고 넘었으면 0으로 만듭니다.
            digit=0;
        }
    }
    if(digitalRead(MINUS) == HIGH) {
        // 눌렸다면 digit을 감소시킵니다.
        --digit;
        if(digit<0) {
            // digit이 0 밑으로 내려갔는지 확인하고 내려갔으면 9로 만듭니다.
            digit=9;
        }
    }
    // digit을 displayDigit 함수를 이용해 7세그먼트에 표시합니다.
    displayDigit(digit);

    // 0.1초 멈춥니다.
    delay(1000);
