#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, t;
    vector <char> d;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;

        if(a > b)
        {
            d.push_back('>');
        }
        else if(a < b)
        {
            d.push_back('<');
        }
        else
        {
            d.push_back('=');
        }
    }
    for(int i = 0; i < d.size(); i++)
    {
        cout << d[i] << "\n";
    }

    return 0;
}
