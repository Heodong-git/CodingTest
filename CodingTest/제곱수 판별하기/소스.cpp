#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n)
{
    int answer = 0;
    
    int value = sqrt(n);
    if (value * value == n)
    {
        answer = 1;
    }
    else
    {
        answer = 2;
    }
  
    return answer;
}

int main()
{
    solution(976);
    return 0;
}