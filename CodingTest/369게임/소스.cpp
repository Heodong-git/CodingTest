#include <string>
#include <vector>

using namespace std;

int solution(int order) 
{
    int answer = 0;
    string str = to_string(order);
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '3' || str[i] == '6' || str[i] == '9')
        {
            ++answer;
        }

    }

    return answer;
}

int main()
{
    solution(3);
    return 0;
}
   