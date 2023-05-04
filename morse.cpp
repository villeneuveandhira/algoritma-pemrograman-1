#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int f[28][2] = 
    {
        {5, 20}, {18, 23}, {27, 27}, {27, 27}, {2, 24}, {9, 1}, {27, 27},
        {26, 17}, {27, 27}, {19, 21}, {27, 27}, {3, 25}, {27, 27}, {7, 15},
        {4, 11}, {27, 27}, {27, 27}, {27, 27}, {12, 27}, {8, 22}, {14, 13},
        {6, 27}, {27, 27}, {16, 10}, {27, 27}, {27, 27}, {27, 27}, {27, 27}
    };

    int q;
    
    cout << endl << "--- MASUKAN KODE MORSE ---" << endl << endl;

    string input;

    getline(cin, input);

    vector<string> morse;

    string temp = "";
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ')
        {
            morse.push_back(temp);
            temp = "";
        }
        else
        {
            temp += input[i];
        }
    }
    morse.push_back(temp);

    cout << endl << "--- HASIL DEKRIPSI ---" << endl << endl;
    
    for (string m : morse)
    {
        q = 0;
        for (int i = 0; i < m.length(); i++)
        {
            if (m[i] == '.')
            {
                q = f[q][0];
            }
            else if (m[i] == '-')
            {
                q = f[q][1];
            }
            else
            {
                q = 27;
            }
        }
        if (q == 27)
        {
            cout << '?';
        }
        else
        {
            cout << (char)(64 + q);
        }
    }

    cout << endl << endl;

    return 0;
}