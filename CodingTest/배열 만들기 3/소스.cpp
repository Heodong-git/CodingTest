#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals)
{
    vector<int> answer;
    int start;
    int end;
    for (size_t i = 0; i < 2; i++)
    {
        start = intervals[i][0];
        end = intervals[i][1];

        for (size_t i = start; i <= end; i++)
        {
            answer.push_back(arr[i]);
        }
    }
    return answer;
}