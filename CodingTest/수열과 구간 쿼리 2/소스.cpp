#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    vector<int> answer;
    int s = 0;
    int e = 1;
    int k = 2;

    for (size_t i = 0; i < queries.size(); i++)
    {
        int min = -1;
        int startidx = queries[i][s];
        int endidx = queries[i][e];
        for (size_t j = startidx; j <= endidx; j++)
        {
            int K = queries[i][k];
            if (K < arr[j])
            {
                if (min == -1)
                {
                    min = arr[j];
                    continue;
                }

                if (min > arr[j])
                {
                    min = arr[j];
                }
            }
        }
        answer.push_back(min);
        min = -1;
    }

    return answer;
}

int main()
{
    solution({ 0, 1, 2, 4, 3 }, { {0, 4, 2},{0, 3, 2},{0, 2, 2} });

    return 0;
}