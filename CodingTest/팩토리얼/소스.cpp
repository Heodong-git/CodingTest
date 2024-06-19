#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int factorial = 1;
    for (int i = 1; i <= 10; i++) 
    {
        factorial *= i;
        if (factorial <= n)
        {
            answer = i;
        }
    }
    return answer;
}

int main()
{
    solution(7);
    return 0;
}