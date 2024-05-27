#include <string>
#include <vector>

using namespace std;

int solution(string num_str) 
{
    int answer = 0;
	for (size_t i = 0; i < num_str.length(); i++)
	{
		string str;
		str[0] = num_str[i];
		int value = stoi(str);
		answer += value;
	}
    return answer;
}

int main()
{
	solution("123456789");
	return 0;
}