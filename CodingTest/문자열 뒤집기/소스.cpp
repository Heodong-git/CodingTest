#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) 
{
	string answer = "";
	if (e == 0)
	{
		answer = my_string;
		return answer;
	}
	string reversString;

	for (size_t i = e; i >= s; i--)
	{
		reversString += my_string[i];
	}
	
	int curidx = 0;
	for (size_t i = s; i <= e; i++)
	{
		my_string[i] = reversString[curidx];
		++curidx;
	}
	
	answer = my_string;
    return answer;
}

int main()
{
	solution("0123", 0, 0);
	return 0;
}