#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) 
{
    string answer = "";
	for (size_t i = 0; i < str_list.size(); i++)
	{
		if (string::npos == str_list[i].find(ex))
		{
			answer += str_list[i];
		}
	}

    return answer;
}