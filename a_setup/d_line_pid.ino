int Errorval[8] = {-3, -2, -1, 0, 0, 1, 2, 3};

float Kp = 10;   
float Ki = 0.00015;
float Kd = 1;

float Error=0;
float previousError = 0;
float totalError = 0;

float Power = 0;

void Error_Cal()
{
  for(int i=0; i<8; i++)
  {
    Error = Error + sen[i]*Errorval[i];
  }
}


void Line_PID()
{
  Error_Cal();
  previousError = Error;
  totalError += Error;
  //Serial.println(Error);
  Power = (Kp*Error) + (Kd*(Error-previousError); 
  if( Power>Base_PWM ) { Power = Base_PWM; }
  if( Power<-Base_PWM ) { Power = -Base_PWM; }
  Right_PWM = Base_PWM - Power;
  Left_PWM = Base_PWM + Power;
  Error = 0;
  
  
  
}



