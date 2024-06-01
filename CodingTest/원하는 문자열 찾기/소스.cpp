#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat)
{
    int answer = 0;

    string strtemp = myString;
    for (size_t i = 0; i < strtemp.length(); i++)
    {
        strtemp[i] = tolower(strtemp[i]);
    }

    string strtemppat = pat;
    for (size_t i = 0; i < strtemppat.length(); i++)
    {
        strtemppat[i] = tolower(strtemppat[i]);
    }

    if (string::npos != strtemp.find(strtemppat))
    {
        answer = 1;
    }

    return answer;
}