#include <string>
#include <vector>

using namespace std;

int solution(int a, int b)
{
    int answer = 0;

    string firststr;
    firststr += to_string(a);
    firststr += to_string(b);

    string secondstr;
    secondstr += to_string(b);
    secondstr += to_string(a);

    int firstvalue = stoi(firststr);
    int secondvalue = stoi(secondstr);

    if (firstvalue < secondvalue)
    {
        answer = secondvalue;
    }
    else if (firstvalue > secondvalue)
    {
        answer = firstvalue;
    }
    else if (firstvalue == secondvalue)
    {
        answer = firstvalue + secondvalue;
    }

    return answer;
}

int main()
{
    solution(1, 12);

    return 0;
}