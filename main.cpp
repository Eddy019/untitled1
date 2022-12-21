#include <iostream>
#include<fstream>
using namespace std;

int main (void)
{
    int a, t1 [106], i;
    double b;
    char c;
    string s;
    ifstream f ("C:/Users/PCATT/Desktop/MSAB/Assignment1/Calls.bin", ios::in | ios::binary);

    if (!f.is_open())
        cout << "Impossible d'ouvrir le fichier en lecture !" << endl;
    else
    {

        
        f.read ((char *)&c, sizeof(char));
        for (i = 0; i < 106; i++)
            f.read ((char *)&t1[i], sizeof(int));
    }
    f.close();

    cout

         << "c=" << c << endl;
    for (i = 0; i < 6; i++)
        cout << t1 [i] << endl;

    return 0;
}