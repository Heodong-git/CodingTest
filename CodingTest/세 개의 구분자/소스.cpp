#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

vector<string> solution(string myStr) 
{
    vector<string> answer;
	replace(myStr.begin(), myStr.end(), 'a', ' ');
	replace(myStr.begin(), myStr.end(), 'b', ' ');
	replace(myStr.begin(), myStr.end(), 'c', ' ');
	
	stringstream sstr(myStr);
	string tempstr;
	while (getline(sstr, tempstr, ' '))
	{
		if (tempstr.size() != 0)
		{
			answer.push_back(tempstr);
		}
	}

    return answer;
}

int main()
{
	solution("baconlettucetomato");

	return 0;
}