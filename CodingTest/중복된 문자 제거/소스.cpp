#include <string>
#include <vector>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    for (size_t i = 0; i < my_string.length(); i++)
    {
        for (size_t j = i + 1; j < my_string.length(); j++)
        {
            if (my_string[i] == my_string[j]) 
            {
                my_string.erase(my_string.begin() + j);
                --j;
            }
        }
    }
    
    answer = my_string;
    return answer;
}

int main()
{
    solution("people");
    return 0;
}