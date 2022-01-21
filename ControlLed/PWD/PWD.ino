int ledPin = 3; // Chân kết nối với LED trên board Iotmaker Uno X
int brightness = 0; // Biến thiết lập cường độ sáng cho LED trên board
int fadeAmount = 15; // Biến thiết lập 1 bước thay đổi cường độ sáng.
void setup()
{
pinMode(ledPin, OUTPUT);
}
void loop()
{
  analogWrite(ledPin, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
        fadeAmount = -fadeAmount;
        }
  delay(30);
}
