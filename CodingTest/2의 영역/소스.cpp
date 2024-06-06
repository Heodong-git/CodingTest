#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    vector<int> indexs;

    for (int i = 0; i < arr.size(); ++i)
    {
        if (2 == arr[i])
        {
            indexs.push_back(i);
        }
    }

    if (true == indexs.empty())
    {
        answer.push_back(-1);
        return answer;
    }

    int startindex = indexs[0];
    int endindex = *(indexs.end() - 1);
    for (size_t i = indexs[0]; i <= endindex; i++)
    {
        answer.push_back(arr[i]);
    }

    return answer;
}