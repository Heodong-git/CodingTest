#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries)
{
    string answer = "";
    answer = my_string;

    for (size_t i = 0; i < queries.size(); i++)
    {
        int startidx = queries[i][0];
        int endidx = queries[i][1];
        reverse(answer.begin() + startidx, answer.begin() + endidx + 1);
    }

    return answer;
}