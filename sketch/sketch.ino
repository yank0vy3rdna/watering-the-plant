const int OnTimeSecs = 150;
const int OffTimeSecs = 12*3600-150;
#define relePin 4
void setup() {
  pinMode(relePin, OUTPUT);
  pinMode(13, OUTPUT);
}
void verybigdelay(int timecount) {
  int countdelays = timecount / 20;
  int ost = (timecount % 20)*1000;
  for(int i = 0; i < countdelays; i++){
    delay(20000);
  }
  delay(ost);
  return;
}
bool indicateLed = true;
void loop()
{
  digitalWrite(relePin, LOW);
  verybigdelay(OnTimeSecs);
  digitalWrite(relePin, HIGH);
  verybigdelay(OffTimeSecs);
  if (indicateLed==true){
    indicateLed = false;
    digitalWrite(13,HIGH);
  }else{
    indicateLed = true;
    digitalWrite(13,LOW);
  }
}
