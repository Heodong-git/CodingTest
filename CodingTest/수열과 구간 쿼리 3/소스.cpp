#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) 
{
    vector<int> answer;
    answer = arr;
    for (size_t i = 0; i < queries.size(); i++)
    {
        int changeidx1 = queries[i][0];
        int changeidx2 = queries[i][1];
        
        int temp = answer[changeidx1];
        answer[changeidx1] = answer[changeidx2];
        answer[changeidx2] = temp;
    }
    return answer;
}