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

		// �Ҽ��� ���ϴ� ���� 2���� ���� - 1 ���� ������ �������� ���� �ִٸ� �Ҽ��� �ƴ� ��
		// ������ �������� ���� �ִٸ� �Ҽ� �� ��
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
			
			// ��� ���� ������ �������� ���� �� ���� üũ �� ī��Ʈ 
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