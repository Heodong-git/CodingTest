#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> strtemps = {};
vector<string> solution(string my_string) 
{
    vector<string> answer;
    size_t length = my_string.length();
    for (size_t i = 0; i < length; i++)
    {
        string strtemp;
        for (size_t j = i; j < length; j++)
        {
            strtemp.push_back(my_string[j]);
        }
        strtemps.push_back(strtemp);
    }

    sort(strtemps.begin(), strtemps.end());

    answer = strtemps;
    return answer;
}

int main()
{
    solution("banana");

    return 0;
}