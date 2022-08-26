#include <iostream>
#include <string>

using namespace std;

class RNDMIZER_Classes_Categories
{
	//Functions
public:
	void getClass(string* pickedLoadout);
	void getWeaponCategory(string* pickedLoadout);
	void getSecondaryWeapon(string* pickedLoadout, string* rerollItem);
	void getGrenade(string* pickedLoadout);

	void getAssaultWeapon(string* pickedLoadout, string* rerollItem);
	void getAssaultGadgets(string* pickedLoadout, string* rerollItem);
	void getAssaultFieldUpgrade(string* pickedLoadout);

	void getEngineerWeapon(string* pickedLoadout, string* rerollItem);
	void getEngineerGadgets(string* pickedLoadout, string* rerollItem);
	void getEngineerFieldUpgrade(string* pickedLoadout);

	void getSupportWeapon(string* pickedLoadout, string* rerollItem);
	void getSupportGadgets(string* pickedLoadout, string* rerollItem);
	void getSupportFieldUpgrade(string* pickedLoadout);

	void getReconWeapon(string* pickedLoadout, string* rerollItem);
	void getReconGadgets(string* pickedLoadout, string* rerollItem);
	void getReconFieldUpgrade(string* pickedLoadout);

	int getRandomNumber(int arraySize);
	string getPickedLoadout();
	void pickedLoadoutSpacer();
};