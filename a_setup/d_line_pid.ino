int Errorval[8] = {-3, -2, -1, 0, 0, 1, 2, 3};

float Kp = 22;   
float Ki = 0.00051;
float Kd = 10 ;

float Error=0;
float previousError = 0;
float totalError = 0;

float Power = 0;

void Error_Cal()
{
  for(int i=0; i<8; i++)
  {
    Error = Error + sens[i]*Errorval[i];
  }
}


void Line_PID()
{
  Error_Cal();
  previousError = Error;
  totalError += Error;
  Power = (Kp*Error) + (Kd*(Error-previousError)) + (Ki*totalError); 
  Serial.println(Power);
  if( Power>Base_PWM ) { Power = Base_PWM; }
  if( Power<-Base_PWM ) { Power = -Base_PWM; }
  Right_PWM = Base_PWM - Power;
  Left_PWM = Base_PWM + Power;
  Error = 0;
  
  
  
}


