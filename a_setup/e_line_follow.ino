/* a counter and a last reading is used here to take the robot back to the line if it goes out of the line */



int count = 0;

void Line_Follow()
{
  Ir_Sensor();
  count = 0;
  for(int i=0; i<8; i++)
  {
    if (sens[i] == 0) {count += 1;}
  }
  if (count == 8 && Last_Read == 1)
  {
   while (sens[3] == 0)
   {
    Turn_Right(); 
    Ir_Sensor();
   }
    
  }
  
  else if (count == 8 && Last_Read == 2)
  {
    while (sens[4] == 0)
    {
      Turn_Left();
      Ir_Sensor();
    }
  }

  else if (count == 0)
  {
    Brake();
  }

  else
  {
    Line_PID();
    Forward();
  }
}

