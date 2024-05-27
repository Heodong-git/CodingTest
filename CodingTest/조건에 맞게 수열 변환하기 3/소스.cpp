#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) 
{
    // true Ȧ, false ¦
    bool check = false;
    if (k % 2 != 0)
    {
        check = true;
    }

    vector<int> answer;
    if (true == check)
    {
        for (size_t i = 0; i < arr.size(); i++)
        {
            answer.push_back(arr[i] * k);
        }
    }
    else
    {
        for (size_t i = 0; i < arr.size(); i++)
        {
            answer.push_back(arr[i] + k);
        }
    }

    return answer;
}