#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    vector<int> answer;
    answer = arr;
    for (size_t i = 0; i < queries.size(); i++)
    {
        int startidx = queries[i][0];
        int endidx = queries[i][1];
        for (size_t i = startidx; i <= endidx; i++)
        {
            answer[i] += 1;
        }
    }
    return answer;
}

int main()
{
    solution({ 1, 2, 3, 4, 5 }, { { 2, 4 } });
    return 0;
}