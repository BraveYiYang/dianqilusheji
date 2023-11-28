int DCF1=5;
int DCF2=6;
int DCF3=7;
//引脚的定义根据实际连接电磁阀的需求来设计
void setup() {
  pinMode(DCF1,OUTPUT);
  pinMode(DCF2,OUTPUT);
  pinMode(DCF3,OUTPUT);
}
void UP(){//气缸伸长
  digitalWrite(DCF3,HIGH);
  delay(100);//延时的目的防止电磁阀响应过快
  digitalWrite(DCF1,HIGH);
  delay(5000);//延时的目的为了能够控制进入气流量，达到控制位置效果
  digitalWrite(DCF1,LOW);
  delay(100);
  digitalWrite(DCF3,LOW);
  delay(100);
}
void Down(){//气缸缩短
  digitalWrite(DCF2,HIGH);
  delay(100);
  digitalWrite(DCF1,HIGH);
  delay(5000);
  digitalWrite(DCF1,LOW);
  delay(100);
  digitalWrite(DCF2,LOW);
  delay(100);
}
void loop() {
  UP();
  Down();
}
