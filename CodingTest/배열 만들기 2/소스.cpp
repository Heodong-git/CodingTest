#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void GenerateNumbers(vector<int>& Numbers, string CurrentNumberStr, const int MaxLength)
{
    // 만약 글자의 길이가 0보다 길다면 배열에 추가
    if (CurrentNumberStr.length() > 0)
    {
        int Number = stoi(CurrentNumberStr);
        Numbers.push_back(Number);
    }
    
    if (CurrentNumberStr.length() < MaxLength)
    {
        GenerateNumbers(Numbers, CurrentNumberStr + "0", MaxLength);
        GenerateNumbers(Numbers, CurrentNumberStr + "5", MaxLength);
    }

}

vector<int> solution(int l, int r) 
{
    vector<int> answer;
    vector<int> Numbers;
    GenerateNumbers(Numbers, "", 7);
    
    for (size_t i = 0; i < Numbers.size(); i++)
    {
        if (Numbers[i] >= l && Numbers[i] <= r) 
        {
            answer.push_back(Numbers[i]);
        }
    }

    if (true == answer.empty())
    {
        answer.push_back(-1);
        return answer;
    }

    sort(answer.begin(), answer.end());
    vector<int>::iterator erasestartiter = unique(answer.begin(), answer.end());
    answer.erase(erasestartiter, answer.end());
    return answer;
}

int main()
{
    solution(5, 555);

    return 0;
}