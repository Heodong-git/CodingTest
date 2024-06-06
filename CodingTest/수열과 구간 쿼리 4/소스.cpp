#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    vector<int> answer;
    int s = 0;
    int e = 1;
    int k = 2;

    answer = arr;
    for (size_t i = 0; i < queries.size(); i++)
    {
        for (size_t j = queries[i][s]; j <= queries[i][e]; j++)
        {
            if (j % queries[i][k] == 0)
            {
                answer[j] = answer[j] + 1;
            }
        }
    }

    return answer;
}

int main()
{
    solution({ 0, 1, 2, 4, 3 }, { {0, 4, 1}, {0, 3, 2}, {0, 3, 3} });

    return 0;
}