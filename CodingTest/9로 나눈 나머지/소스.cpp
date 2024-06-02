#include <string>
#include <vector>

using namespace std;

int solution(string number) 
{
    int answer = 0;
    for (size_t i = 0; i < number.length(); i++)
    {
        answer += number[i] - '0';
    }
    
    answer = answer % 9;

    return answer;
}