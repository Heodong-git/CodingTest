#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, bool flag) 
{
    int answer = 0;

    if (true == flag)
    {
        answer = a + b;
    }
    else if (false == flag)
    {
        answer = a - b;
    }

    return answer;
}