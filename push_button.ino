int led = 12;    //  connect led with 12

int button =  35;   //  connect button with 35

int buttonstate;  //  variable to save incomming value from buttons

void setup() 
{

  pinMode(led, OUTPUT);       // Led is output device
 
  pinMode(button, INPUT);     // button is input device   
}
void loop() 
{
  buttonstate = digitalRead(button);  // Read & Save incomming value from button

switch (button)
{
  case HIGH:                // if buton is not pushed then execute
  digitalWrite(led,HIGH);    // Turn on Led
  break;                    // stop here
  case LOW:                 // if buton is pushed then execute
  digitalWrite(led,LOW);     // Turn off Led
  break;                    // stop here
}
}
