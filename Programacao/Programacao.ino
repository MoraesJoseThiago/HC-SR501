int sinalDoSensor = 2; //O Pino digital 2 receberá o sinal do sensor como entrada

void setup() {
  pinMode(sinalDoSensor, INPUT); //Declarando o sinal do sensor como entrada do Arduino
}

void loop() {
  while(digitalRead(sinalDoSensor)==HIGH) { //Enquanto o sinal do sensor for "Alto"
    for(int freq = 500; freq<2000; freq+=1){
      tone(8,freq); //A Gente liga o alarme atraves da função tone, e vamos alterando a frequencia
      delay(6);
    }
  }
  noTone(8);
}
