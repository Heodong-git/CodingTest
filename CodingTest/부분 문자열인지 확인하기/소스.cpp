#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string target) 
{
    int answer = 0;
    
    if (string::npos != my_string.find(target))
    {
        answer = 1;
    }

    return answer;
}