#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
/*
N (North)
NE (North-East)
E (East)
SE (South-East)
S (South)
SW (South-West)
W (West)
NW (North-West)
*/

std::string calcNextDirection(int& x, int& y, const int& targetX, const int& targetY)
{
    std::string xDirection = "";
    if (x < targetX)
    {
        xDirection = "E";
        ++x;
    }
    else if (x > targetX)
    {
        xDirection = "W";
        --x;
    }

    std::string yDirection = "";
    if (y < targetY)
    {
        yDirection = "S";
        ++y;
    }
    else if (y > targetY)
    {
        yDirection = "N";
        --y;
    }
    return (yDirection + xDirection);
}
/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
* ---
* Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
**/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;

        cerr << "THOR POS " << initialTX << " " << initialTY << endl;
        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << calcNextDirection(initialTX, initialTY, lightX, lightY) << endl;
    }
}