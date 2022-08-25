#include <iostream>
using namespace std;

int RNDMIZER_Classes_Categories()
{
	string classes[] = { "Medic", "Engineer", "Support", "Recon" };

	//Assault Specific
	string assaultWeaponCategories[4] = { "Assault Rifle", "Carbine", "DMR", "Shotgun" };
	string assaultRifles[16] = { "AK-12", "SCAR-H", "M416", "SAR-21", "AEK-971", "FAMAS", "AUG A3", "M16A4", "CZ-805", "QBZ-95-1", "ACE 23", "F2000", "L85A2", "AR160", "BULLDOG", "AN-94" };
	string assaultGadget[15] = { "No Gadget", "M320 HE", "M320 SMK", "M320 DART", "M320 FB", "M320 LVG", "M320 GL", "M26 MASS", "M26 DART", "M26 SLUG", "M26 FRAG", "FIRST AID PACK", "DEFIBRILLATOR", "MEDIC BAG", "DS-3 DECOY" };
	string assaultFieldUpgrades[5] = { "DEFENSIVE", "OFFENSIVE", "SHADOW", "COMBAT MEDIC", "GRENADIER" };
	string assaultMutator[5] = { "NO TEAMMATE HEAL", "NO HEALING AT ALL", "NO REVIVING RANDOMS", "DONT REVIVE AT ALL", "NOOB TUBE TIME"};

	//Engineer Specific
	string engineerWeaponCategories[4] = { "PDW", "Carbine", "DMR", "Shotgun" };
	string pdw[14] = { "MX4", "PP-2000", "UMP-45", "CBJ-MS", "PDW-R", "CZ-3A1", "JS2", "P90", "UMP-9", "AS VAL", "MP7", "SR-2", "MPX", "GROZA" };
	string engineerGadget[14] = { "No Gadget", "MBT LAW", "RPG-7V2", "MK153 SMAW", "FGM-148 JAVELIN", "FGM-172 SRAW", "FIM-92 STINGER", "SA-18 IGLA", "REPAIR TOOL", "M15 AT MINE", "M2 SLAM", "EOD BOT", "AA MINE", "DS-3 DECOY" };
	string engineerFieldUpgrades[5] = { "DEFENSIVE", "OFFENSIVE", "SHADOW", "ANTI TANK", "MECHANIC" };
	string engineerMutator[5] = {"AA MAIN", "AT MAIN", "EOD BOT MAIN", "NO REPAIRS", "ROCKETLAUNCHER MAIN"};

	//Support Specific
	string supportWeaponCategories[4] = { "LMG", "Carbine", "DMR", "Shotgun" };
	string lmg[13] = { "U-100 MK5", "TYPE 88 LMG", "LSAT", "PKP PECHENEG", "QBB-95-1", "M240B", "MG4", "M249", "RPK-12", "M60-E4", "RPK", "AWS", "L86A2" };
	string supportGadget[13] = { "No Gadget", "XM25 AIRBURST", "XM25 SMOKE", "XM25 DART", "AMMO PACK", "M18 CLAYMORE", "AMMO BOX", "M224 MORTAR", "MP-APS", "C4 EXPLOSIVE", "UCAV", "BALLISTIC SHIELD", "DS-3 DECOY" };
	string supportFieldUpgrades[5] = { "DEFENSIVE", "OFFENSIVE", "SHADOW", "INDIRECT FIRE", "PERIMETER DEFENSE" };
	string supportMutator[6] = { "NO AMMO FOR TEAMMATES", "NO AMMO AT ALL", "MORTARD", "UCAV MAIN", "DEMOLITION EYPERT", "BIPOD LMG FUN" };

	//Recon Specific
	string reconWeaponCategories[4] = { "Sniper Rifle", "Carbine", "DMR", "Shotgun" };
	string sniperRifle[13] = { "CS-LR4", "M40A5", "SCOUT ELITE", "SV-98", "JNG-90", "338-RECON", "M98B", "SRR-61", "FY-JS", "GOL MAGNUM", "L115", "SR338", "CS5" };
	string reconGadget[11] = { "No Gadget", "PLD", "C4 EXPLOSIVE", "MOTION SENSOR", "RADIO BEACON", "T-UGS", "SOFLAM", "MAV", "M18 CLAYMORE", "SUAV", "DS-3 DECOY" };
	string reconFieldUpgrades[5] = { "DEFENSIVE", "OFFENSIVE", "SHADOW", "SPEC OPS", "SNIPER" };
	string reconMutator[4] = { "NO SPAWN BEACON USAGE", "FORCE RECON", "MARK VEHICLES", "STEALTH OPS" };

	//Other Weapons & Throwables
	string secondaryWeapons[17] = { "P226", "M9", "QSZ-92", "MP443", "SHORTY 12G", "G18", "FN57", "M1911", "93R", "CZ-75", ".44 MAgnum", "COMPACT 45", "M412 REX", "SW40", "UNICA 6", "DEAGLE 44", "MARE´S LEG" };
	string carbine[13] = { "AK 5C", "ACWR", "SG553", "AKU-12", "A-91", "ACE 52 CQB", "G36C", "M4", "ACE 21 CQB", "TYPE-95B-1", "MTAR-21", "PHANTOM", "GROZA-1" };
	string dmr[8] = { "RFB", "MK11 MOD 0", "SKS", "SVD-12", "QBU-88", "M39 EMR", "ACE 23 SV", "SCAR-H SV" };
	string shotgun[9] = { "QBS-09", "870 MCS", "M1014", "HAWK 12G", "SAIGA 12K", "SPAS-12", "UTS 15", " SVB-12", "DAO-12" };
	string grenade[7] = { "M67 FRAG", "V40 MINI", "RGO IMPACT", "M34 INCINDIARY", "M18 SMOKE", "M84 FLASHBANG", "HAND FLARE" };

	//Mutators
	string attachementMutator[] = { "NO ATTACHEMENTS", "SILENCER ONLY", "ONLY IRON SIGHT", "ONLY RED DOT", "SCOPE WITH HIGHEST MAGNIFICATION", "NO FOREGRIP", "NO SCOPE"};
	string movementMutator[] = { "NO RUNNING", "NO CROUCHING", "NO JUMPING", "NOTHING",  "NO VAULTING", "ONLY CRAWLING", "ONLY CROUCHING", "NOTHING"};
}