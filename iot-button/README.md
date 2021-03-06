## Web Server를 이용한 IoT 버튼

## 개요
---
#### Web Server란?
+ 웹 브라우저와 같은 클라이언트로부터 HTTP 요청을 받고, HTML 문서와 같은 웹페이지를 반환하는 컴퓨터 프로그램 - [위키백과](https://ko.wikipedia.org/wiki/%EC%9B%B9_%EC%84%9C%EB%B2%84)
+ 이러한 웹 서버를 아두이노에 구축하여, 웹페에지에서 사용자가 특정 이벤트를 발생시키면 아두이노가 작동하여, 특정 스위치를 켜고 끄는 IoT 버튼을 만들 계획이다.R

## 회로도
---
<p align=center>
    <img src="https://user-images.githubusercontent.com/84364741/163798074-3cbee0a4-b3b3-4a96-9cc9-1b013340599d.png" weight="500">
</p>

+ 회로도의 경우 매우 간단하다. 내가 그리는 회로도 사이트에는 Node MCU 보드가 없어서 아두이노 우노 보드로 그렸다.
+ 원리는 위에서 언급했듯이, 웹서버에서 클라이언트가 특정 이벤트를 주면 보드에 연결된 서보 모터가 움직여서 스위치를 켜고 끄는 것이다.
+ 나의 경우에는 노트북을 원격으로 켜고 끄는 스위치를 목적으로 만들었다.

## 웹페이지 이미지
---
<p align=center>
    <img src="https://user-images.githubusercontent.com/84364741/163798159-4d5a7a0e-277a-4997-9dc6-f486bf08b18e.png" weight="500">
</p> 

+ 사용자가 슬라이더를 움직여 그 각도만큼 서보 모터를 움직이도록 웹서버에 요청한다.
+ 요청을 받은 웹서버에서 아두이노를 응답시켜 서보모터가 해당 각도만큼 움직이도록 한다.

## 추가로 해주면 좋은 것
---
+ Q. 외부에서 해당 버튼을 이용하려면 외부에서 해당 Wifi 접근을 해야하는데 어떡하나요?
+ A. 간단하다. 공유기에 있는 포트 포워딩 기능을 이용해서 아두이노 웹서버를 외부에서 접근 할 수 있도록 하면 된다. 구글에 검색해보면 자신의 공유기 종류별로 설명이 상세히 나와있다.
