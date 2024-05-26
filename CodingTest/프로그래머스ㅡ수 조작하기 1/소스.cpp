#include <string>
#include <vector>

using namespace std;

int solution(int n, string control)
{
    int answer = 0;
	for (size_t i = 0; i < control.size(); i++)
	{
		char Text = control[i];
		if (Text == 'w')
		{
			n += 1;
		}
		if (Text == 's')
		{
			n -= 1;
		}
		if (Text == 'd')
		{
			n += 10;
		}
		if (Text == 'a')
		{
			n -= 10;
		}
	}

	answer = n;

    return answer;
}