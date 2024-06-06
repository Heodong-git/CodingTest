#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) 
{
    int answer = 0;
    
    for (size_t i = 0; i < num_list.size(); i++)
    {
        int value = num_list[i];
        while (1 != value)
        {
            ++answer;
            if (value % 2 == 0)
            {
                value /= 2;
            }
            else if (value % 2 != 0)
            {
                value -= 1;
                value /= 2;
            }
        }
    }
    
    return answer;
}