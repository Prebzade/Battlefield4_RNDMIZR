#include "RNDMIZER_Classes_Categories.h"
#include <stdlib.h>

void pickDifficulty();
void pickLoadoutSoftcore(RNDMIZER_Classes_Categories rndm, int difficulty);
void pickLoadoutIntermediate(RNDMIZER_Classes_Categories rndm, int difficulty);
void pickLoadoutHardcore(RNDMIZER_Classes_Categories rndm, int difficulty);

int main()
{
	string repeat;

	do 
	{
		system("cls");
		pickDifficulty();

		cout << "Do you want to try another Difficulty? (Y/N): ";
		cin >> repeat;
		while (!(repeat._Equal("Y") || repeat._Equal("y") || repeat._Equal("N") || repeat._Equal("n")))
		{
			cout << "Wrong input. Please use Y or N. Not case sensitive! " << endl;
			cin >> repeat;
		}
	} while (repeat._Equal("Y") || repeat._Equal("y"));
	

	return 0;
}

void pickDifficulty()
{
	int difficulty = 0;
	RNDMIZER_Classes_Categories rndm;

	cout << "Welcome to the BF4 Loadout Randomizer by Prebzade" << endl;
	cout << "How hard you you want it to be?" << endl;
	cout << "1 = Softcore " << "\t" << " 2 = Intermediate " << "\t" << " 3 = Hardcore" << endl;
	cin >> difficulty;

	switch (difficulty)
	{
	case 1: pickLoadoutSoftcore(rndm, difficulty); break;
	case 2: pickLoadoutIntermediate(rndm, difficulty); break;
	case 3: pickLoadoutHardcore(rndm, difficulty); break;
	default: break;
	}
}

void pickLoadoutSoftcore(RNDMIZER_Classes_Categories rndm, int difficulty)
{
	string repeat;
	int switchItem;

	do
	{
		rndm.getClass();
		rndm.getMainWeapon();
		rndm.getSecondaryWeapon();
		rndm.getGrenade();
		rndm.getGadgets();
		rndm.getFieldUpgrade();
		switchItem = 0;

		while (switchItem != 6)
		{
			system("cls");
			cout << "BF4 Softcore Loadout RNDMIZER by Prebzade" << endl;
			cout << " " << endl;

			rndm.printPickedLoadout(difficulty);

			cout << " " << endl;
			cout << "Do you want to reroll something?" << endl;
			cout << "1 = Main Weapon Category" << "\t" << " 2 = Main Weapon Only " << "\t" << " 3 = Secondary" << endl;
			cout << "4 = Grenade " << "\t" << " 5 = Gadgets" << "\t" << " 6 = Nothing" << endl;
			cout << " " << endl;
			cout << "Number: ";
			cin >> switchItem;

			while (switchItem < 1 && switchItem > 6)
			{
				cout << "Wrong input. Please use numbers shown above!" << endl;
				cin >> switchItem;
			}
			if (switchItem > 0 && switchItem < 6)
			{
				switch (switchItem)
				{
				case 1: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 2: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 3: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 4: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 5: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 6: break;
				default: break;
				}
			}
		}
		cout << "" << endl;
		cout << "New Loadout ? (Y or N) ";
		cin >> repeat;
		while (!(repeat._Equal("Y") || repeat._Equal("y") || repeat._Equal("N") || repeat._Equal("n")))
		{
			cout << "Wrong input. Please use Y or N. Not case sensitive! " << endl;
			cin >> repeat;
		}
	} while (repeat._Equal("Y") || repeat._Equal("y"));
}

void pickLoadoutIntermediate(RNDMIZER_Classes_Categories rndm, int difficulty)
{
	string repeat;
	int switchItem;

	do
	{
		rndm.getClass();
		rndm.getMainWeapon();
		rndm.getSecondaryWeapon();
		rndm.getGrenade();
		rndm.getGadgets();
		rndm.getFieldUpgrade();
		rndm.getMutators(difficulty);
		switchItem = 0;

		while (switchItem != 6)
		{
			system("cls");
			cout << "BF4 Intermediate Loadout RNDMIZER by Prebzade" << endl;
			cout << " " << endl;

			rndm.printPickedLoadout(difficulty);

			cout << " " << endl;
			cout << "Do you want to reroll something?" << endl;
			cout << "1 = Main Weapon Category" << "\t" << " 2 = Main Weapon Only " << "\t" << " 3 = Secondary" << endl;
			cout << "4 = Grenade " << "\t" << " 5 = Gadgets" << "\t" << " 6 = Nothing" << endl;
			cout << " " << endl;
			cout << "Number: ";
			cin >> switchItem;

			while (switchItem < 1 && switchItem > 6)
			{
				cout << "Wrong input. Please use numbers shown above!" << endl;
				cin >> switchItem;
			}
			if (switchItem > 0 && switchItem < 6)
			{
				switch (switchItem)
				{
				case 1: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 2: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 3: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 4: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 5: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 6: break;
				default: break;
				}
			}
		}
		cout << "" << endl;
		cout << "New Loadout ? (Y or N) ";
		cin >> repeat;
		while (!(repeat._Equal("Y") || repeat._Equal("y") || repeat._Equal("N") || repeat._Equal("n")))
		{
			cout << "Wrong input. Please use Y or N. Not case sensitive! " << endl;
			cin >> repeat;
		}
	} while (repeat._Equal("Y") || repeat._Equal("y"));
}

void pickLoadoutHardcore(RNDMIZER_Classes_Categories rndm, int difficulty)
{
	string repeat;
	int switchItem;

	do
	{
		rndm.getClass();
		rndm.getMainWeapon();
		rndm.getSecondaryWeapon();
		rndm.getGrenade();
		rndm.getGadgets();
		rndm.getFieldUpgrade();
		rndm.getMutators(difficulty);
		switchItem = 0;

		while (switchItem != 6)
		{
			system("cls");
			cout << "BF4 Hardcore Loadout RNDMIZER by Prebzade" << endl;
			cout << " " << endl;

			rndm.printPickedLoadout(difficulty);

			cout << " " << endl;
			cout << "Do you want to reroll something?" << endl;
			cout << "1 = Main Weapon Category" << "\t" << " 2 = Main Weapon Only " << "\t" << " 3 = Secondary" << endl;
			cout << "4 = Grenade " << "\t" << " 5 = Gadgets" << "\t" << " 6 = Nothing" << endl;
			cout << " " << endl;
			cout << "Number: ";
			cin >> switchItem;

			while (switchItem < 1 && switchItem > 6)
			{
				cout << "Wrong input. Please use numbers shown above!" << endl;
				cin >> switchItem;
			}
			if (switchItem > 0 && switchItem < 6)
			{
				switch (switchItem)
				{
				case 1: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 2: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 3: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 4: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 5: rndm.rerollItem(switchItem); rndm.printPickedLoadout(difficulty); break;
				case 6: break;
				default: break;
				}
			}
		}
		cout << "" << endl;
		cout << "New Loadout ? (Y or N) ";
		cin >> repeat;
		while (!(repeat._Equal("Y") || repeat._Equal("y") || repeat._Equal("N") || repeat._Equal("n")))
		{
			cout << "Wrong input. Please use Y or N. Not case sensitive! " << endl;
			cin >> repeat;
		}
	} while (repeat._Equal("Y") || repeat._Equal("y"));
}