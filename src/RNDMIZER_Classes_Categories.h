#include <iostream>
#include <string>

using namespace std;

class RNDMIZER_Classes_Categories
{
	//Functions
public:
	void getClass();
	void getWeaponCategory();
	void getSecondaryWeapon();
	void getGrenade();

	void getAssaultWeapon();
	void getAssaultGadgets();
	void getAssaultFieldUpgrade();

	void getEngineerWeapon();
	void getEngineerGadgets();
	void getEngineerFieldUpgrade();

	void getSupportWeapon();
	void getSupportGadgets();
	void getSupportFieldUpgrade();

	void getReconWeapon();
	void getReconGadgets();
	void getReconFieldUpgrade();

	int getRandomNumber(int arraySize);
	void printPickedLoadout();
	void pickedLoadoutSpacer();
	string getPickedLoadout();
	string getRerolledItem();
};