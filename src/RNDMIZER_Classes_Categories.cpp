#include <random>
#include "RNDMIZER_Classes_Categories.h"

//Class selection
void RNDMIZER_Classes_Categories::getClass()
{
	switchClassChoice = getRandomNumber(size(classes));
	switch(switchClassChoice)
	{
	case 0: pickedClass.append(classes[switchClassChoice]); break;
	case 1: pickedClass.append(classes[switchClassChoice]); break;
	case 2: pickedClass.append(classes[switchClassChoice]); break;
	case 3: pickedClass.append(classes[switchClassChoice]); break;
	default: cout << "Error during Class Selection" << endl; break;
	}
}

//Main Weapon Selection
void RNDMIZER_Classes_Categories::getMainWeapon()
{
	//Assault Main Weapon Selection
	if (pickedClass._Equal("Assault"))
	{
		switchCategoryChoice = getRandomNumber(size(assaultWeaponCategories));
		switch (switchCategoryChoice)
		{
		case 0: {
				assaultWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(assaultRifles));
				pickedWeaponCategory.append(assaultWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(assaultRifles[switchWeaponChoice]);break; 
				}

		case 1: {
				assaultWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory.append(assaultWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				assaultWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory.append(assaultWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				assaultWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory.append(assaultWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(shotgun[switchWeaponChoice]); break; 
				}
		default: cout << "Error during Assault Main Weapon Selection" << endl; break;
		}
	}

	//Engineer Main Weapon Selection
	else if (pickedClass._Equal("Engineer"))
	{
		switchCategoryChoice = getRandomNumber(size(engineerWeaponCategories));
		switch (switchCategoryChoice)
		{
		case 0: {
				engineerWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(pdw));
				pickedWeaponCategory.append(engineerWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(pdw[switchWeaponChoice]); break; 
				}

		case 1: {
				engineerWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory.append(engineerWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				engineerWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory.append(engineerWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				engineerWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory.append(engineerWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(shotgun[switchWeaponChoice]); break; 
				}
		default: cout << "Error during Engineer Main Weapon Selection" << endl; break;
		}
	}

	//Support Main Weapon Selection
	else if (pickedClass._Equal("Support"))
	{
		switchCategoryChoice = getRandomNumber(size(supportWeaponCategories));
		switch (switchCategoryChoice)
		{
		case 0: {
				supportWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(lmg));
				pickedWeaponCategory.append(supportWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(lmg[switchWeaponChoice]); break; 
				}

		case 1: {
				supportWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory.append(supportWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				supportWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory.append(supportWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				supportWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory.append(supportWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(shotgun[switchWeaponChoice]); break; 
				}
		default: cout << "Error during Support Main Weapon Selection" << endl; break;
		}
	}

	//Recon Main Weapon Selection
	else if (pickedClass._Equal("Recon"))
	{
	switchCategoryChoice = getRandomNumber(size(reconWeaponCategories));
		switch (switchCategoryChoice)
		{
		case 0: {
				reconWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(sniperRifle));
				pickedWeaponCategory.append(reconWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(sniperRifle[switchWeaponChoice]); break; 
				}

		case 1: {
				reconWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory.append(reconWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				reconWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory.append(reconWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				reconWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory.append(reconWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon.append(shotgun[switchWeaponChoice]); break;
				}
		default: cout << "Error during Recon Main Weapon Selection" << endl; break;
		}
	}
}

//Secondary Weapon Selection
void RNDMIZER_Classes_Categories::getSecondaryWeapon() 
{
	secondaryChoice = getRandomNumber(size(secondaryWeapons));
	pickedSecondary.append(secondaryWeapons[secondaryChoice]);
}

//Grenade Selection
void RNDMIZER_Classes_Categories::getGrenade()
{
	grenadeChoice = getRandomNumber(size(grenade));
	pickedGrenade.append(grenade[grenadeChoice]);
}

//Field Upgrade Selection
void RNDMIZER_Classes_Categories::getGadgets()
{
	if (pickedClass._Equal("Assault")) //Assault
	{
		switchGadgetChoice1 = getRandomNumber(size(assaultGadget));
		pickedGadgetSlot1 = assaultGadget[switchGadgetChoice1];
		if (switchGadgetChoice1 < 10)
		{
			switchGadgetChoice2 = getRandomNumber(10, 15);
		}

		switchGadgetChoice2 = getRandomNumber(size(assaultGadget));
		if (switchGadgetChoice2 == switchGadgetChoice1)
		{
			do
			{
				switchGadgetChoice2 = getRandomNumber(size(assaultGadget));
			} while (switchGadgetChoice2 == switchGadgetChoice1);
			pickedGadgetSlot2 = assaultGadget[switchGadgetChoice2];
		}
		pickedGadgetSlot2 = assaultGadget[switchGadgetChoice2];

	}
	else if (pickedClass._Equal("Engineer")) //Engineer
	{
		switchGadgetChoice1 = getRandomNumber(size(engineerGadget));
		pickedGadgetSlot1 = engineerGadget[switchGadgetChoice1];
		if (switchGadgetChoice1 < 7)
		{
			switchGadgetChoice2 = getRandomNumber(7, 14);
		}
		switchGadgetChoice2 = getRandomNumber(size(engineerGadget));
		if (switchGadgetChoice2 == switchGadgetChoice1)
		{
			do
			{
				switchGadgetChoice2 = getRandomNumber(size(engineerGadget));
			} while (switchGadgetChoice2 == switchGadgetChoice1);
			pickedGadgetSlot2 = engineerGadget[switchGadgetChoice2];
		}
		pickedGadgetSlot2 = engineerGadget[switchGadgetChoice2];
	}
	else if (pickedClass._Equal("Support")) //Support
	{
		switchGadgetChoice1 = getRandomNumber(size(supportGadget));
		pickedGadgetSlot1 = supportGadget[switchGadgetChoice1];
		if (switchGadgetChoice1 < 3)
		{
			switchGadgetChoice2 = getRandomNumber(3, 13);
			pickedGadgetSlot2 = supportGadget[switchGadgetChoice2];
		}
		switchGadgetChoice2 = getRandomNumber(size(supportGadget));
		if (switchGadgetChoice2 == switchGadgetChoice1)
		{
			do
			{
				switchGadgetChoice2 = getRandomNumber(size(supportGadget));
			} while (switchGadgetChoice2 == switchGadgetChoice1);
			pickedGadgetSlot2 = supportGadget[switchGadgetChoice2];
		}
		pickedGadgetSlot2 = supportGadget[switchGadgetChoice2];
	}

	else if (pickedClass._Equal("Recon")) //Recon
	{
		switchGadgetChoice1 = getRandomNumber(size(reconGadget));
		pickedGadgetSlot1 = reconGadget[switchGadgetChoice1];
		switchGadgetChoice2 = getRandomNumber(size(reconGadget));
		if (switchGadgetChoice2 == switchGadgetChoice1)
		{
			do
			{
				switchGadgetChoice2 = getRandomNumber(size(reconGadget));
			} while (switchGadgetChoice2 == switchGadgetChoice1);
			pickedGadgetSlot2 = reconGadget[switchGadgetChoice2];
		}
		pickedGadgetSlot2 = reconGadget[switchGadgetChoice2];
	}

}

//Random Number Generator
int RNDMIZER_Classes_Categories::getRandomNumber(int arraySize)
{
	if (arraySize == 0) arraySize + 1;
	
	random_device rd;
	mt19937 drg(rd());
	uniform_int_distribution<int> rndm(0, arraySize-1);
	return rndm(drg);
	
}

int RNDMIZER_Classes_Categories::getRandomNumber(int minSize, int maxSize)
{
	//if (arraySize == 0) arraySize + 1;

	random_device rd;
	mt19937 drg(rd());
	uniform_int_distribution<int> rndm(minSize, maxSize - 1);
	return rndm(drg);
}

//Test Class
void RNDMIZER_Classes_Categories::printPickedLoadout()
{
	cout << " | " << pickedClass << " | " << pickedWeaponCategory << " | " << pickedMainWeapon << " | " << pickedSecondary << " | " << pickedGrenade << " | " << pickedGadgetSlot1 << " | " << pickedGadgetSlot2;
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