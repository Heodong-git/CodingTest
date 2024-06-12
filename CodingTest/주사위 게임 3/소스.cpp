#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) 
{
    int answer = 0;
    vector<int> values = { a, b, c, d };
    
    sort(values.begin(), values.end());
    
    // 0번과 3번인덱스의 값이 같다면 모두 같은 것
    if (values[0] == values[3])
    {
        answer = 1111 * a;
    }
    // 모두 같은건 위에서 걸러지고. 아래 두개에 해당 한다면. 
    else if (values[0] == values[2])
    {
        answer = pow(10 * values[0] + values[3], 2);
    }
    else if (values[1] == values[3])
    {
        answer = pow(10 * values[1] + values[0], 2);
    }
    else if (values[0] == values[1])
    {
        if (values[2] == values[3])
        {
            answer = (values[0] + values[2]) * abs(values[0] - values[2]);
        }
        else
        {
            answer = values[2] * values[3];
        }
    }
    else if (values[2] == values[3])
    {
        if (values[0] == values[1])
        {
            answer = (values[2] + values[0]) * abs(values[2] - values[0]);
        }
        else
        {
            answer = values[0] * values[1];
        }
    }
    else if (values[1] == values[2])
    {
        if (values[0] == values[3])
        {
            answer = (values[1] + values[0]) * abs(values[1] - values[0]);
        }
        else
        {
            answer = values[0] * values[3];
        }
    }
    else
    {
        answer = values[0];
    }

    return answer;
}

void main()
{
    solution(1, 2, 2, 3);
}