#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
	while (1 != n)
	{
		answer.push_back(n);
		if (n % 2 == 0)
		{
			n /= 2;
		}
		else
		{
			n = 3 * n + 1;
		}
	}
	answer.push_back(n);
    return answer;
}