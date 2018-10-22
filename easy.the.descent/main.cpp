#include <sstream>
#include <iostream>
#include <cmath>
#include <vector>
//#include "batman.bomb.h"

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/


int main()
{
    // game loop
    cerr << "MOUNTAINS STATS:" << endl;
    while (1) {
        int highestTower = 0;
        int pos = 0;
        for (int i = 0; i < 8; i++) {
            int mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
            cerr << "MOUNT #" << i << ": " << mountainH << endl;
            if (highestTower < mountainH)
            {
                highestTower = mountainH;
                pos = i;
            }
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        cerr << "DECREASE THE FOLLOWING MOUNTAIN: " << pos << endl;
        cout << pos << endl; // The index of the mountain to fire on.
    }
}