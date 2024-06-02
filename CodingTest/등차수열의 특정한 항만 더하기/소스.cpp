#include <string>
#include <vector>

using namespace std;
vector<int> numbers;

int solution(int a, int d, vector<bool> included)
{
    int answer = 0;
    int value = a;
    for (size_t i = 0; i < included.size(); i++)
    {
        numbers.push_back(value);
        value += d;
    }
 
    for (size_t i = 0; i < included.size(); i++)
    {
        if (true == included[i])
        {
            answer += numbers[i];
        }
    }
    return answer;
}

int main()
{
    solution(3, 4, { true, false, false, true, true });

    return 0;
}