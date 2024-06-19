#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) 
{
    vector<int> answer;
    vector<int> temps = numbers;
    if ("right" == direction)
    {
        answer.push_back(numbers[numbers.size() - 1]);
        for (size_t i = 0; i < temps.size() - 1; i++)
        {
            answer.push_back(temps[i]);
        }

    }
    else if ("left" == direction)
    {
        int temp = numbers[0];
        for (size_t i = 1; i < numbers.size(); i++)
        {
            answer.push_back(numbers[i]);
        }
        
        answer.push_back(temp);
    }

    return answer;
}

int main()
{
    solution({ 1, 2, 3 }, "right");

    return 0;
}
