#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) 
{
    string answer = "";
    answer = rny_string;

    while (string::npos != answer.find('m'))
    {
        answer.string::replace(answer.find("m"), 1, "rn");
    }

    return answer;
}


int main()
{
    solution("masterpiece");
    return 0;
}

