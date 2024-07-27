#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int dirX[4] = { 1, -1, 0, 0 };
int dirY[4] = { 0, 0 , 1, -1 };

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int R, C, N;
	std::cin >> R >> C >> N;

	std::vector<std::vector<char>> map = std::vector<std::vector<char>>(R, std::vector<char>(C));
	std::vector<std::vector<int>> boomcheck = std::vector<std::vector<int>>(R, std::vector<int>(C));

	// 가장 처음 설치 
	for (int i = 0; i < map.size(); i++)
	{
		for (int j = 0; j < map[i].size(); j++)
		{
			char c;
			std::cin >> c;
			map[i][j] = c;
			if ('O' == map[i][j])
			{
				boomcheck[i][j] = 3;
			}
		}
	}

	int count = 0;
	while (true)
	{
		if (count == N)
		{
			// 출력 
			for (int i = 0; i < map.size(); i++)
			{
				for (int j = 0; j < map[i].size(); j++)
				{
					printf("%c", map[i][j]);
				}

				printf("\n");
			}
		}


		for (int i = 0; i < boomcheck.size(); i++)
		{
			for (int j = 0; j < boomcheck[i].size(); j++)
			{
				if (0 != boomcheck[i][j])
				{
					--boomcheck[i][j];
				}
			}
		}

		++count;

		// 1초가 지났을 때 전맵에 폭탄설치 후 카운트 추가
		if (count > 1 && count % 2 == 0)
		{
			for (int i = 0; i < map.size(); i++)
			{
				for (int j = 0; j < map[i].size(); j++)
				{
					if ('O' != map[i][j])
					{
						map[i][j] = 'O';
						boomcheck[i][j] = 3;
					}
				}
			}
		}
		else
		{
			// 폭파 
			for (int i = 0; i < map.size(); i++)
			{
				for (int j = 0; j < map[i].size(); j++)
				{
					if ('O' == map[i][j] && 0 == boomcheck[i][j])
					{
						map[i][j] = '.';
						for (int n = 0; n < 4; n++)
						{
							if (i + dirY[n] >= 0 && i + dirY[n] < map.size() && j + dirX[n] >= 0 && j + dirX[n] < map.size())
							{
								int curYidx = i + dirY[n];
								int curXidx = j + dirX[n];

								map[curYidx][curXidx] = '.';
								boomcheck[curYidx][curXidx] = 0;
							}
						}
					}
				}
			}
		}
	}


	return 0;
}