#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) 
{
    vector<string> answer;
    for (size_t i = 0; i < strArr.size(); i++)
    {
        // ¦
        if (i % 2 == 0)
        {
            for (size_t j = 0; j < strArr[i].size(); j++)
            {
                strArr[i][j] = tolower(strArr[i][j]);
            }
        }
        // Ȧ
        else
        {
            for (size_t j = 0; j < strArr[i].size(); j++)
            {
                strArr[i][j] = toupper(strArr[i][j]);
            }
        }
    }

    answer = strArr;
    return answer;
}