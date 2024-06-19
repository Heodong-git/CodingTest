#include <string>
#include <vector>
#include <sstream>
#include <cctype>

using namespace std;

int solution(string my_string)
{
    int answer = 0;

	for (size_t i = 0; i < my_string.length(); i++)
	{
		if (1 == isalpha(my_string[i]) || 2 == isalpha(my_string[i]))
		{
			my_string[i] = ' ';
		}
	}

	vector<string> values;
	stringstream sstr(my_string);
	string tempstr;
	while (getline(sstr, tempstr, ' '))
	{
		if (0 != tempstr.length())
		{
			values.push_back(tempstr);
		}
	}
	
	if (true == values.empty())
	{
		return answer;
	}

	for (size_t i = 0; i < values.size(); i++)
	{
		int value = stoi(values[i]);
		answer += value;
	}

    return answer;
}

int main()
{
	solution("1a2b3c4d123Z");

	return 0;
}