#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    if (num_list.size() < 11)
    {
        answer = 1;
        for (size_t i = 0; i < num_list.size(); i++)
        {
            answer *= num_list[i];
        }
    }
    else
    {
        for (size_t i = 0; i < num_list.size(); i++)
        {
            answer += num_list[i];
        }
    }
    return answer;
}

int main()
{
    solution({ 2, 3, 4 ,5 });

    return 0;
}