#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) 
{
    int answer = 0;

    // ù��° ���ڰ� �������� �ʴٸ� 0��ȯ 
    if (my_string[0] != is_prefix[0])
    {
        return answer;
    }

    int prefixlength = is_prefix.length();
    string targetstring = my_string.substr(0, prefixlength);


    // ������ ���ڿ��� ���ԵǾ� �ִٸ�
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