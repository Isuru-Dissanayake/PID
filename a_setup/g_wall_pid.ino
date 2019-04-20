float p = 10;   
float i = 0.00015;
float d = 5;

float Left_Wall = 8;

float Wallerror=0;
float Wallpreerror = 0;
float Walltoterror = 0;

float Wallpower = 0;

void Wall_Error()
{
  Wallerror = Left_Wall - Ldistance;
}

void Wall_PID()
{
  Wall_Error();
  Wallpreerror = Wallerror;
  Walltoterror += Wallerror;
  Wallpower = (p*Wallerror) + (d*(Wallerror-Wallpreerror);
  
}

