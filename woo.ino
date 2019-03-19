#include <sparki.h>

void setup()
{
  // F
  sparki.moveForward(11);
  sparki.moveRight(90);
  sparki.moveForward(5.5);
  sparki.moveBackward(5.5);
  sparki.moveLeft(90);
  sparki.moveBackward(4.5);
  sparki.moveRight(90);
  sparki.moveForward(5.5);
  sparki.moveBackward(5.5);
  sparki.moveLeft(90);
  sparki.moveBackward(6.5);
  sparki.beep(1000, 1000);
  
  // transfer to U posi
  sparki.transfer();
  
  // U
  sparki.moveForward(11);
  sparki.moveBackward(11);
  sparki.moveRight(90);
  sparki.moveForward(5.5);
  sparki.moveLeft(90);
  sparki.moveForward(11);
  sparki.moveBackward(11);
  sparki.beep(1000, 1000);
  
  // Transfer to S posi.
  sparki.transfer();
  
  // S
  sparki.moveRight(90);
  sparki.moveForward(5.5);
  sparki.moveLeft(90);
  sparki.moveForward(6.5);
  sparki.moveLeft(90);
  sparki.moveForward(5.5);
  sparki.moveRight(90);
  sparki.moveForward(4.5);
  sparki.moveRight(90);
  sparki.moveForward(5.5);
  sparki.beep(1000, 1000);
  sparki.moveLeft(90);
  sparki.moveBackward(11);
}

void loop()
{
}

void transfer()
{
  sparki.moveRight(90);
  sparki.moveForward(8);
  sparki.beep(1000, 1000);
  sparki.moveLeft(90);
}

