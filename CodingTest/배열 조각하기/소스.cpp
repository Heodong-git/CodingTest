#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query)
{
    vector<int> answer;
    for (size_t i = 0; i < query.size(); i++)
    {
        // ¦
        if (i % 2 == 0)
        {
            arr.resize(query[i] + 1);
        }
        // Ȧ
        else if (i % 2 != 0)
        {
            arr.erase(arr.begin(), arr.begin() + query[i]);
        }
    }
    answer = arr;
    return answer;
}

void main()
{
    solution({ 0, 1, 2, 3, 4, 5 }, { 4, 1 , 2 });
}