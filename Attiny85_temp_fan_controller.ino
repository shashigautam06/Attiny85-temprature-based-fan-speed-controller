/* this is a Attiny85 temprature based fan speed controller 
 *  where A1 pin is used for input  from temprature sensor (LM35)
 *  where pin 1 is PWM pin used for fan output. 
*/
#include "config_temp.h"

void setup()
{
  pinMode(fan_pin, OUTPUT);
  pinMode(led_state, OUTPUT);
  pinMode(temp_LM35, INPUT);
   
}
 
void loop()
{  
   temp = readTemp();     // get the temperature
   if(temp < temp_Min) 
   {   // if temp is lower than minimum temp
       fan_Speed = 0;      // fan is not spinning
       digitalWrite(fan_pin, LOW); 
       indicateLow();     
       
   } 
   if((temp >= temp_Min) && (temp <= temp_Max))
   {  // if temperature is higher than minimum temp
       fan_Speed = map(temp, temp_Min, temp_Max, 32, 255); // the actual speed of fan
       analogWrite(fan_pin, fan_Speed);  // spin the fan at the fanSpeed speed
      
   } 
   
   if(temp > temp_Max) 
   {        // if temp is higher than tempMax
     digitalWrite(led_state, HIGH);  // turn on led 
     
   } 
   else 
   {                    // else turn of led
     digitalWrite(led_state, LOW); 
     
   }
   
}
 

