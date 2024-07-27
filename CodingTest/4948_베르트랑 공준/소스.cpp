#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int Start;
	int End;
	int Result = 0;
	while (true)
	{
		std::cin >> Start;
		if (0 == Start)
		{
			break;
		}

		End = Start * 2;
		bool Check = false;

		// 소수를 구하는 공식 2부터 본인 - 1 까지 나누어 떨어지는 수가 있다면 소수가 아닌 것
		// 나누어 떨어지는 수가 있다면 소수 인 것
		for (int i = Start + 1; i <= End; i++)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					Check = true;
					break;
				}
			}
			
			// 모든 수로 나누어 떨어지지 않을 때 마다 체크 후 카운트 
			if (false == Check)
			{
				++Result;
			}
			else
			{
				Check = false;
			}
		}

		std::cout << Result << std::endl;
		Result = 0;
	}
	
	return 0;
}