#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int N; // Size variable
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int mSize; //mechaGodzilla
        int gSize; //godzilla

        vector<int> godZilla;
        vector<int> mecha;
        
        cin >> gSize;
        cin >> mSize;
        
        

        for (int j = 0; j < gSize; j++)
        {
            int dummy;
            cin >> dummy;
            godZilla.push_back(dummy);
        }

        for (int j = 0; j < mSize; j++)
        {
            int dummy;
            cin >> dummy;
            mecha.push_back(dummy);
        }

        sort(godZilla.begin(), godZilla.end());

        sort(mecha.begin(), mecha.end());

        //comparison variables
        int g1 = 0;
        int m1 = 0;

        while (g1 < gSize && m1 < mSize)
        {
            // army godZilla[g1] < army mecha[m1]
            if (godZilla[g1] < mecha[m1])
            {
                g1++; // That member is dead. Move to next combatant
            }
            else
            {
                m1++;
            }

            // who won?
            if (g1 == gSize)
            {
                cout << "MechaGodzilla" << endl;
            }else
            {
                cout << "Godzilla" << endl;
            }
            

        }
    }
  return EXIT_SUCCESS;
}

