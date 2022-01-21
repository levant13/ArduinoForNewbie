#define pinLed3 3
#define pinLed5 5// Định nghĩa pinLed là chân số 3.
void setup() // Hàm setup() được gọi 1 lần duy nhất khi bật nguồn hoặc reset board
{
pinMode(pinLed3, OUTPUT); // Cấu hình chân pinLed là ngõ ra.
}
    void loop() { // Hàm loop() sẽ được gọi liên tục khi chương trình hoạt động.
    digitalWrite(pinLed3, HIGH); // Bật Led (HIGH - có nghĩa là mức điện áp 5VDC)
    delay(1000); // Chờ 1000 mili giây = 1s
    digitalWrite(pinLed3, LOW); // Tắt Led (LOW có nghĩa là mức điện áp 0VDC)
    delay(1000); // Chờ 1000 mili giây = 1s
    digitalWrite(pinLed5, HIGH); // Bật Led (HIGH - có nghĩa là mức điện áp 5VDC)
    delay(1000); // Chờ 1000 mili giây = 1s
    digitalWrite(pinLed5, LOW); // Tắt Led (LOW có nghĩa là mức điện áp 0VDC)
    delay(1000); // Chờ 1000 mili giây = 1s
}
