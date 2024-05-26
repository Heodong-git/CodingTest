#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    
    int multiply = 1;
    int add = 0;

    for (size_t i = 0; i < num_list.size(); i++)
    {
        multiply *= num_list[i];
        add += num_list[i];
    }

    if (multiply < pow(add, 2))
    {
        answer = 1;
    }

    if (multiply > pow(add, 2))
    {
        answer = 0;
    }

    return answer;
}

int main()
{
    solution({ 5,7,8,3 });


       return 0;
}