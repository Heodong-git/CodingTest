#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat)
{
    int answer = 0;
	for (size_t i = 0; i < myString.length(); i++)
	{
		if (myString[i] == 'A')
		{
			myString[i] = 'B';
		}
		else
		{
			myString[i] = 'A';
		}
	}
	if (string::npos != myString.find(pat))
	{
		answer = 1;
	}

    return answer;
}