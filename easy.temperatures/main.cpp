#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{
    int closesNegative = 0; //-273;
    int closesPositive = 0;// 5526;
    bool setPositive = false;
    bool setNegative = false;
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {

        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        cerr << "RECEIVED T: " << t << endl;
        if (t > 0)
        {
            if (!setPositive)
            {
                closesPositive = t;
                setPositive = true;
            }
            else
            {
                if (closesPositive > t)
                {
                    closesPositive = t;
                }
            }
        }
        else
        {
            if (!setNegative)
            {
                closesNegative = t;
                setNegative = true;
            }
            else
            {
                if (closesNegative < t)
                {
                    closesNegative = t;
                }
            }
        }
    }

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    if (setNegative && setPositive)
    {
        abs(closesNegative) < abs(closesPositive) ? (cout << closesNegative) : (cout << closesPositive);
    }
    else if (setNegative)
    {
        cout << closesNegative;
    }
    else if (setPositive)
    {
        cout << closesPositive;
    }
    else
    {
        cout << 0;
    }

    return 0;
}