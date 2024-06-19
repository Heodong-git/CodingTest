#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) 
{
    int r;
    while (true)
    {
        int r = a % b;

        if (r == 0)
        {
           return b;
        }

        a = b;
        b = r;
    }
}

int solution(int n) 
{
    int answer = 0;
    int people = n;
    int peace = 6 * people / gcd(people, 6);
    answer = peace / 6;

    return answer;
}

int main()
{
    solution(10);
    return 0;
}