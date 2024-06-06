#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat)
{
    string answer = "";
    int endidx = myString.rfind(pat);
    for (size_t i = 0; i < endidx; i++)
    {
        answer += myString[i];
    }
   

    answer += pat;
    return answer;
}

int main()
{
    solution("AAAAaaaa", "a");
    return 0;
}