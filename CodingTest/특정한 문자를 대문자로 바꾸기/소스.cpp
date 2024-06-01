#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string alp) 
{
    string answer = "";
    answer = my_string;
    for (size_t i = 0; i < answer.length(); i++)
    {
        if (answer[i] == alp[0])
        {
            char c = answer[i];
            answer[i] = toupper(c);
        }
    }

    return answer;
}

int main()
{

    solution("programmers", "p");

    return 0;
}