#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) 
{
    int answer = 0;

    // 첫번째 문자가 동일하지 않다면 0반환 
    if (my_string[0] != is_prefix[0])
    {
        return answer;
    }

    int prefixlength = is_prefix.length();
    string targetstring = my_string.substr(0, prefixlength);


    // 동일한 문자열이 포함되어 있다면
    if (targetstring == is_prefix)
    {
        answer = 1;
    }

    return answer;
}

int main()
{
    solution("banana", "abcd");

    return 0;
}