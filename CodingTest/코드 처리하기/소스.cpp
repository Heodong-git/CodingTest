#include <string>
#include <vector>

using namespace std;

enum class EMode
{
    ZERO = 0,
    ONE,
};


string solution(string code) 
{
    string answer = "";
    EMode CurrentMode = EMode::ZERO;

    for (size_t i = 0; i < code.length(); i++)
    {
        switch (CurrentMode)
        {
        case EMode::ZERO:
        {
            if ('1' != code[i] && i % 2 == 0)
            {
                answer += code[i];
            }
            else if ('1' == code[i])
            {
                CurrentMode = EMode::ONE;
            }
            break;
        }
        case EMode::ONE:
        {
            if ('1' != code[i] && i % 2 != 0)
            {
                answer += code[i];
            }
            else if ('1' == code[i])
            {
                CurrentMode = EMode::ZERO;
            }
            break;
        }
        }
    }

    if (true == answer.empty())
    {
        answer = "EMPTY";
    }

    return answer;
}


void main()
{
    solution("abc1abc1abc");
}