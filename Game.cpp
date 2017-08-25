#include <fstream>
#include <iomanip>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <Windows.h>
#include <conio.h>
#include <string>

using namespace std;

int duration();
string name(int x);
string hero_type(int x, string name);
void response_1(int x, string race);
string class_type(int x, string race);
void response_2(int x, string name);
int str_roll(int x, string race, string class_type);

int duration()
{
	int choice;
	cout << "How fast do you want the game text to scroll?" << endl;
	Sleep(1000);
	cout << "Fast (1), Medium (2), or Slow (3)?" << endl;
	cin >> choice;
	system("cls");
	if (choice == 1) { return 300; }
	else if (choice == 2) { return 1000; }
	else { return 3000; }
}
string name(int x)
{
	string name;

	cout << "In the murky darkness, you hear a voice beckoning." << endl;
	Sleep(x);
	cout << "\"The seventh has arrived. At long last." << endl;
	Sleep(x);
	cout << "Tell me, Justicar, what is your name.\"" << endl;
	Sleep(x);
	cout << endl;
	cout << "Enter your name: ";
	cin >> name;
	cout << endl;
	Sleep(x);

	return name;
}
string hero_type(int x, string name)
{
	string race; 

	cout << "\"" << name << "? Just as foretold." << endl;
	Sleep(x);
	cout << "My apologies, but my memory of the mortal races is fading." << endl;
	Sleep(x);
	cout << "Which race do you belong to?\"" << endl;
	Sleep(x);
	cout << "Each race has their perks and has different stat generation perimeters." << endl;
	Sleep(x);
	cout << "Each race even has their own unique classes." << endl;
	Sleep(x);
	system("pause");
	cout << endl;
	cout << "-> Human (+2 to all stats, +20 hp)" << endl;
	cout << "-> Elf (+4 agi, +25% multiplier for bow weapons)" << endl;
	cout << "-> Jetsam (+2 wis, +2 agi, +15% evasion chance)" << endl;
	cout << "-> Inu (+4 str, +25% multiplier for blunt weapons)" << endl;
	cout << endl;
	cout << "Choose your race: ";

	while (race != "human" || race != "Human"|| race != "elf" || race != "Elf"|| race != "jetsam" || race != "Jetsam"|| race != "inu" || race != "Inu")
	{
		cin >> race;
		cout << endl;
		if (race == "human" || race == "Human") { return "human"; }
		else if (race == "elf" || race == "Elf") { return "elf"; }
		else if (race == "jetsam" || race == "Jetsam") { return "jetsam"; }
		else if (race == "inu" || race == "Inu") { return "inu"; }
		else { cout << "Surely you must not be an alien?" << endl; }
	}
}
void response_1(int x, string race)
{
	if (race == "human")
	{
		cout << "\"Ah yes, the ones of technology." << endl;
		Sleep(x);
		cout << "What a determined and hardened race." << endl;
		Sleep(x);
	}
	else if (race == "elf")
	{
		cout << "\"Oh? I have not seen your kind in many generations." << endl;
		Sleep(x);
		cout << "Your mastery with the bow would prove useful in this journey." << endl;
		Sleep(x);
	}
	else if (race == "jetsam")
	{
		cout << "\"Interesting. One of the sea folk on land?" << endl;
		Sleep(x);
		cout << "It appears that much has changed during my slumber." << endl;
		Sleep(x);
	}
	else
	{
		cout << "\"Oh yes, the faithful Inu." << endl;
		Sleep(x);
		cout << "You would make an excellent keeper of justice." << endl;
		Sleep(x);
	}
	cout << endl;
}
string class_type(int x, string race)
{
	string class_type;

	if (race == "human")
	{
		cout << "The markings on your clothings.";
		Sleep(x);
		cout << " I assume that you are a " << endl;
		Sleep(x);
		system("pause");
		cout << endl;
		cout << "-> Knight (+2 str, +25% multiplier for blades)" << endl;
		cout << "-> Smith (+2 str, +50% chance to loot items)" << endl;
		cout << "-> Techie (+3 wis, +25% item/spell damage)" << endl;
		cout << endl;
		cout << "Choose your class: ";

		while (class_type != "knight" || class_type != "Knight" || class_type != "smith" || class_type != "Smith" || class_type != "techie" || class_type != "Techie")
		{
			cin >> class_type;
			cout << endl;

			if (class_type == "knight" || class_type == "Knight")
			{
				cout << "Ah yes, the crest of the Cobalt Knights. I now remember.\"" << endl;
				return "knight";
			}
			else if (class_type == "smith" || class_type == "Smith")
			{
				cout << "Ah yes, the work clothes of a master smith. A respectable vocation.\"" << endl;
				return "smith";
			}
			else if (class_type == "techie" || class_type == "Techie")
			{
				cout << "Ah yes, the gadgets of the techie. It seemed like yesterday when your kind was relying on rocks as weapons.\"" << endl;
				return "techie";
			}
			else { cout << "Oh, are you sure about that?" << endl; }
		}

	}
	else if (race == "elf")
	{
		cout << "The markings on your clothings.";
		Sleep(x);
		cout << " I assume that you are a " << endl;
		Sleep(x);
		system("pause");
		cout << endl;
		cout << "-> Windspeaker (+2 agi, +25% multiplier for bows)" << endl;
		cout << "-> Herbalist (+2 wis, potions are 40% more effective)" << endl;
		cout << "-> Arcanist (+4 wis, +10% spell damage)" << endl;
		cout << endl;
		cout << "Choose your class: ";

		while (class_type != "windspeaker" || class_type != "Windspeaker" || class_type != "herbalist" || class_type != "Herbalist" || class_type != "arcanist" || class_type != "Arcanist")
		{
			cin >> class_type;
			cout << endl;

			if (class_type == "windspeaker" || class_type == "Windspeaker")
			{
				cout << "Ah yes, the sash of the Windspeakers. Mother Aether watches over your kind.\"" << endl;
				return "windspeaker";
			}
			else if (class_type == "herbalist" || class_type == "Herbalist")
			{
				cout << "Ah yes, the wreathes of a herbalist. May the forest guide you.\"" << endl;
				return "herbalist";
			}
			else if (class_type == "arcanist" || class_type == "Arcanist")
			{
				cout << "Ah yes, the sigil of the Sun's Order. Your magics are a sight to behold, even for a being like me.\"" << endl;
				return "arcanist";
			}
			else { cout << "Oh, are you sure about that?" << endl; }
		}
	}
	else if (race == "jetsam")
	{
		cout << "The markings on your clothings.";
		Sleep(x);
		cout << " I assume that you are a " << endl;
		Sleep(x);
		system("pause");
		cout << endl;
		cout << "-> Pirate (+2 str, +50% gold when looting)" << endl;
		cout << "-> Assassin (+3 str, +2 agi, 1% chance to instantly kill)" << endl;
		cout << "-> Waterwalker (+2 wis, +30% spell damage)" << endl;
		cout << endl;
		cout << "Choose your class: ";

		while (class_type != "pirate" || class_type != "Pirate" || class_type != "assassin" || class_type != "Assassin" || class_type != "waterwalker" || class_type != "Waterwalker")
		{
			cin >> class_type;
			cout << endl;

			if (class_type == "pirate" || class_type == "Pirate")
			{
				cout << "Ah yes, the markings of the Bloodied Bay. What a fearful band.\"" << endl;
				return "pirate";
			}
			else if (class_type == "assassin" || class_type == "Assassin")
			{
				cout << "Ah yes, the sharpened blades of an assassin. One with the shadows.\"" << endl;
				return "assassin";
			}
			else if (class_type == "waterwalker" || class_type == "Waterwalker")
			{
				cout << "Ah yes, the mask of a waterwalker. The tides serve your very command.\"" << endl;
				return "waterwalker";
			}
			else { cout << "Oh, are you sure about that?" << endl; }
		}
	}
	else
	{
		cout << "The markings on your clothings.";
		Sleep(x);
		cout << " I assume that you are a " << endl;
		Sleep(x);
		system("pause");
		cout << endl;
		cout << "-> GreyGuard (+3 str, +30 hp)" << endl;
		cout << "-> Tracker (+2 str, +2 agi, +10% evasion)" << endl;
		cout << "-> Wildling (+3 agi, special scaling class weapon: STICK!!)" << endl;
		cout << endl;
		cout << "Choose your class: ";

		while (class_type != "greyguard" || class_type != "GreyGuard" || class_type != "tracker" || class_type != "Tracker" || class_type != "wildling" || class_type != "Wildling")
		{
			cin >> class_type;
			cout << endl;

			if (class_type == "greyguard" || class_type == "GreyGuard")
			{
				cout << "Ah yes, the armour of the GreyGuards. A force to be reckoned with.\"" << endl;
				return "greyguard";
			}
			else if (class_type == "Tracker" || class_type == "Tracker")
			{
				cout << "Ah yes, the cloak of a tracker. Your skills will lead you throughout this journey.\"" << endl;
				return "tracker";
			}
			else if (class_type == "Wildling" || class_type == "Wildling")
			{
				cout << "Ah yes, the war paint of the Wildlings. How ferocious.\"" << endl;
				return "wildling";
			}
			else { cout << "Oh, are you sure about that?" << endl; }
		}
	}
}
void response_2(int x, string name)
{
	cout << "I see that you are more than capable to take up this quest." << endl;
	Sleep(x);
	cout << "With your skills, you should be able to face any adversity that comes your way." << endl;
	Sleep(x);
	cout << "..." << endl;
	Sleep(x);
	cout << "..." << endl;
	Sleep(x);
	cout << "I cannot speak of what is to come," << endl;
	Sleep(x);
	cout << "but you will find out in due time." << endl;
	Sleep(x);
	cout << "The Fates will guide you towards your path." << endl;
	Sleep(x);
	cout << "May we meet again, Justicar " << name << "." << endl;
	Sleep(x);
}
int str_roll(int x, string race, string class_type)
{
	int str;
	if (race == "human")
	{
		if(class_type == "knight")
		{ }
	}
}


int main()
{
	int time;
	string hero_name, race, hero_class;

	time = duration(); //picks text scroll speed to be used for the rest of the game
	cout << "~Act 0: The Beginning~" << endl;
	cout << endl;
	hero_name = name(time); //player's name
	race = hero_type(time, hero_name); //player's race
	response_1(time, race);
	hero_class = class_type(time, race); //player's class
	response_2(time, hero_name);

	system("pause");
	return 0;
}