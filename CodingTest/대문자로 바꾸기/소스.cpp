#include <string>
#include <vector>

using namespace std;

string solution(string myString)
{
    string answer = "";
	for (size_t i = 0; i < myString.length(); i++)
	{
		myString[i] = toupper(myString[i]);
	}
	answer = myString;
    return answer;
}