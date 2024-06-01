#include <string>
#include <vector>

using namespace std;

string solution(string myString)
{
    string answer = "";
    answer = myString;
    for (size_t i = 0; i < answer.length(); i++)
    {
        if (answer[i] == 'a')
        {
            answer[i] = toupper(answer[i]);
        }
        else
        {
            if (answer[i] == 'A')
            {
                continue;
            }
            answer[i] = tolower(answer[i]);
        }
    }

    return answer;
}