int sens[8] = { 0 };
void Ir_Sensor()
{
  for(int i=0; i<8; i++)
  {
    IR[i] = analogRead(ir[i]);
  }
  for (int i =0; i<8; i++)
  {
    if (IR[i]<=200) {sens[i]=1;}
    else if (IR[i]>=340) {sens[i]=0;}
    //Serial.print(sen[i]);
    //Serial.print("  ");
  }
  //Serial.println("");
  if (sens[0]==1) {Last_Read = 1;}
  if (sens[7]==1) {Last_Read = 2;}
}

