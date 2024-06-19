#include <iostream>

using namespace std;

int main(void) 
{
    int n;
    cin >> n;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 0; j < i; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    
    return 0;
}