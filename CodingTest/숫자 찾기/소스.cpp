#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) 
{
    int answer = -1;
    
    string str = to_string(num);
    string strk = to_string(k);
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == strk[0])
        {
            answer = i + 1;
            break;
        }
    }
    
    return answer;
}