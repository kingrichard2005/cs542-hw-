/*
 * main.cpp
 *
 *  Created on: Mar 8, 2013
 *      Author: rgalvan
 */
#include <string>
#include <iostream>
#include <cstdio>
#include "Animals.h"


using namespace std;
int main( int argc, char *argv[] )
{
	//Story time

	cout << "In the universe..." << endl << endl;

	cout << "Creatures are born" << endl << endl;

	//Animals are born :)
	Cat * _aCat = new Cat("Cosmo");
	Dog * _aDog = new Dog("Athena");
	Human * _aHuman = new Human("John Doe");

	cout << endl << endl << "They say what they want to say" << endl << endl;

	//Animals speak
	_aHuman->speaks();
	_aDog->speaks();
	_aCat->speaks();

	Animal *animals[] = {new Cat(), new Dog(), new Human()};

	int size = sizeof animals / sizeof *animals; // length / size of class instance
	speak_all(animals, size);

	//And they depart ;(
	cout << endl << endl << "And they leave" << endl << endl;
	delete _aHuman;
	delete _aDog;
	delete _aCat;
	leave_all(animals, size);

	cout << endl << endl << "..so goes the universe." << endl;

    return 0;
}



