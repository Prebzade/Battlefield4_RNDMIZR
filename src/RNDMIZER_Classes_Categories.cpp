#include <iostream>
#include "RNDMIZER_Classes_Categories.h"

using namespace std;

void RNDMIZER_Classes_Categories::getClass(const string classes[4], string pickedLoadout)
{
	int switchChoice = getRandomNumber(sizeof(classes[4]));
	switch(switchChoice) 
	{
	case 0: this->pickedLoadout += "Assault "; break;
	case 1: this->pickedLoadout += "Engineer "; break;
	case 2: this->pickedLoadout += "Support "; break;
	case 3: this->pickedLoadout += "Recon "; break;
	default: cout << "Error during Class Selection" << endl; break;
	}
}

void RNDMIZER_Classes_Categories::getWeaponCategory(const string assaultWeaponCategories[4], const string engineerWeaponCategories[4], const string supportWeaponCategories[4], const string reconWeaponCategories[4], string pickedLoadout)
{
	if(pickedLoadout._Equal("Assault "))
	{
		int switchChoice = getRandomNumber(sizeof(assaultWeaponCategories[4]));
		switch (switchChoice) //Assault Main Weapon Selection
		{
		case 0: this->pickedLoadout += assaultWeaponCategories[0]; break;
		case 1: this->pickedLoadout += assaultWeaponCategories[1]; break;
		case 2: this->pickedLoadout += assaultWeaponCategories[2]; break;
		case 3: this->pickedLoadout += assaultWeaponCategories[3]; break;
		default: cout << "Error during Assault Main Weapon Selection" << endl; break;
		}
	}
	else if (pickedLoadout._Equal("Engineer "))
	{
		int switchChoice = getRandomNumber(sizeof(engineerWeaponCategories[4]));
		switch (switchChoice) //Engineer Main Weapon Selection
		{
		case 0: this->pickedLoadout += engineerWeaponCategories[0]; break;
		case 1: this->pickedLoadout += engineerWeaponCategories[1]; break;
		case 2: this->pickedLoadout += engineerWeaponCategories[2]; break;
		case 3: this->pickedLoadout += engineerWeaponCategories[3]; break;
		default: cout << "Error during Engineer Main Weapon Selection" << endl; break;
		}
	}
	else if (pickedLoadout._Equal("Support "))
	{
		int switchChoice = getRandomNumber(sizeof(supportWeaponCategories[4]));
		switch (switchChoice) //Support Main Weapon Selection
		{
		case 0: this->pickedLoadout += supportWeaponCategories[0]; break;
		case 1: this->pickedLoadout += supportWeaponCategories[1]; break;
		case 2: this->pickedLoadout += supportWeaponCategories[2]; break;
		case 3: this->pickedLoadout += supportWeaponCategories[3]; break;
		default: cout << "Error during Support Main Weapon Selection" << endl; break;
		}
	}
	else if (pickedLoadout._Equal("Recon "))
	{
		int switchChoice = getRandomNumber(sizeof(reconWeaponCategories[4]));
		switch (switchChoice) //Recon Main Weapon Selection
		{
		case 0: this->pickedLoadout += reconWeaponCategories[0]; break;
		case 1: this->pickedLoadout += reconWeaponCategories[1]; break;
		case 2: this->pickedLoadout += reconWeaponCategories[2]; break;
		case 3: this->pickedLoadout += reconWeaponCategories[3]; break;
		default: cout << "Error during Recon Main Weapon Selection" << endl; break;
		}
	}
}





int RNDMIZER_Classes_Categories::getRandomNumber(int arraySize)
{
	int rndmNumber = 0 + (rand() % (arraySize - 0 + 1));
	return rndmNumber;
}

string RNDMIZER_Classes_Categories::getPickedLoadout()
{
	cout << this->pickedLoadout;
}