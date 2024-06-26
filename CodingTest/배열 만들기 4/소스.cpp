#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> stk;
    int i = 0;
    stk.push_back(arr[i]);
    ++i;
    while (i < arr.size())
    {
        if (stk[stk.size() - 1] < arr[i])
        {
            stk.push_back(arr[i]);
            ++i;
            continue;
        }
        else if (stk[stk.size() - 1] >= arr[i])
        {
            stk.pop_back();
        }
    }
    
    return stk;
}