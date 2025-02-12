#include <iostream>

using namespace std;

int main()
{
    int n, h, i, person, count = 0;
    cin >> n >> h;
    for (i = 0; i < n; i++)
    {
        cin >> person;
        if (person <= h)
        {
            count++;
        }
        else
        {
            count += 2;
        }
    }
    cout << count << endl;
}
