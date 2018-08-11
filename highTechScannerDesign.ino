// Made using Arduino Uno R3
// Made by Alcifer Bijec

int pinColumns[] = {A4, 11, 12, 13, A5, 8, 9, 10, 3, 6, 5, 7, 2, 1, 0, 4};
int pinLayers[] = {A0, A1, A2, A3};
int activatedColumn = 0;
int activatedLayer = 0;

void setup() {
    defaultSettings();
}

void loop() 
{
    scannerDesign();
}

void scannerDesign()
{
    int delayC = 5000;
    String on = "";

    on = addString(on, delayC, "111,122,133,144,");
    on = addString(on, delayC, "121,132,143,244,");
    on = addString(on, delayC, "131,142,243,344,");
    on = addString(on, delayC, "141,242,343,444,");
    on = addString(on, delayC, "241,342,443,434,");
    on = addString(on, delayC, "341,442,433,424,");
    on = addString(on, delayC, "441,432,423,414,");
    on = addString(on, delayC, "431,422,413,314,");
    on = addString(on, delayC, "421,412,313,214,");
    on = addString(on, delayC, "")
}

String removeString(String on, int delayC, int repeat) 
{
    for (int i = 0; i < repeat; i++) 
    {
        on = on.substring(4, on.length());
        lightArray(on, delayC);
    }
    return on;
}

String addString(String on, int hold, String add) 
{
    on += add;
    lightArray(on, hold);
    return on;
}

void lightArray(String on, int hold) 
{
    for (int i = 0; i < hold; i += on.length()) 
    {
        for (int i = 0; i < on.length(); i += 4)
        {
            // The number will be XYZ
            int x = on.substring(i, i + 1).toInt();

            // Find Y
            int y = on.substring(i + 1, i + 2).toInt();

            // Find Z
            int z = on.substring(i + 2, i + 3).toInt();

            x = x - 1;
            y = y - 1;
            z = z - 1;

            int column = x + (y * 4);
            int layer = z;
            turnLEDOn(column, layer);
            delayMicroseconds(300);
        }
    }
}

void defaultSettings() 
{
        // We declare all 16 pins as OUTPUT pins
    for(int i = 0; i < 16; i++) {
        pinMode(pinColumns[i], OUTPUT);
        digitalWrite(pinColumns[i], LOW);
    }

        // Then we declare all 4 layers as OUTPUT pins
    for(int i = 0; i < 4; i++) {
        pinMode(pinLayers[i], OUTPUT);
        digitalWrite(pinLayers[i], HIGH);
    }
}

void turnLEDOn(int column, int layer) 
{
    // Code to turn the last LED off
    digitalWrite(pinColumns[activatedColumn], LOW);
    digitalWrite(pinLayers[activatedLayer], HIGH);

    // Redefine the current active LED coord
    activatedColumn = column;
    activatedLayer = layer;

    // Code to turn the new LED on
    digitalWrite(pinColumns[activatedColumn], HIGH);
    digitalWrite(pinLayers[activatedLayer], LOW); 
}
