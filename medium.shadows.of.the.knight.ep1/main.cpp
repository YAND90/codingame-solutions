#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    int W; // width of the building.
    int H; // height of the building.
    cin >> W >> H; cin.ignore();
    int N; // maximum number of turns before game over.
    cin >> N; cin.ignore();
    int X0;
    int Y0;
    cin >> X0 >> Y0; cin.ignore();

    // game loop
    int xLeft = 0;
    int xRight = W - 1;

    int yTop = 0;
    int yBottom = H - 1;

    while (1) {
        string bombDir; // the direction of the bombs from batman's current location (U, UR, R, DR, D, DL, L or UL)
        cin >> bombDir; cin.ignore();

        if (bombDir.find('R') != std::string::npos)
        {
            xLeft = X0 + 1;
        }

        if (bombDir.find('L') != std::string::npos)
        {
            xRight = X0 - 1;
        }

        if (bombDir.find('U') != std::string::npos)
        {
            yBottom = Y0 - 1;
        }

        if (bombDir.find('D') != std::string::npos)
        {
            yTop = Y0 + 1;
        }

        X0 = (xRight + xLeft) / 2;
        Y0 = (yBottom + yTop) / 2;
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        cerr << "NEXT BATMAN POS: " << X0 << Y0 << endl;
        // the location of the next window Batman should jump to.
        cout << X0 << " " << Y0 << endl;
    }
}