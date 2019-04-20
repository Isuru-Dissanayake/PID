
void Enable()
{
  digitalWrite(Left_en, HIGH);
  digitalWrite(Right_en, HIGH);
}
void Disenable()
{
  digitalWrite(Left_en, LOW);
  digitalWrite(Right_en, LOW);
}

void Left_Forward() 
{
  Enable();
  digitalWrite(Left_Dir1, HIGH);
  digitalWrite(Left_Dir2, LOW);
  analogWrite(Left_Speed, Left_PWM);
}

void Left_Reverse() 
{
  Enable();
  digitalWrite(Left_Dir1, LOW);
  digitalWrite(Left_Dir2, HIGH);
  analogWrite(Left_Speed, Left_PWM);
}

void Right_Forward()
{
  Enable();
  digitalWrite(Right_Dir1, LOW);
  digitalWrite(Right_Dir2, HIGH);
  analogWrite(Right_Speed, Right_PWM); 
}

void Right_Reverse()
{
  Enable();
  digitalWrite(Right_Dir1, HIGH);
  digitalWrite(Right_Dir2, LOW);
  analogWrite(Right_Speed, Right_PWM);
}

void Left_Brake()
{
  digitalWrite(Left_Dir1, HIGH);
  digitalWrite(Left_Dir2, HIGH); 
}

void Right_Brake()
{
  digitalWrite(Right_Dir1, HIGH);
  digitalWrite(Right_Dir2, HIGH); 
}

void Forward()
{
  Left_Forward();
  Right_Forward();
}

void Reverse() 
{
  Left_Reverse();
  Right_Reverse();
}

void Brake()
{
  Left_Brake();
  Right_Brake();
}

void Turn_Left() 
{
  Right_Forward();
  Left_Reverse();
}

void Turn_Right() 
{
  Right_Reverse();
  Left_Forward();
}



