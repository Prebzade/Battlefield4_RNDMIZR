#include <iostream>
#include "RNDMIZER_Classes_Categories.h"

using namespace std;

int main()
{
	string result;

	cout << "BF4 Loadout RNDMIZER by Prebzade" << endl;

	RNDMIZER_Classes_Categories getClass( classes[4], pickedLoadout);
	RNDMIZER_Classes_Categories getWeaponCategory(RNDMIZER_Classes_Categories assaultWeaponCategories[4], RNDMIZER_Classes_Categories engineerWeaponCategories[4], const string supportWeaponCategories[4], RNDMIZER_Classes_Categories reconWeaponCategories[4], RNDMIZER_Classes_Categories pickedLoadout);

	
	RNDMIZER_Classes_Categories getPickedLoadout();

	return 0;
}

/*
String Arrays:	Klassen, Gadget, Weapon, Secondary, Grenade
				Camo Array? Knife Array? Perk Array?

Nicht jedes Gadget ist miteinander kompatibel
Arrays for Normal Equipment only and all Equipment(Unlockable+DLC) (USer abfrage)
Wenn Equipment/Weapon X nicht verfügbar, reroll (User abfrage)
Nach ablauf, nochmal ausführen mit abfrage
Wahl ob klasse ausgewählt wird, dannach wahl für Weaponcategory
clear screen nach jedem neuen programm start
Mutator (Movement, Attachments, no grenades, no Equipment/Gadget)

Attachment Mutators: No Attachments, Silencer only, No Scope, Only RedDot, Only Highest Scope available, No Grip
Movement Mutators: No running, No crouching, no Jumping, no vaulting, only Bunnyhopping, only crawling, only crouching, Normal and just play
Silencer only -> Every Weapon must have a silencer
Other Mutators: Take Enemy Loadout of your kill, Knife Only, Pistol Only, Main Weapon Only, No Grenades, Grenades only,

Class Specific Mutators:    Medic -> No Healing, No Revive, M320HE Main,
							Engineer -> AA main, Anti Tank Main (RPG), No Repairing, Kill with torch, Kill with EOD-Bot
							Support -> No Ammo pouches, No Ammo Boxes, Mortar only, Anti Tank Main (C4), Ballistic-Shield only, UCAV Main
							Recon -> No Respawn Beacon, Only Headshots, Snipers with Reddots, No Spotting

Idee: Aus mehreren String Arrays einen String produzieren mit dem Loadout.
*/