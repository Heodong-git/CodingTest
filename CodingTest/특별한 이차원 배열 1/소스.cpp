#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) 
{
    vector<vector<int>> answer;
    answer.resize(n);
    for (size_t i = 0; i < answer.size(); i++)
    {
        answer[i].resize(n);
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if (i == j)
            {
                answer[i][j] = 1;
            }
        }
    }

    return answer;
}