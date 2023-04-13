// Amber Arnold 3/12/2023

#include <iostream>
#include<string>
#include<vector>
#include "directions.h"

char playerText; // pick a direction
int location = 0; // reset if bugged
string hunt;

int main()
{
    intro();

    cout << "Michael walks through the door with the map in hand, but it makes no sense.\n";
    cout << "It overlaps itself many times and sometimes it looks like it backtracking the";
    cout << " same way you just came from changes the layout.\n Confused, Michael finds himself";
    cout << " in a three way path, which direction should he go in?\n";
    cout << "pick from r l s right, left straight\n";

    cin >> playerText;

    if (playerText == 'e') 
    {
        cout << "Do you want to hunt for easter eggs? yes or no ";
        cin >> hunt;
        if (hunt == "yes")
        {
            location = start();
        }
    }

    while (location != 6) 
    {
        if (playerText == 'r')
        {
            right(location);
        }
        if (playerText == 'l')
        {
            left(location);
        }
        if (playerText == 's')
        {
            straight(location);
        }

        cin >> playerText;

        location++;
    }
    

    end();
    
    return 0;
}




