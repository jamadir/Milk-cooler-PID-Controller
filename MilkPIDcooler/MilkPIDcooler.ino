#include <PID_v1.h>


#define TempSollMilch 10
#define TempMinWasser 25





#define Valveopenpin 10
#define Valveclosepin 11
#define Milktemppin 12
#define Watertemppin 13


void setup() {

  Serial.begin(115200);

  pinMode(Valveclosepin, OUTPUT);
  pinMode(Valveopenpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}
