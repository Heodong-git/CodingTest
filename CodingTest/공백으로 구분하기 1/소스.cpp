#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) 
{
    vector<string> answer;
	stringstream sstr(my_string);
	string strtemp;
	while (getline(sstr, strtemp, ' '))
	{
		answer.push_back(strtemp);
	}
    return answer;
}

int main()
{
	solution({"i love you"});

	return 0;
}