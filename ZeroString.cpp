


#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        int arr[a];
        bool condition = false;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                condition = true;
            }
        }
        int count = 0;
        if (condition == true)
        {
            for (int i = 0; i < a; i++)
            {
                if (arr[i] == 1)
                {
                    count++;
                }
            }
            cout << count << endl;
        }
        else if (condition == false)
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
