## 7-Segment 숫자 카운트 하기

## 개요
---
#### 7-segment란?
+ 7세그먼트(7 Segment)는 7개의 획으로 숫자나 문자를 나타낼 수 있는 표시장치를 의미한다.
+ 이러한 7세그먼트(7 Segment)는 동작방식에 따라 공통 양극(Common-Anode)형 공통 음극(Common-Cathod)형으로 나뉜다.
    + Common-Anode는 LED의 양극(+극)끼리 묶어 VCC(+5V)에 연결해주고 음극(-극)에 GND에 연결하여 불이 들어오게 한다.
    + Common-Cathode는 LED의 음극(-극)끼리 묶어 GND에 연결하고 양극(+극)에 VCC를 연결해 불이 들어오게 한다.

## 회로도
---
<p align=center>
    <img src="https://user-images.githubusercontent.com/84364741/163533010-06a20e3b-dc0a-4a92-ba75-ae00c8e39b15.png" weight="500">
    &nbsp;
    <img src="https://user-images.githubusercontent.com/84364741/163533040-0430ec68-2a7b-402d-a742-960b78d9cfa0.png" weight="300">
</p>

+ 나의 경우에는 버튼을 눌러 카운트를 하는 것이 목적이기 때문에 그림과 같이 회로를 구성했다.
+ 왼쪽 버튼을 누르면 숫자가 증가하고, 오른쪽 버튼을 누르면 숫자가 감소하게 된다.

## 시연 영상
---
[![Video](https://user-images.githubusercontent.com/84364741/163533040-0430ec68-2a7b-402d-a742-960b78d9cfa0.png)](https://www.youtube.com/shorts/BhLVQ8wM_tw)
