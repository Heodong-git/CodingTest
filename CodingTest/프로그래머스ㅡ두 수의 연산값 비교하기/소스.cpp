#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;

    string addstring;
    addstring += to_string(a);
    addstring += to_string(b);

    int customresult = stoi(addstring);
    int result = 2 * a * b;

    if (customresult < result)
    {
        answer = result;
    }
    else if (customresult == result)
    {
        answer = customresult + result;
    }
    else
    {
        answer = customresult;
    }

    return answer;
}