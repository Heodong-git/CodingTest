#include <string>
#include <vector>

using namespace std;

string solution(int age) 
{
    string answer = "";
    string str = to_string(age);
    for (size_t i = 0; i < str.length(); i++)
    {
        answer += str[i] + '1';
    }
    return answer;
}

int main()
{
    solution(23);
    return 0;
}