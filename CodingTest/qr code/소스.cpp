#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code)
{
    string answer = "";
	for (size_t i = 0; i < code.size(); i++)
	{
		if (i % q == r) 
		{
			answer += code[i];
		}
	}

    return answer;
}