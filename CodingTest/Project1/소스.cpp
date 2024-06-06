#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat)
{
    int answer = 0;
    // 찾는 문자열이 있다면 해당 문자열의 첫번째 인덱스 반환
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