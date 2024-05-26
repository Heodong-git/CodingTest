#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n)
{
    string answer = "";
    int length = my_string.length();
    answer = my_string.substr(length - n, length);
    
    return answer;
}