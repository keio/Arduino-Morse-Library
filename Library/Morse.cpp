/*
  Morse.cpp - Library for flashing Morse code.
  Created by Ketil E, September 15, 2013.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Morse.h"

Morse::Morse(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;			// The underscore in _pin is a conventional way of naming private variables.
}

void Morse::dot()		// Morse:: means the function dot() is part of the Morse class
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}

void Morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}