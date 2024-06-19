#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n)
{
    
    int row = num_list.size() / n;
    int column = n;
    
    vector<vector<int>> answer(row, vector<int>(n));

    int currentidx = 0;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            answer[i][j] = num_list[currentidx];
            ++currentidx;
        }
    }

    return answer;
}

int main()
{
    solution({ 1, 2, 3, 4, 5, 6, 7, 8 }, 2);
    
    return 0;
}