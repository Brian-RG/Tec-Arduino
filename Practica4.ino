long tiempo;
int disparador = 2;
int entrada = 4;
float distancia;

void setup() {
  Serial.begin(9600);
  pinMode(disparador,OUTPUT);
  pinMode(entrada,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(disparador, HIGH);
  delay (30);
  digitalWrite(disparador, LOW);

  tiempo = (pulseIn(entrada, HIGH)/2);

  distancia = float(tiempo * 0.0343);
  Serial.print(distancia);
  Serial.println("cm");

  if(distancia <10){
      digitalWrite(8,HIGH);
    }
  else if(distancia >10 and distancia <20){
      digitalWrite(9,HIGH);
    }
  else if (distancia >20){
      digitalWrite(10,HIGH);
    }
  }
  

