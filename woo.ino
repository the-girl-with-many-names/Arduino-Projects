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

  // Transfer to U posi.
  sparki.moveRight(90);
  sparki.moveForward(8);
  sparki.beep(1000, 1000);
  sparki.moveLeft(90);
  

}

void loop()
{
}

