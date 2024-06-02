#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx)
{
    int answer = 0;
	for (size_t i = idx; i < arr.size(); i++)
	{
		if (arr[i] == 1) 
		{
			answer = i;
			return answer;
		}
	}

	answer = -1;
    return answer;
}

int main()
{
	solution({ 0, 0, 0, 1 }, 1);

	return 0;
}