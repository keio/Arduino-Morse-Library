/*
  Morse.h - Library for flashing Morse code.
  Created by Ketil E, September 15, 2013.
  Released into the public domain.
*/

#ifndef Morse_h // These cryptic lines prevent problems if someone
#define Morse_h // accidentally includes the library twice.

#include "Arduino.h" // Sketches automatically include this. Libraries do not.

class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    int _pin;
};

/*
  A class is simply a collection of functions and variables that are all kept 
  together in one place. These functions and variables can be public, 
  meaning that they can be accessed by people using your library, or private, 
  meaning they can only be accessed from within the class itself. 
  Each class has a special function known as a constructor, which is used to 
  create an instance of the class. The constructor has the same name as the class,
  and no return type.
*/

#endif