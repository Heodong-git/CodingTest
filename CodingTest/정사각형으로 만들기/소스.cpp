#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr)
{
    vector<vector<int>> answer;
    
    int row = arr.size();
    int column = arr[0].size();
    
    if (row == column)
    {
        answer = arr;
        return answer;
    }

    if (row > column)
    {
        int end = row - column;
        for (size_t i = 0; i < row; i++)
        {
            for (size_t j = 0; j < end; j++)
            {
                arr[i].push_back(0);
            }
        }

        answer = arr;
    }
    else if (row < column)
    {
        int rowcount = column;
        vector<vector<int>> v(rowcount, vector<int>(column, 0));
        for (size_t i = 0; i < arr.size(); i++)
        {
            v[i] = arr[i];
        }

        answer = v;
    }

    return answer;
}

int main()
{

    solution({ {57, 192, 534, 2 }, { 9, 345, 192, 999 }});
    return 0;
}