#include <string>
#include <vector>

using namespace std;


bool Check(const char c)
{
    return c < 'l';
}

string solution(string myString)
{
    string answer = "";
    for (size_t i = 0; i < myString.length(); i++)
    {
        if (true == Check(myString[i]))
        {
            myString[i] = 'l';
        }
    }
    answer = myString;
    return answer;
}