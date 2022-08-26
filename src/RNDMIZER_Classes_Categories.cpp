#include <iostream>
#include "RNDMIZER_Classes_Categories.h"

using namespace std;

string* pickedLoadout, rerollItem;
const string classes[4] = { "Medic", "Engineer", "Support", "Recon" };

//Assault Specific
const string assaultWeaponCategories[4] = { "Assault Rifle", "Carbine", "DMR", "Shotgun" };
const string assaultRifles[16] = { "AK-12", "SCAR-H", "M416", "SAR-21", "AEK-971", "FAMAS", "AUG A3", "M16A4", "CZ-805", "QBZ-95-1", "ACE 23", "F2000", "L85A2", "AR160", "BULLDOG", "AN-94" };
const string assaultGadget[15] = { "No Gadget", "M320 HE", "M320 SMK", "M320 DART", "M320 FB", "M320 LVG", "M320 GL", "M26 MASS", "M26 DART", "M26 SLUG", "M26 FRAG", "FIRST AID PACK", "DEFIBRILLATOR", "MEDIC BAG", "DS-3 DECOY" };
const string assaultFieldUpgrades[5] = { "DEFENSIVE", "OFFENSIVE", "SHADOW", "COMBAT MEDIC", "GRENADIER" };
const string assaultMutator[5] = { "NO TEAMMATE HEAL", "NO HEALING AT ALL", "NO REVIVING RANDOMS", "DONT REVIVE AT ALL", "NOOB TUBE TIME" };

//Engineer Specific
const string engineerWeaponCategories[4] = { "PDW", "Carbine", "DMR", "Shotgun" };
const string pdw[14] = { "MX4", "PP-2000", "UMP-45", "CBJ-MS", "PDW-R", "CZ-3A1", "JS2", "P90", "UMP-9", "AS VAL", "MP7", "SR-2", "MPX", "GROZA" };
const string engineerGadget[14] = { "No Gadget", "MBT LAW", "RPG-7V2", "MK153 SMAW", "FGM-148 JAVELIN", "FGM-172 SRAW", "FIM-92 STINGER", "SA-18 IGLA", "REPAIR TOOL", "M15 AT MINE", "M2 SLAM", "EOD BOT", "AA MINE", "DS-3 DECOY" };
const string engineerFieldUpgrades[5] = { "DEFENSIVE", "OFFENSIVE", "SHADOW", "ANTI TANK", "MECHANIC" };
const string engineerMutator[5] = { "AA MAIN", "AT MAIN", "EOD BOT MAIN", "NO REPAIRS", "ROCKETLAUNCHER MAIN" };

//Support Specific
const string supportWeaponCategories[4] = { "LMG", "Carbine", "DMR", "Shotgun" };
const string lmg[13] = { "U-100 MK5", "TYPE 88 LMG", "LSAT", "PKP PECHENEG", "QBB-95-1", "M240B", "MG4", "M249", "RPK-12", "M60-E4", "RPK", "AWS", "L86A2" };
const string supportGadget[13] = { "No Gadget", "XM25 AIRBURST", "XM25 SMOKE", "XM25 DART", "AMMO PACK", "M18 CLAYMORE", "AMMO BOX", "M224 MORTAR", "MP-APS", "C4 EXPLOSIVE", "UCAV", "BALLISTIC SHIELD", "DS-3 DECOY" };
const string supportFieldUpgrades[5] = { "DEFENSIVE", "OFFENSIVE", "SHADOW", "INDIRECT FIRE", "PERIMETER DEFENSE" };
const string supportMutator[6] = { "NO AMMO FOR TEAMMATES", "NO AMMO AT ALL", "MORTARD", "UCAV MAIN", "DEMOLITION EYPERT", "BIPOD LMG FUN" };

//Recon Specific
const string reconWeaponCategories[4] = { "Sniper Rifle", "Carbine", "DMR", "Shotgun" };
const string sniperRifle[13] = { "CS-LR4", "M40A5", "SCOUT ELITE", "SV-98", "JNG-90", "338-RECON", "M98B", "SRR-61", "FY-JS", "GOL MAGNUM", "L115", "SR338", "CS5" };
const string reconGadget[11] = { "No Gadget", "PLD", "C4 EXPLOSIVE", "MOTION SENSOR", "RADIO BEACON", "T-UGS", "SOFLAM", "MAV", "M18 CLAYMORE", "SUAV", "DS-3 DECOY" };
const string reconFieldUpgrades[5] = { "DEFENSIVE", "OFFENSIVE", "SHADOW", "SPEC OPS", "SNIPER" };
const string reconMutator[4] = { "NO SPAWN BEACON USAGE", "FORCE RECON", "MARK VEHICLES", "STEALTH OPS" };

//Other Weapons & Throwables
const string secondaryWeapons[17] = { "P226", "M9", "QSZ-92", "MP443", "SHORTY 12G", "G18", "FN57", "M1911", "93R", "CZ-75", ".44 MAgnum", "COMPACT 45", "M412 REX", "SW40", "UNICA 6", "DEAGLE 44", "MARE´S LEG" };
const string carbine[13] = { "AK 5C", "ACWR", "SG553", "AKU-12", "A-91", "ACE 52 CQB", "G36C", "M4", "ACE 21 CQB", "TYPE-95B-1", "MTAR-21", "PHANTOM", "GROZA-1" };
const string dmr[8] = { "RFB", "MK11 MOD 0", "SKS", "SVD-12", "QBU-88", "M39 EMR", "ACE 23 SV", "SCAR-H SV" };
const string shotgun[9] = { "QBS-09", "870 MCS", "M1014", "HAWK 12G", "SAIGA 12K", "SPAS-12", "UTS 15", " SVB-12", "DAO-12" };
const string grenade[7] = { "M67 FRAG", "V40 MINI", "RGO IMPACT", "M34 INCINDIARY", "M18 SMOKE", "M84 FLASHBANG", "HAND FLARE" };

//Mutators
const string attachementMutator[7] = { "NO ATTACHEMENTS", "SILENCER ONLY", "ONLY IRON SIGHT", "ONLY RED DOT", "SCOPE WITH HIGHEST MAGNIFICATION", "NO FOREGRIP", "NO SCOPE" };
const string movementMutator[8] = { "NO RUNNING", "NO CROUCHING", "NO JUMPING", "NOTHING",  "NO VAULTING", "ONLY CRAWLING", "ONLY CROUCHING", "NOTHING" };



void RNDMIZER_Classes_Categories::getClass(string* pickedLoadout)
{
	int switchChoice = getRandomNumber(sizeof(classes[4]));
	switch(switchChoice) 
	{
	case 0: pickedLoadout->append(classes[switchChoice]); break;
	case 1: pickedLoadout->append(classes[switchChoice]); break;
	case 2: pickedLoadout->append(classes[switchChoice]); break;
	case 3: pickedLoadout->append(classes[switchChoice]); break;
	default: cout << "Error during Class Selection" << endl; break;
	}
}

void RNDMIZER_Classes_Categories::getWeaponCategory(string* pickedLoadout)
{
	if(pickedLoadout->_Equal("Assault "))
	{
		int switchChoice = getRandomNumber(sizeof(assaultWeaponCategories[4]));
		switch (switchChoice) //Assault Main Weapon Selection
		{
		case 0: pickedLoadout->append(assaultWeaponCategories[switchChoice]); break;
		case 1: pickedLoadout->append(assaultWeaponCategories[switchChoice]); break;
		case 2: pickedLoadout->append(assaultWeaponCategories[switchChoice]); break;
		case 3: pickedLoadout->append(assaultWeaponCategories[switchChoice]); break;
		default: cout << "Error during Assault Main Weapon Selection" << endl; break;
		}
	}
	else if (pickedLoadout->_Equal("Engineer "))
	{
		int switchChoice = getRandomNumber(sizeof(engineerWeaponCategories[4]));
		switch (switchChoice) //Engineer Main Weapon Selection
		{
		case 0: pickedLoadout->append(engineerWeaponCategories[switchChoice]); break;
		case 1: pickedLoadout->append(engineerWeaponCategories[switchChoice]); break;
		case 2: pickedLoadout->append(engineerWeaponCategories[switchChoice]); break;
		case 3: pickedLoadout->append(engineerWeaponCategories[switchChoice]); break;
		default: cout << "Error during Engineer Main Weapon Selection" << endl; break;
		}
	}
	else if (pickedLoadout->_Equal("Support "))
	{
		int switchChoice = getRandomNumber(sizeof(supportWeaponCategories[4]));
		switch (switchChoice) //Support Main Weapon Selection
		{
		case 0: pickedLoadout->append(supportWeaponCategories[switchChoice]); break;
		case 1: pickedLoadout->append(supportWeaponCategories[switchChoice]); break;
		case 2: pickedLoadout->append(supportWeaponCategories[switchChoice]); break;
		case 3: pickedLoadout->append(supportWeaponCategories[switchChoice]); break;
		default: cout << "Error during Support Main Weapon Selection" << endl; break;
		}
	}
	else if (pickedLoadout->_Equal("Recon "))
	{
		int switchChoice = getRandomNumber(sizeof(reconWeaponCategories[4]));
		switch (switchChoice) //Recon Main Weapon Selection
		{
		case 0: pickedLoadout->append(reconWeaponCategories[switchChoice]); break;
		case 1: pickedLoadout->append(reconWeaponCategories[switchChoice]); break;
		case 2: pickedLoadout->append(reconWeaponCategories[switchChoice]); break;
		case 3: pickedLoadout->append(reconWeaponCategories[switchChoice]); break;
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
	cout << pickedLoadout;
}

void RNDMIZER_Classes_Categories::pickedLoadoutSpacer()
{

}