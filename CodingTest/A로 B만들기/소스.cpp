#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after)
{
    int answer = 0;
    size_t beforeLength = before.length();
    size_t afterLength = after.length();

    if (beforeLength != afterLength)
    {
        return answer;
    }

    sort(before.begin(), before.end());
    sort(after.begin(), after.end());

    bool check = true;
    for (int i = 0; i < beforeLength; ++i)
    {
        if (before[i] != after[i])
        {
            check = false;
        }
    }

    if (true == check)
    {
        answer = 1;
    }

    return answer;
}