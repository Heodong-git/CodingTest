#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, int k) 
{
    vector<int> answer;
	unordered_set<int> uset;

	for (size_t i = 0; i < arr.size(); i++)
	{
		uset.insert(arr[i]);
	}

	for (int value : uset)
	{
		if (answer.size() >= k)
		{
			break;
		}
		answer.push_back(value);
	}

	if (answer.size() < k)
	{
		int end = k - answer.size();
		for (size_t i = 0; i < end; i++)
		{
			answer.push_back(-1);
		}
	}

    return answer;
}

int main()
{
	solution({ 0, 1, 0, 1 }, 4);

	return 0;
}