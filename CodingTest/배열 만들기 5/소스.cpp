#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l)
{
    vector<int> answer;
    
    for (size_t i = 0; i < intStrs.size(); i++)
    {
        string strtemp = intStrs[i].substr(s, l);
        int value = stoi(strtemp);
        if (k < value)
        {
            answer.push_back(value);
        }
    }

    return answer;
}