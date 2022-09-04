#include "RNDMIZER_Classes_Categories.h"
#include <stdlib.h>

void pickLoadout(RNDMIZER_Classes_Categories rndm);
void pickLoadoutWithMutators(RNDMIZER_Classes_Categories rndm);

int main()
{
	string result;
	string pickedLoadoutFinal;
	RNDMIZER_Classes_Categories rndm;
	
	
	pickLoadout(rndm);
	

	/*
	pickedLoadoutFinal = rndm.getPickedLoadout();
	cout << "Dein Loadout: " << pickedLoadoutFinal << endl;
	*/
	return 0;
}

void pickLoadout(RNDMIZER_Classes_Categories rndm)
{
	string repeat;
	do 
	{
		int switchItem = 0;
		rndm.getClass();
		rndm.getMainWeapon();
		rndm.getSecondaryWeapon();
		rndm.getGrenade();
		rndm.getGadgets();

		while (switchItem != 6)
		{
			system("cls");
			cout << "BF4 Loadout RNDMIZER by Prebzade" << endl;
			cout << " " << endl;

			rndm.printPickedLoadout();
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
				case 1: rndm.rerollItem(switchItem); rndm.printPickedLoadout(); break;
				case 2: rndm.rerollItem(switchItem); rndm.printPickedLoadout(); break;
				case 3: rndm.rerollItem(switchItem); rndm.printPickedLoadout(); break;
				case 4: rndm.rerollItem(switchItem); rndm.printPickedLoadout(); break;
				case 5: rndm.rerollItem(switchItem); rndm.printPickedLoadout(); break;
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