#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) 
{
    string answer = "";
	
	for (size_t i = 0; i < numLog.size() - 1; i++)
	{
		int value = numLog[i + 1] - numLog[i];
		string str;
		switch (value)
		{
		case 1:
			str = "w";
			break;
		case -1:
			str = "s";
			break;
		case 10:
			str = "d";
			break;
		case -10:
			str = "a";
			break;
		}
		answer += str;
	}

    return answer;
}