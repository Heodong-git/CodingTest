#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;

    string oddstr;
    string evenstr;
    for (size_t i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 != 0)
        {
            oddstr += std::to_string(num_list[i]);
        }
        else
        {
            evenstr += std::to_string(num_list[i]);
        }
    }
   
    answer = stoi(oddstr) + stoi(evenstr);

    return answer;
}