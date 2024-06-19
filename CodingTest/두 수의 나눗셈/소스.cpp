#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2)
{
    int answer = 0;
    float f = static_cast<float>(num1) / num2;
    answer = f * 1000;
    return answer;
}

int main()
{
    solution(3, 2);

    return 0;
}