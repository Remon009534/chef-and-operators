# include "iostream"
#include <vector>
using namespace std;

int main() 
{
    int t, a, b;
    vector<char> z;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;

        if (a == b)
        {
            z.push_back('=');
        }

        else if (a < b)
        {
            z.push_back('<');
        }
    
        else if (a > b)
        {
            z.push_back('>');
        }
    }

    for (int i = 0; i < z.size(); i++) cout << z[i] << endl;

    return 0;
}
