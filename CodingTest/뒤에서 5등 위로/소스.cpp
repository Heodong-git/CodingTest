#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) 
{
    vector<int> answer;
    sort(num_list.begin(), num_list.end());
    if (num_list.size() <= 5)
    {
        answer = num_list;
        return answer;
    }
    
    for (size_t i = 5; i < num_list.size(); i++)
    {
        answer.push_back(num_list[i]);
    }

    return answer;
}