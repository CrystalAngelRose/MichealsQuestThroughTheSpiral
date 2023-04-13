/*
* Amber Arnold
* Additional scource file for
* Micheal's Quest through the Spiral
*/
#include <iostream>
#include<string>
#include<vector>
#include "directions.h"

using namespace std;

int start()
{
    int num;
    cout << "\nWhere do you want to start in the story?\n";
    cin >> num;
    return num;
}
void end()
{
    cout << "When Micheal reaches the end of the hall.\n He realizes that he has reached the end ";
    cout << "of the map, but the hall shows a dead end.\nConfused he walks up to the dead end and";
    cout << "touched it.\n\nHis hand\n\nwent though\n\nNot expecting it\n\nMicheal fell though the wall";
    cout << "\n\nHe fell\n\nand fell\n\nuntil he fell out of the door, no longer the same Micheal.";
}

void left(int num)
{
    if (num == 0)
    {
        cout << "\nMicheal goes left and finds an odd painting with spirals in it.\n";
        cout << "Ignoreing it, Micheal contunied on.\n";
        cout << "\npick from r l s right, left straight\n";

    }
    if (num == 1)
    {
        cout << "\nMicheal goes left and finds an epmty elevator door.\nHe continues on past it.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 2)
    {
        cout << "\nMicheal goes left and finds a patch of carpet missing?\nThe area in the hole";
        cout << " seems like if he fall it he wouldn't be getting back out.\nMicheal carefully";
        cout << " walks past.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 3)
    {
        cout << "\nMicheal goes left and finds... The exact hall he was just in.\n";
        cout << "Micheal checks his map and chooses a different direction.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 4)
    {
        cout << "\nMicheal goes left and finds a lot of clocks on the walls, none of them are";
        cout << " saying the same time.\n";
        cout << "Ignoreing it, Micheal contunied on.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 5)
    {
        cout << "\nMicheal goes left and finds a room full of cats with the spiral pattern on them.\n";
        cout << "Knowing better then to bother them, he moves on.\n";
        cout << "\npick from r l s right, left straight\n";
    }
}
void right(int num)
{
    if (num == 0)
    {
        cout << "\nMicheal goes right and finds an odd plant that leaves are spirals in on itself.\n";
        cout << "Ignoreing it, Micheal contunied on.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 1)
    {
        cout << "\nMicheal goes right and finds a door that has fog coming out of the cracks.\n";
        cout << "He walks past it, not even bothering to open it.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 2)
    {
        cout << "\nMicheal goes right and finds a room with burnt in a spiral pattern.\n";
        cout << "Ignoreing it, Micheal contunied on.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 3)
    {
        cout << "\nMicheal goes right and finds an old coffin that is locked up.\n";
        cout << "Micheal chooses to ignore it and continues on.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 4)
    {
        cout << "\nMicheal goes right and... What happened to the lights? Micheal continues on with";
        cout << " a hand against the wall.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 5)
    {
        cout << "\nMicheal goes right and finds a boat? 'The Borealis' What is this doing here?\n";
        cout << "Wrong universe. Micheal leaves, just barely dodging a weird crab creature that ";
        cout << "attacked him.\n";
        cout << "\npick from r l s right, left straight\n";
    }
}
void straight(int num)
{
    if (num == 0)
    {
        cout << "\nMicheal goes straight and finds an odd table, he procedes to ignore it.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 1)
    {
        cout << "\nMicheal goes straight and finds... a weird funhouse mirror?\n";
        cout << "Huh, when did Nikola get here?.\n";
        cout << "Ignoreing it, Micheal contunied on.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 2)
    {
        cout << "\nMicheal goes straight and notices that the walls have changed to a yellow.\n";
        cout << "It kinda looks like an old hotel wallpaper.\n";
        cout << "\npick from r l s right, left straight\n";
        cout << "pick from r l s right, left straight\n";
    }
    if (num == 3)
    {
        cout << "\nMicheal goes straight and when he looks up he sees stairs that are upside down";
        cout << "on the celing\n";
        cout << "Ignoreing it, Micheal contunied on.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 4)
    {
        cout << "\nMicheal goes straight and finds a room full of caset tapes, feeling like he ";
        cout << "knows this place.\nHe ignores it and continues on.\n";
        cout << "\npick from r l s right, left straight\n";
    }
    if (num == 5)
    {
        cout << "\nMicheal goes straight and finds a smaller hall on one of the walls.\n";
        cout << "When he looked at it close enough he realizes that he can see a mini version of ";
        cout << "himself also looking at a small hole.\nDeciding not to deal with that, ";
        cout << "he continues on.\n";
        cout << "\npick from r l s right, left straight\n";
    }
}



void intro()
{
    cout << "Welcome to Michael's quest through the Spiral\n";
    cout << "In this game you will be directing Michael through the spiral.\n";
    cout << "To do that you will be saying left, right, or straight to control";
    cout << "which direction Michael goes in.\n";
    cout << "At times it may seem like you are going in circles, that is because you are.\n";
    cout << "There is no layout for the building that would make sense, so enjoy the journy. \n\n";

}