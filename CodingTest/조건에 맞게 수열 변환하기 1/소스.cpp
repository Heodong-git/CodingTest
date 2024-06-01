#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer = arr;
    for (size_t i = 0; i < answer.size(); i++)
    {
        int value = answer[i];
        if (value >= 50 && value % 2 == 0)
        {
            answer[i] = value / 2;
        }
        else if(value < 50 && value % 2 != 0)
        {
            answer[i] = value * 2;
        }
    }

    return answer;
}