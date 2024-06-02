#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list)
{
    int answer = 0;
	
	int odd = 0;
	int even = 0;
	even += num_list[0];
	for (size_t i = 1; i < num_list.size(); i++)
	{
		if (i % 2 != 0)
		{
			odd += num_list[i];
		}
		else
		{
			even += num_list[i];
		}
	}

	if (odd < even)
	{
		answer = even;
	}
	else
	{
		answer = odd;
	}

    return answer;
}