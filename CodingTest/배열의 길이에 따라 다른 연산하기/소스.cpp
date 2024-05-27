#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n)
{
    vector<int> answer;
    if (arr.size() % 2 != 0)
    {
        for (size_t i = 0; i < arr.size(); i++)
        {
            if (i % 2 == 0)
            {
                answer.push_back(arr[i] + n);
                continue;
            }
            answer.push_back(arr[i]);
        }
    }
    else
    {
        for (size_t i = 0; i < arr.size(); i++)
        {
            if (i % 2 != 0)
            {
                answer.push_back(arr[i] + n);
                continue;
            }
            answer.push_back(arr[i]);
        }
    }
    return answer;
}