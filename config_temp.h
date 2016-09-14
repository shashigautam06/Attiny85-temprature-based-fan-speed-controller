

int temp_LM35 = A1;   // the output pin of LM35
int fan_pin = 1;       // the pin where fan module is
int led_state = 0;        // temprature status  pin
float temp;              //variable to store temprature data
int temp_Min = 30;   // the temperature to start the fan
int temp_Max = 70;   // the maximum temperature when fan is at 100%
int fan_Speed;

 
