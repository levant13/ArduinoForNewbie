#define pinLedRed 9 // Chân kết nối với pin R của module LED-RGB
#define pinLedGreen 10 // Chân kết nối với pin G của module LED-RGB
#define pinLedBlue 11 // Chân kết nối với pin B của module LED-RGB
#define pinAnaLight A0 // Chân kết nối với A0 của module cảm biến ánh sáng
void setup()
{
// Cài đặt hướng cho các chân
pinMode(pinLedRed, OUTPUT);
pinMode(pinLedGreen, OUTPUT);
pinMode(pinLedBlue, OUTPUT);
// LED RGB OFF
digitalWrite(pinLedRed, LOW);
digitalWrite(pinLedGreen, LOW);
digitalWrite(pinLedBlue, LOW);
pinMode(pinAnaLight, INPUT);
// Khởi tạo serial
Serial.begin(115200);
Serial.println("Initial serial");
}
void loop()
{
unsigned int AnalogValue;
AnalogValue = analogRead(pinAnaLight); // Đọc trạng thái chân A0 của module cảm biến ánh sáng
Serial.println(AnalogValue); // In ra giá trị điện áp Analog
if (AnalogValue < 350) {
digitalWrite(pinLedRed, HIGH);
digitalWrite(pinLedGreen, LOW);
digitalWrite(pinLedBlue, LOW);
Serial.println("The light intensity: HIGH");
} else if (AnalogValue > 350 && AnalogValue < 800) {
digitalWrite(pinLedRed, LOW);
digitalWrite(pinLedGreen, HIGH);
digitalWrite(pinLedBlue, LOW);
Serial.println("The light intensity: MEDIUM");
} else if (AnalogValue > 800) {
digitalWrite(pinLedRed, LOW);
digitalWrite(pinLedGreen, LOW);
digitalWrite(pinLedBlue, HIGH);
Serial.println("The light intensity: LOW");
}
delay(100);
}
