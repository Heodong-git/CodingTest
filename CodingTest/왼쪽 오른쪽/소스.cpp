#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list)
{
    vector<string> answer;

	int startidx = -1;
	int endidx = -1;
	for (size_t i = 0; i < str_list.size(); i++)
	{
		if (str_list[i] == "l")
		{
			endidx = i;
			break;
		}
		else if(str_list[i] == "r")
		{
			startidx = i + 1;
			break;
		}
	}

	if (startidx != -1)
	{
		for (size_t i = startidx; i < str_list.size(); i++)
		{
			answer.push_back(str_list[i]);
		}
	}

	if (endidx != -1)
	{
		for (size_t i = 0; i < endidx; i++)
		{
			answer.push_back(str_list[i]);
		}
	}


    return answer;
}