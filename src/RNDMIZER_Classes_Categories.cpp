#include <random>
#include "RNDMIZER_Classes_Categories.h"

//Class selection
void RNDMIZER_Classes_Categories::getClass()
{
	switchClassChoice = getRandomNumber(size(classes));
	switch(switchClassChoice)
	{
	case 0: pickedClass = (classes[switchClassChoice]); break;
	case 1: pickedClass = (classes[switchClassChoice]); break;
	case 2: pickedClass = (classes[switchClassChoice]); break;
	case 3: pickedClass = (classes[switchClassChoice]); break;
	default: cout << "Error during Class Selection" << endl; break;
	}
}

//Main Weapon Selection
void RNDMIZER_Classes_Categories::getMainWeapon()
{
	//Assault Main Weapon Selection
	if (pickedClass._Equal(classes[0]))
	{
		switchCategoryChoice = getRandomNumber(size(assaultWeaponCategories));
		switch (switchCategoryChoice)
		{
		case 0: {
				assaultWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(assaultRifles));
				pickedWeaponCategory = (assaultWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (assaultRifles[switchWeaponChoice]);break; 
				}

		case 1: {
				assaultWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory = (assaultWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				assaultWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory = (assaultWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				assaultWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory = (assaultWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (shotgun[switchWeaponChoice]); break; 
				}
		default: cout << "Error during Assault Main Weapon Selection" << endl; break;
		}
	}

	//Engineer Main Weapon Selection
	else if (pickedClass._Equal(classes[1]))
	{
		switchCategoryChoice = getRandomNumber(size(engineerWeaponCategories));
		switch (switchCategoryChoice)
		{
		case 0: {
				engineerWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(pdw));
				pickedWeaponCategory = (engineerWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (pdw[switchWeaponChoice]); break; 
				}

		case 1: {
				engineerWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory = (engineerWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				engineerWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory = (engineerWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				engineerWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory = (engineerWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (shotgun[switchWeaponChoice]); break; 
				}
		default: cout << "Error during Engineer Main Weapon Selection" << endl; break;
		}
	}

	//Support Main Weapon Selection
	else if (pickedClass._Equal(classes[2]))
	{
		switchCategoryChoice = getRandomNumber(size(supportWeaponCategories));
		switch (switchCategoryChoice)
		{
		case 0: {
				supportWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(lmg));
				pickedWeaponCategory = (supportWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (lmg[switchWeaponChoice]); break; 
				}

		case 1: {
				supportWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory = (supportWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				supportWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory = (supportWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				supportWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory = (supportWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (shotgun[switchWeaponChoice]); break; 
				}
		default: cout << "Error during Support Main Weapon Selection" << endl; break;
		}
	}

	//Recon Main Weapon Selection
	else if (pickedClass._Equal(classes[3]))
	{
	switchCategoryChoice = getRandomNumber(size(reconWeaponCategories));
		switch (switchCategoryChoice)
		{
		case 0: {
				reconWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(sniperRifle));
				pickedWeaponCategory = (reconWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (sniperRifle[switchWeaponChoice]); break; 
				}

		case 1: {
				reconWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedWeaponCategory = (reconWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (carbine[switchWeaponChoice]); break; 
				}

		case 2: {
				reconWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedWeaponCategory = (reconWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (dmr[switchWeaponChoice]); break; 
				}

		case 3: {
				reconWeaponCategories[switchCategoryChoice];
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedWeaponCategory = (reconWeaponCategories[switchCategoryChoice]);
				pickedMainWeapon = (shotgun[switchWeaponChoice]); break;
				}
		default: cout << "Error during Recon Main Weapon Selection" << endl; break;
		}
	}
}

//Secondary Weapon Selection
void RNDMIZER_Classes_Categories::getSecondaryWeapon() 
{
	secondaryChoice = getRandomNumber(size(secondaryWeapons));
	pickedSecondary = (secondaryWeapons[secondaryChoice]);
}

//Grenade Selection
void RNDMIZER_Classes_Categories::getGrenade()
{
	grenadeChoice = getRandomNumber(size(grenade));
	pickedGrenade = (grenade[grenadeChoice]);
}

//Gadget Selection
void RNDMIZER_Classes_Categories::getGadgets()
{
	if (pickedClass._Equal(classes[0])) //Assault
	{
		switchGadgetChoice1 = getRandomNumber(size(assaultGadget));
		pickedGadgetSlot1 = assaultGadget[switchGadgetChoice1];
		if (switchGadgetChoice1 <= 10)
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
	else if (pickedClass._Equal(classes[1])) //Engineer
	{
		switchGadgetChoice1 = getRandomNumber(size(engineerGadget));
		pickedGadgetSlot1 = engineerGadget[switchGadgetChoice1];
		if (switchGadgetChoice1 <= 7)
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
	else if (pickedClass._Equal(classes[2])) //Support
	{
		switchGadgetChoice1 = getRandomNumber(size(supportGadget));
		pickedGadgetSlot1 = supportGadget[switchGadgetChoice1];
		if (switchGadgetChoice1 <= 3)
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
	else if (pickedClass._Equal(classes[3])) //Recon
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
	else
	{
		cout << "Error during Gadget selection" << endl;
	}
}

//Field Upgrade Selection
void RNDMIZER_Classes_Categories::getFieldUpgrade()
{
	if (pickedClass._Equal(classes[0]))
	{
		switchFieldUpgrade = getRandomNumber(size(assaultFieldUpgrades));
		pickedFieldUpgrade = assaultFieldUpgrades[switchFieldUpgrade];
	}
	if (pickedClass._Equal(classes[1]))
	{
		switchFieldUpgrade = getRandomNumber(size(engineerFieldUpgrades));
		pickedFieldUpgrade = engineerFieldUpgrades[switchFieldUpgrade];
	}
	if (pickedClass._Equal(classes[2]))
	{
		switchFieldUpgrade = getRandomNumber(size(supportFieldUpgrades));
		pickedFieldUpgrade = supportFieldUpgrades[switchFieldUpgrade];
	}
	if (pickedClass._Equal(classes[3]))
	{
		switchFieldUpgrade = getRandomNumber(size(reconFieldUpgrades));
		pickedFieldUpgrade = reconFieldUpgrades[switchFieldUpgrade];
	}
}

//Mutator Selection
void RNDMIZER_Classes_Categories::getMutators(int difficulty)
{
	if (difficulty <= 2)
	{
		if (pickedClass._Equal(classes[0]))
		{
			if (pickedGadgetSlot1._Equal(assaultGadget[0]) || pickedGadgetSlot2._Equal(assaultGadget[0]) || pickedGadgetSlot1._Equal(assaultGadget[11]) || pickedGadgetSlot2._Equal(assaultGadget[11]) || pickedGadgetSlot1._Equal(assaultGadget[10]) || pickedGadgetSlot1._Equal(assaultGadget[12]) || pickedGadgetSlot2._Equal(assaultGadget[10]) || pickedGadgetSlot2._Equal(assaultGadget[12]))
			{
				if (pickedGadgetSlot1._Equal(assaultGadget[0]) || pickedGadgetSlot2._Equal(assaultGadget[0]))
				{
					switchSoldierMutator = getRandomNumber(6, 9);
					pickedSoldierMutator = assaultMutator[switchSoldierMutator];
				}
				if (pickedGadgetSlot1._Equal(assaultGadget[11]) || pickedGadgetSlot2._Equal(assaultGadget[11]))
				{
					switchSoldierMutator = getRandomNumber(2, 6);
					pickedSoldierMutator = assaultMutator[switchSoldierMutator];
				}
				if (pickedGadgetSlot1._Equal(assaultGadget[10]) || pickedGadgetSlot1._Equal(assaultGadget[12]) || pickedGadgetSlot2._Equal(assaultGadget[10]) || pickedGadgetSlot2._Equal(assaultGadget[12]))
				{
					switchSoldierMutator = getRandomNumber(0, 4);
					pickedSoldierMutator = assaultMutator[switchSoldierMutator];
				}
			}
			else
			{
				switchSoldierMutator = (size(assaultMutator)-1);
				pickedSoldierMutator = assaultMutator[switchSoldierMutator];
			}
			
			if (difficulty == 3)
			{
				switchAttachmentMutator = getRandomNumber(size(attachementMutator));
				switchMovementMutator = getRandomNumber(size(movementMutator));
				pickedAttachmentMutator = attachementMutator[switchAttachmentMutator];
				pickedMovementMutator = movementMutator[switchMovementMutator];
			}
		}
		if (pickedClass._Equal(classes[1]))
		{
			switchSoldierMutator = getRandomNumber(size(engineerMutator));
			pickedSoldierMutator = engineerMutator[switchSoldierMutator];
			if (difficulty == 3)
			{
				switchAttachmentMutator = getRandomNumber(size(attachementMutator));
				switchMovementMutator = getRandomNumber(size(movementMutator));
				pickedAttachmentMutator = attachementMutator[switchAttachmentMutator];
				pickedMovementMutator = movementMutator[switchMovementMutator];
			}
		}
		if (pickedClass._Equal(classes[2]))
		{
			switchSoldierMutator = getRandomNumber(size(supportMutator));
			pickedSoldierMutator = supportMutator[switchSoldierMutator];
			if (difficulty == 3)
			{
				switchAttachmentMutator = getRandomNumber(size(attachementMutator));
				switchMovementMutator = getRandomNumber(size(movementMutator));
				pickedAttachmentMutator = attachementMutator[switchAttachmentMutator];
				pickedMovementMutator = movementMutator[switchMovementMutator];
			}
		}
		if (pickedClass._Equal(classes[3]))
		{
			switchSoldierMutator = getRandomNumber(size(reconMutator));
			pickedSoldierMutator = reconMutator[switchSoldierMutator];
			if (difficulty == 3)
			{
				switchAttachmentMutator = getRandomNumber(size(attachementMutator));
				switchMovementMutator = getRandomNumber(size(movementMutator));
				pickedAttachmentMutator = attachementMutator[switchAttachmentMutator];
				pickedMovementMutator = movementMutator[switchMovementMutator];
			}
		}
	}
}

//Item Reroll
void RNDMIZER_Classes_Categories::rerollItem(int switchItem)
{
	switch (switchItem)
	{
	case 1: getMainWeapon(); break;
	case 2:
	{
		//Assault Weapon Reroll
		if (pickedClass._Equal(classes[0]))
		{
			if (pickedWeaponCategory._Equal(assaultWeaponCategories[0]))
			{
				switchWeaponChoice = getRandomNumber(size(assaultRifles));
				pickedMainWeapon = assaultRifles[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(assaultWeaponCategories[1]))
			{
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedMainWeapon = carbine[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(assaultWeaponCategories[2]))
			{
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedMainWeapon = dmr[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(assaultWeaponCategories[3]))
			{
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedMainWeapon = shotgun[switchWeaponChoice];
			}
		}
		//Engineer Weapon Reroll
		else if (pickedClass._Equal(classes[1]))
		{
			if (pickedWeaponCategory._Equal(engineerWeaponCategories[0]))
			{
				switchWeaponChoice = getRandomNumber(size(pdw));
				pickedMainWeapon = pdw[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(engineerWeaponCategories[1]))
			{
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedMainWeapon = carbine[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(engineerWeaponCategories[2]))
			{
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedMainWeapon = dmr[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(engineerWeaponCategories[3]))
			{
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedMainWeapon = shotgun[switchWeaponChoice];
			}
		}
		//Support Weapon Reroll
		else if (pickedClass._Equal(classes[2]))
		{
			if (pickedWeaponCategory._Equal(supportWeaponCategories[0]))
			{
				switchWeaponChoice = getRandomNumber(size(lmg));
				pickedMainWeapon = lmg[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(supportWeaponCategories[1]))
			{
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedMainWeapon = carbine[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(supportWeaponCategories[2]))
			{
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedMainWeapon = dmr[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(supportWeaponCategories[3]))
			{
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedMainWeapon = shotgun[switchWeaponChoice];
			}
		}
		// Recon Weapon Reroll
		else if (pickedClass._Equal(classes[3]))
		{
			if (pickedWeaponCategory._Equal(reconWeaponCategories[0]))
			{
				switchWeaponChoice = getRandomNumber(size(sniperRifle));
				pickedMainWeapon = sniperRifle[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(reconWeaponCategories[1]))
			{
				switchWeaponChoice = getRandomNumber(size(carbine));
				pickedMainWeapon = carbine[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(reconWeaponCategories[2]))
			{
				switchWeaponChoice = getRandomNumber(size(dmr));
				pickedMainWeapon = dmr[switchWeaponChoice];
			}
			if (pickedWeaponCategory._Equal(reconWeaponCategories[3]))
			{
				switchWeaponChoice = getRandomNumber(size(shotgun));
				pickedMainWeapon = shotgun[switchWeaponChoice];
			}
		}
		break;
	}
	case 3: getSecondaryWeapon();  break;
	case 4: getGrenade(); break;
	case 5: getGadgets(); break;
	default: break;
	}
}

//Random Number Generators
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
	random_device rd;
	mt19937 drg(rd());
	uniform_int_distribution<int> rndm(minSize, maxSize - 1);
	return rndm(drg);
}

//Loadout Printing
void RNDMIZER_Classes_Categories::printPickedLoadout(int difficulty)
{
	cout << "<----------->" << endl;
	cout << "Class: " << pickedClass << endl;
	cout << "Main Weapon Category: " << pickedWeaponCategory << endl;
	cout << "Main Weapon: " << pickedMainWeapon << endl;
	cout << "Secondary: " << pickedSecondary << endl;
	cout << "Grenade: " << pickedGrenade << endl;
	cout << "Gadget One: " << pickedGadgetSlot1 << endl;
	cout << "Gadget Two: " << pickedGadgetSlot2 << endl;
	cout << "Field Upgrade: " << pickedFieldUpgrade << endl;
	cout << "<----------->" << endl;
	if (difficulty == 2)
	{
		cout << "Class Mutator: " << pickedSoldierMutator << endl;
		cout << "<----------->" << endl;
	}
	else if (difficulty == 3)
	{
		cout << "Class Mutator: " << pickedSoldierMutator << endl;
		cout << "Attachment Mutator: " << pickedAttachmentMutator << endl;
		cout << "Movement Mutator: " << pickedMovementMutator << endl;
		cout << "<----------->" << endl;
	}
}