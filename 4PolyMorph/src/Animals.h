/*
 * Animals.h
 *
 *  Created on: Mar 8, 2013
 *      Author: richard
 */
#include <iostream>

class Animal {
	public:

	  //Born :)
	  Animal( const char* _newName = "Nameless" );

	  //Talks
	  virtual void speaks() = 0;

	  //Dies :(
	  virtual ~Animal();

	private:
	  const char* animalName;

};

class Cat: public Animal{
	public:
		//Born :)
		Cat( const char* _newName = "Nameless Cat" );

		//Virtual override
		void speaks();

		//Dies :(
		virtual ~Cat();


	private:
		const char* catsName;
};

class Dog: public Animal{
	public:
		//Born :)
		Dog( const char* _newName = "Nameless Dog" );

		//Virtual override
		void speaks();

		//Dies :(
		virtual ~Dog();

	private:
		const char* dogsName;
};

class Human: public Animal{
	public:
		//Born :)
		Human( const char* _newName = "Nameless Human" );

		//Virtual override
		void speaks();

		//Dies :(
		virtual ~Human();

	private:
		const char* humansName;
};


static void speak_all(Animal *vec[], int size)
{
  for (int i=0; i < size; i++)
    vec[i]->speaks();
}

static void leave_all(Animal *vec[], int size)
{
  for (int i=0; i < size; i++)
    delete vec[i];
}
