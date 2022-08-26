#include <random>
#include "RNDMIZER_Classes_Categories.h"

//Class selection
void RNDMIZER_Classes_Categories::getClass()
{
	int switchChoice = getRandomNumber(size(classes));
	switch(switchChoice)
	{
	case 0: pickedClass.append(classes[switchChoice]); break;
	case 1: pickedClass.append(classes[switchChoice]); break;
	case 2: pickedClass.append(classes[switchChoice]); break;
	case 3: pickedClass.append(classes[switchChoice]); break;
	default: cout << "Error during Class Selection" << endl; break;
	}
}

//Main Weapon Selection
void RNDMIZER_Classes_Categories::getMainWeapon()
{
	//Assault Main Weapon Selection
	if (pickedClass._Equal("Assault"))
	{
		int switchChoice = getRandomNumber(size(assaultWeaponCategories));
		switch (switchChoice)
		{
		case 0: {
				assaultWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(assaultRifles));
				pickedWeaponCategory.append(assaultWeaponCategories[switchChoice]);
				pickedMainWeapon.append(assaultRifles[switchWeaponChoice]);break; 
				}

		case 1: {
				assaultWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory.append(assaultWeaponCategories[switchChoice]);
				pickedMainWeapon.append(carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				assaultWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory.append(assaultWeaponCategories[switchChoice]);
				pickedMainWeapon.append(dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				assaultWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory.append(assaultWeaponCategories[switchChoice]);
				pickedMainWeapon.append(shotgun[switchWeaponChoice]); break; 
				}
		default: cout << "Error during Assault Main Weapon Selection" << endl; break;
		}
	}

	//Engineer Main Weapon Selection
	else if (pickedClass._Equal("Engineer"))
	{
		int switchChoice = getRandomNumber(size(engineerWeaponCategories));
		switch (switchChoice)
		{
		case 0: {
				engineerWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(pdw));
				pickedWeaponCategory.append(engineerWeaponCategories[switchChoice]);
				pickedMainWeapon.append(pdw[switchWeaponChoice]); break; 
				}

		case 1: {
				engineerWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory.append(engineerWeaponCategories[switchChoice]);
				pickedMainWeapon.append(carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				engineerWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory.append(engineerWeaponCategories[switchChoice]);
				pickedMainWeapon.append(dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				engineerWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory.append(engineerWeaponCategories[switchChoice]);
				pickedMainWeapon.append(shotgun[switchWeaponChoice]); break; 
				}
		default: cout << "Error during Engineer Main Weapon Selection" << endl; break;
		}
	}

	//Support Main Weapon Selection
	else if (pickedClass._Equal("Support"))
	{
		int switchChoice = getRandomNumber(size(supportWeaponCategories));
		switch (switchChoice)
		{
		case 0: {
				supportWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(lmg));
				pickedWeaponCategory.append(supportWeaponCategories[switchChoice]);
				pickedMainWeapon.append(lmg[switchWeaponChoice]); break; 
				}

		case 1: {
				supportWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory.append(supportWeaponCategories[switchChoice]);
				pickedMainWeapon.append(carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				supportWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory.append(supportWeaponCategories[switchChoice]);
				pickedMainWeapon.append(dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				supportWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory.append(supportWeaponCategories[switchChoice]);
				pickedMainWeapon.append(shotgun[switchWeaponChoice]); break; 
				}
		default: cout << "Error during Support Main Weapon Selection" << endl; break;
		}
	}

	//Recon Main Weapon Selection
	else if (pickedClass._Equal("Recon"))
	{
		int switchChoice = getRandomNumber(size(reconWeaponCategories));
		switch (switchChoice)
		{
		case 0: {
				reconWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(sniperRifle));
				pickedWeaponCategory.append(reconWeaponCategories[switchChoice]);
				pickedMainWeapon.append(sniperRifle[switchWeaponChoice]); break; 
				}

		case 1: {
				reconWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory.append(reconWeaponCategories[switchChoice]);
				pickedMainWeapon.append(carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				reconWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory.append(reconWeaponCategories[switchChoice]);
				pickedMainWeapon.append(dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				reconWeaponCategories[switchChoice];
				int switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory.append(reconWeaponCategories[switchChoice]);
				pickedMainWeapon.append(shotgun[switchWeaponChoice]); break;
				}
		default: cout << "Error during Recon Main Weapon Selection" << endl; break;
		}
	}
}

//Secondary Weapon Selection
void RNDMIZER_Classes_Categories::getSecondaryWeapon() 
{
	int choice = getRandomNumber(size(secondaryWeapons));
	pickedSecondary.append(secondaryWeapons[choice]);
}

//Grenade Selection
void RNDMIZER_Classes_Categories::getGrenade()
{
	int choice = getRandomNumber(size(grenade));
	pickedGrenade.append(grenade[choice]);
}

//Random Number Generator
int RNDMIZER_Classes_Categories::getRandomNumber(int arraySize)
{
	
	random_device rd;
	mt19937 drg(rd());
	uniform_int_distribution<int> rndm(0, arraySize-1);
	return rndm(drg);
}
//Test Class
void RNDMIZER_Classes_Categories::printPickedLoadout()
{
	cout << " | " << pickedClass << " | " << pickedWeaponCategory << " | " << pickedMainWeapon << " | " << pickedSecondary << " | " << pickedGrenade;
}
//Test Class
void RNDMIZER_Classes_Categories::pickedLoadoutSpacer()
{
	pickedLoadout.append(" ");
}
//Test Class
string RNDMIZER_Classes_Categories::getPickedLoadout()
{

	return pickedLoadout;
}
//Test Class
string RNDMIZER_Classes_Categories::getRerolledItem()
{
	return rerollItem;
}