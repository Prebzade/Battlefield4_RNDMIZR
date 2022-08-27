#include "RNDMIZER_Classes_Categories.h"

int main()
{
	string result;
	string pickedLoadoutFinal;
	RNDMIZER_Classes_Categories rndm;

	cout << "BF4 Loadout RNDMIZER by Prebzade" << endl;
	
	rndm.getClass();
	rndm.getMainWeapon();
	rndm.getSecondaryWeapon();
	rndm.getGrenade();
	rndm.getGadgets();

	rndm.printPickedLoadout();

	/*
	pickedLoadoutFinal = rndm.getPickedLoadout();
	cout << "Dein Loadout: " << pickedLoadoutFinal << endl;
	*/
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