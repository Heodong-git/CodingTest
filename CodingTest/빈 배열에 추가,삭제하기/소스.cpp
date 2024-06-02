#include <string>
#include <vector>

using namespace std;
vector<int> X;

vector<int> solution(vector<int> arr, vector<bool> flag) 
{
    vector<int> answer;
    for (size_t i = 0; i < flag.size(); i++)
    {
        int currentvalue = arr[i];
        if (flag[i] == true)
        {
            for (size_t i = 0; i < currentvalue * 2; i++)
            {
                X.push_back(currentvalue);
            }
        }
        else
        {
            for (size_t j = 0; j < arr[i]; j++)
            {
                X.pop_back();
            }
        }
    }
    
    answer = X;
    return answer;
}

int main()
{
    solution({ 3, 2, 4, 1, 3 }, { true, false, true, false, false });

    return 0;
}