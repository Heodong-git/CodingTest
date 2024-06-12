#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) 
{
    vector<vector<int>> answer(n, vector<int>(n));
    int value = 1;
    
    // �¿� ����
    int left = 0, right = n - 1;
    // ���� ���� 
    int top = 0, bottom = n - 1;

    // ���� ���� ä�� �� ���� �ݺ� 
    while (value <= n * n)
    {
		for (int i = left; i <= right; i++)
		{
			answer[top][i] = value++;
		}
		++top;
		for (int i = top; i <= bottom; i++)
		{
			answer[i][right] = value++;
		}
		--right;
		for (int i = right; i >= left; i--)
		{
			answer[bottom][i] = value++;
		}
		--bottom;
		for (int i = bottom; i >= top; i--)
		{
			answer[i][left] = value++;
		}
		++left;
    }

    return answer;
}

int main()
{
    solution(4);

    return 0;
}