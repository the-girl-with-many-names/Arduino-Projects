void setup() 
{
    pinMode(13, OUTPUT); // Sets onboard LED to always output power
}

void loop() 
{
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
}