#include <random>
#include <array>
#include "RNDMIZER_Classes_Categories.h"

//Class selection
void RNDMIZER_Classes_Categories::getClass()
{
	int switchChoice = getRandomNumber(sizeof(classes[4]) / sizeof(classes[0]));
	switch(switchChoice)
	{
	case 0: pickedClass.append(classes[switchChoice]); break;
	case 1: pickedClass.append(classes[switchChoice]); break;
	case 2: pickedClass.append(classes[switchChoice]); break;
	case 3: pickedClass.append(classes[switchChoice]); break;
	default: cout << "Error during Class Selection" << endl; break;
	}
}

void RNDMIZER_Classes_Categories::getWeaponCategory()
{
	//Assault Main Weapon Category Selection
	if(pickedClass._Equal("Assault"))
	{
		int switchChoice = getRandomNumber(sizeof(assaultWeaponCategories[4]) / sizeof(assaultWeaponCategories[0]));
		switch (switchChoice)
		{
		case 0: pickedWeaponCategory.append(assaultWeaponCategories[switchChoice]); break;
		case 1: pickedWeaponCategory.append(assaultWeaponCategories[switchChoice]); break;
		case 2: pickedWeaponCategory.append(assaultWeaponCategories[switchChoice]); break;
		case 3: pickedWeaponCategory.append(assaultWeaponCategories[switchChoice]); break;
		default: cout << "Error during Recon Main Weapon Categroy Selection" << endl; break;
		}
	}

	//Engineer Main Weapon Category Selection
	else if (pickedClass._Equal("Engineer"))
	{
		int switchChoice = getRandomNumber(sizeof(engineerWeaponCategories[4]) / sizeof(engineerWeaponCategories[0]));
		switch (switchChoice) 
		{
		case 0: pickedWeaponCategory.append(engineerWeaponCategories[switchChoice]); break;
		case 1: pickedWeaponCategory.append(engineerWeaponCategories[switchChoice]); break;
		case 2: pickedWeaponCategory.append(engineerWeaponCategories[switchChoice]); break;
		case 3: pickedWeaponCategory.append(engineerWeaponCategories[switchChoice]); break;
		default: cout << "Error during Recon Main Weapon Categroy Selection" << endl; break;
		}
	}

	//Support Main Weapon Category Selection
	else if (pickedClass._Equal("Support"))
	{
		int switchChoice = getRandomNumber(sizeof(supportWeaponCategories[4]) / sizeof(supportWeaponCategories[0]));
		switch (switchChoice) 
		{
		case 0: pickedWeaponCategory.append(supportWeaponCategories[switchChoice]); break;
		case 1: pickedWeaponCategory.append(supportWeaponCategories[switchChoice]); break;
		case 2: pickedWeaponCategory.append(supportWeaponCategories[switchChoice]); break;
		case 3: pickedWeaponCategory.append(supportWeaponCategories[switchChoice]); break;
		default: cout << "Error during Recon Main Weapon Categroy Selection" << endl; break;
		}
	}

	//Recon Main Weapon Category Selection
	else if (pickedClass._Equal("Recon"))
	{
		int switchChoice = getRandomNumber(sizeof(reconWeaponCategories[4]) / sizeof(reconWeaponCategories[0]));
		switch (switchChoice) 
		{
		case 0: pickedWeaponCategory.append(reconWeaponCategories[switchChoice]); break;
		case 1: pickedWeaponCategory.append(reconWeaponCategories[switchChoice]); break;
		case 2: pickedWeaponCategory.append(reconWeaponCategories[switchChoice]); break;
		case 3: pickedWeaponCategory.append(reconWeaponCategories[switchChoice]); break;
		default: cout << "Error during Recon Main Weapon Categroy Selection" << endl; break;
		}
	}
}

void RNDMIZER_Classes_Categories::getMainWeapon()
{
	//Assault Main Weapon Selection
	if (pickedClass._Equal("Assault"))
	{
		int switchChoice = getRandomNumber(sizeof(assaultWeaponCategories[4]) / sizeof(assaultWeaponCategories[0]));
		switch (switchChoice)
		{
		case 0: assaultWeaponCategories[switchChoice]; 
			int switchWeaponChoice = getRandomNumber(sizeof(assaultRifles[16]) / sizeof(assaultRifles[0]));
			pickedWeapon.append(assaultRifles[switchWeaponChoice]); break;

		case 1: assaultWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(carbine[13]) / sizeof(carbine[0]));
			pickedWeapon.append(carbine[switchWeaponChoice]); break;

		case 2: assaultWeaponCategories[switchChoice]; 
			int switchWeaponChoice = getRandomNumber(sizeof(dmr[8]) / sizeof(dmr[0]));
			pickedWeapon.append(dmr[switchWeaponChoice]); break;

		case 3: assaultWeaponCategories[switchChoice]; 
			int switchWeaponChoice = getRandomNumber(sizeof(shotgun[9]) / sizeof(shotgun[0]));
			pickedWeapon.append(shotgun[switchWeaponChoice]); break;
		default: cout << "Error during Assault Main Weapon Selection" << endl; break;
		}
	}

	//Engineer Main Weapon Selection
	else if (pickedClass._Equal("Engineer"))
	{
		int switchChoice = getRandomNumber(sizeof(engineerWeaponCategories[4]) / sizeof(engineerWeaponCategories[0]));
		switch (switchChoice)
		{
		case 0: engineerWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(pdw[14]) / sizeof(pdw[0]));
			pickedWeapon.append(pdw[switchWeaponChoice]); break;

		case 1: engineerWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(carbine[13]) / sizeof(carbine[0]));
			pickedWeapon.append(carbine[switchWeaponChoice]); break;

		case 2: engineerWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(dmr[8]) / sizeof(dmr[0]));
			pickedWeapon.append(dmr[switchWeaponChoice]); break;

		case 3: engineerWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(shotgun[9]) / sizeof(shotgun[0]));
			pickedWeapon.append(shotgun[switchWeaponChoice]); break;
		default: cout << "Error during Engineer Main Weapon Selection" << endl; break;
		}
	}

	//Engineer Main Weapon Selection
	else if (pickedClass._Equal("Support"))
	{
		int switchChoice = getRandomNumber(sizeof(supportWeaponCategories[4]) / sizeof(supportWeaponCategories[0]));
		switch (switchChoice)
		{
		case 0: supportWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(lmg[13]) / sizeof(lmg[0]));
			pickedWeapon.append(lmg[switchWeaponChoice]); break;

		case 1: supportWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(carbine[13]) / sizeof(carbine[0]));
			pickedWeapon.append(carbine[switchWeaponChoice]); break;

		case 2: supportWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(dmr[8]) / sizeof(dmr[0]));
			pickedWeapon.append(dmr[switchWeaponChoice]); break;

		case 3: supportWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(shotgun[9]) / sizeof(shotgun[0]));
			pickedWeapon.append(shotgun[switchWeaponChoice]); break;
		default: cout << "Error during Support Main Weapon Selection" << endl; break;
		}
	}

	//Engineer Main Weapon Selection
	else if (pickedClass._Equal("Recon"))
	{
		int switchChoice = getRandomNumber(sizeof(reconWeaponCategories[4]) / sizeof(reconWeaponCategories[0]));
		switch (switchChoice)
		{
		case 0: reconWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(sniperRifle[13]) / sizeof(sniperRifle[0]));
			pickedWeapon.append(sniperRifle[switchWeaponChoice]); break;

		case 1: reconWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(carbine[13]) / sizeof(carbine[0]));
			pickedWeapon.append(carbine[switchWeaponChoice]); break;

		case 2: reconWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(dmr[8]) / sizeof(dmr[0]));
			pickedWeapon.append(dmr[switchWeaponChoice]); break;

		case 3: reconWeaponCategories[switchChoice];
			int switchWeaponChoice = getRandomNumber(sizeof(shotgun[9]) / sizeof(shotgun[0]));
			pickedWeapon.append(shotgun[switchWeaponChoice]); break;
		default: cout << "Error during Recon Main Weapon Selection" << endl; break;
		}
	}
}

//Secondary Weapon Selection
void RNDMIZER_Classes_Categories::getSecondaryWeapon() 
{
	int Choice = getRandomNumber(sizeof(secondaryWeapons[17]) / sizeof(secondaryWeapons[0]));
	pickedSecondary.append(secondaryWeapons[Choice]);
}

int RNDMIZER_Classes_Categories::getRandomNumber(int arraySize)
{
	random_device rd;
	default_random_engine drg(rd());
	uniform_int_distribution<int> rndm(0, arraySize);
	return rndm(drg);
}

void RNDMIZER_Classes_Categories::printPickedLoadout()
{
	cout << pickedLoadout;
}

void RNDMIZER_Classes_Categories::pickedLoadoutSpacer()
{
	pickedLoadout.append(" ");
}
string RNDMIZER_Classes_Categories::getPickedLoadout()
{
	return pickedLoadout;
}
string RNDMIZER_Classes_Categories::getRerolledItem()
{
	return rerollItem;
}