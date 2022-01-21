#define pinLed1 3 
#define pinLed2 5// Định nghĩa pinLed là chân số 3.
int ledState1 = LOW; 
int ledState2 = HIGH; // khai báo biến lưu trạng thái của LED
unsigned long previousMillis = 0;
const long interval = 1000;
void setup()
{
pinMode(pinLed1, OUTPUT);
pinMode(pinLed2, OUTPUT);
}
void loop()
{
unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
        previousMillis = currentMillis;
  if (ledState1 == LOW){
        ledState1 = HIGH; // Đổi trạng thái
        ledState2 =HIGH;  
        }
   else
   {
        ledState1 = LOW; // Đổi trạng thái
        ledState2 = LOW;
   }
digitalWrite(pinLed1, ledState1);
digitalWrite(pinLed2, ledState2);

}
}
