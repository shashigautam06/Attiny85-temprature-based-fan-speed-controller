int readTemp() 
{  
  // get the temperature and convert it to celsius
  temp = analogRead(temp_LM35);
  temp=temp*(5.0/1023.0)*100;
  // float farh=(cel*9)/5+32;
     delay(10);
     return temp;
}


