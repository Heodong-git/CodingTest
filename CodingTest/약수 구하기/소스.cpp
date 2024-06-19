#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n)
{
    vector<int> answer;

    int value = n;
    for (int i = 1; i <= value; i++)
    {
        if (value % i == 0)
        {
            answer.push_back(i);
        }
    }
   
    return answer;
}

int main()
{
    solution(24);
    return 0;
}