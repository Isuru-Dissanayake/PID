long fduration;
int Fdistance;
int Forwardstate ;

long lduration;
int Ldistance;
int Leftstate ;

long rduration;
int Rdistance;
int Rightstate ;

void Lsonar() 
{
digitalWrite(ltrigPin, LOW);
delayMicroseconds(5);
digitalWrite(ltrigPin, HIGH);
delayMicroseconds(5);
digitalWrite(ltrigPin, LOW);
lduration = pulseIn(lechoPin, HIGH);
Ldistance= lduration*0.034/2;
}

void Fsonar() 
{
digitalWrite(ftrigPin, LOW);
delayMicroseconds(5);
digitalWrite(ftrigPin, HIGH);
delayMicroseconds(5);
digitalWrite(ftrigPin, LOW);
fduration = pulseIn(fechoPin, HIGH);
Fdistance= fduration*0.034/2;
}

void Rsonar() 
{
digitalWrite(rtrigPin, LOW);
delayMicroseconds(2);
digitalWrite(rtrigPin, HIGH);
delayMicroseconds(10);
digitalWrite(rtrigPin, LOW);
rduration = pulseIn(rechoPin, HIGH);
Rdistance= rduration*0.034/2;
}

void Sonar_State()
{
  if (Ldistance <= 20 ) {Leftstate = 1;}
  else {Leftstate = 0;}

  if (Fdistance <= 20 ) {Forwardstate = 1;}
  else {Forwardstate = 0;}

  if (Rdistance <= 20 ) {Rightstate = 1;}
  else {Rightstate = 0;}
}

