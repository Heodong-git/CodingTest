#include <string>
#include <vector>

using namespace std;

bool Check(int value)
{
    if (value <= 0)
    {
        return false;
    }

    while (value % 2 == 0)
    {
        value /= 2;
    }

    return value == 1;
}

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer = arr;
    int arrsize = static_cast<int>(arr.size());
    
    while (false == Check(arrsize))
    {
        arrsize += 2;
    }

    for (size_t i = arr.size(); i < arrsize; i++)
    {
        answer.push_back(0);
    }

    return answer;
}

int main()
{
    solution({ 1, 2, 3, 4, 5, 6 });
    return 0;
}