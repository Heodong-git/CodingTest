#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix)
{
    int answer = 0;
    int prefixlength = is_prefix.length();
    if (prefixlength > my_string.length())
    {
        return answer;
    }

    string targetstring = my_string.substr(my_string.size() - prefixlength, my_string.size());
    if (targetstring == is_prefix)
    {
        answer = 1;
    }

    return answer;
}

int main()
{
    solution("banana", "wxyz");

    return 0;
}