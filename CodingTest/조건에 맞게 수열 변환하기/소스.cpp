#include <string>
#include <vector>

using namespace std;


void ChangeArray(vector<int>& arr)
{
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (arr[i] >= 50 && arr[i] % 2 == 0)
        {
            arr[i] = arr[i] / 2;
        }
        else if (arr[i] < 50 && arr[i] % 2 != 0)
        {
            arr[i] = arr[i] * 2 + 1;
        }
    }
}

int solution(vector<int> arr)
{
    int answer = 0;
    bool equalcheck = false;
    while (false == equalcheck)
    {
        vector<int> temps = arr;
        ChangeArray(arr);
        if (arr == temps)
        {
		    equalcheck = true;
        }
        else
        {
            ++answer;
        }
    }
    
    return answer;
}

int main()
{
    solution({ 1, 2, 3, 100, 99, 98 });
    return 0;
}
