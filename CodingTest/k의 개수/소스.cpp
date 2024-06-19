#include <string>
#include <vector>

using namespace std;

int solution(int start, int end, int k) 
{
    int answer = 0;
    vector<int> values;
    for (size_t i = start; i <= end; i++)
    {
        values.push_back(i);
    }
    
    string s = to_string(k);
    for (size_t i = 0; i < values.size(); i++)
    {
        string tempstr = to_string(values[i]);
        for (size_t j = 0; j < tempstr.length(); j++)
        {
            if (tempstr[j] == s[0])
            {
                ++answer;
            }
        }
    }

    return answer;
}