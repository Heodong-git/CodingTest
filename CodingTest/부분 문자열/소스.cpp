#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) 
{
    int answer = 0;

    if (string::npos != str2.find(str1))
    {
        answer = 1;
    }

    return answer;
}