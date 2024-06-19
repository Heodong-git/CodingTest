#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string)
{
    vector<int> answer;
	for (size_t i = 0; i < my_string.length(); i++)
	{
		if (my_string[i] >= '0' && my_string[i] <= '9')
		{
			answer.push_back(my_string[i] - '0');
		}
	}
	
	sort(answer.begin(), answer.end());

    return answer;
}