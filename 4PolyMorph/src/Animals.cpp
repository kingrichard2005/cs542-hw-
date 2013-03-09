/*
 * Animals.cpp
 *
 *  Created on: Mar 8, 2013
 *      Author: richard
 */
#include "Animals.h"

using namespace std;
//Abstract Thing: Animal

//Born :)
Animal::Animal( const char * _newName )
: animalName( _newName )
{
	cout << "Animal is born" << endl;
	return;
}

//Speaks

//Dies :(
Animal::~Animal()
{
	cout << "Animal died" << endl;
	return;
};

/********/
/********/


//Animals in the universe

//Cat
/********/
//Born :)
Cat::Cat( const char * _newName )
: catsName( _newName )
{
	cout << "Cat '"  << _newName << "' is born :)" << endl;
	return;
}

//Talks
void Cat::speaks()
{
	cout << "Cat: Meow, prrrrr!!" << endl;
}

//Dies :(
Cat::~Cat()
{
	cout << "'" << catsName << " died ;(" << endl;
	return;
};


//***
//Dog
/********/
//Born :)
Dog::Dog( const char * _newName )
: dogsName( _newName )
{
	cout << "Dog '"  << _newName << "' is born :)" << endl;
	return;
}

//Talks
void Dog::speaks( )
{
	cout << "Dog: Bark, ruff ruff!!" << endl;
}

//Dies :(
Dog::~Dog()
{
	cout << "'" << dogsName << "' died ;(" << endl;
	return;
};

//***
//Human
/********/
//Born :)
Human::Human( const char * _newName )
: humansName( _newName )
{
	cout << "Human '"  << _newName << "' is born :)" << endl;
	return;
}

//Talks
void Human::speaks( )
{
	cout << "Human: Hey, hows it going?" << endl;
}

//Dies :(
Human::~Human()
{
	cout << "'" << humansName << "' died ;(" << endl;
	return;
};
