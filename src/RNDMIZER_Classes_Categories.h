#include <iostream>
#include <string>

using namespace std;

class RNDMIZER_Classes_Categories
{
	//Functions
public:
	string pickedClass, pickedWeaponCategory, pickedWeapon, pickedGadget, pickedLoadout, clearPickedLoadout;
	string pickedFieldUpgrades, pickedSoldierMutator, pickedattachmentMutator, pickedmovementMutator;
	string rerollItem;

	void getClass();
	void getWeaponCategory();
	void getMainWeapon();
	void getSecondaryWeapon();
	void getGadgets();
	void getGrenade();
	void getFieldUpgrade();

	int getRandomNumber(int arraySize);
	void printPickedLoadout();
	void pickedLoadoutSpacer();
	string getPickedLoadout();
	string getRerolledItem();
};