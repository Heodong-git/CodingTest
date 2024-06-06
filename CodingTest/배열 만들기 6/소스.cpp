#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int i = 0;
    while (i < arr.size())
    {
        if (true == answer.empty())
        {
            answer.push_back(arr[i]);
            ++i;
        }
        else if (false == answer.empty() && answer[answer.size() - 1] == arr[i])
        {
            answer.pop_back();
            ++i;
        }
        else if (false == answer.empty() && answer[answer.size() - 1] != arr[i])
        {
            answer.push_back(arr[i]);
            ++i;
        }
    }

    if (true == answer.empty())
    {
        answer.push_back(-1);
    }
    
    return answer;
}