#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat)
{
    int answer = 0;
    // ã�� ���ڿ��� �ִٸ� �ش� ���ڿ��� ù��° �ε��� ��ȯ
    int idx = myString.find(pat);
    while (string::npos != idx)
    {
        ++answer;
        idx = myString.find(pat, idx + 1);
    }

    return answer;
}

int main()
{
    solution("aaaa", "aa");

    return 0;
}