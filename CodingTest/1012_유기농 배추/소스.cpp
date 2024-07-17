#include <iostream>
#include <queue>
#include <utility>
#include <memory.h>

int Farm[51][51] = { };
bool Visited[51][51];

int count = 0;

int dirX[4] = { 0, 0, 1, -1 };
int dirY[4] = { 1, -1, 0, 0 };

int T, N, M, K;

void bfs(const int i, const int j)
{
	Visited[i][j] = true;
	std::pair<int, int> p = { i , j };
	std::queue<std::pair<int, int>> q;
	q.push(p);

	while (false == q.empty())
	{
		std::pair<int, int> current = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			std::pair<int, int> nextpos = { current.first + dirY[i], current.second + dirX[i] };

			if (nextpos.first < 0 || nextpos.first >= M || nextpos.second < 0 || nextpos.second >= N)
			{
				continue;
			}
			else if (Farm[nextpos.first][nextpos.second] == 0)
			{
				continue;
			}
			else if (true == Visited[nextpos.first][nextpos.second])
			{
				continue;
			}
						
			Visited[nextpos.first][nextpos.second] = true;
			q.push(nextpos);
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> T;
		
	for (int i = 0; i < T; i++)
	{
		std::cin >> M >> N;
		std::cin >> K;

		int Y, X;
		for (int j = 0; j < K; j++)
		{
			std::cin >> Y >> X;
			Farm[Y][X] = 1;
		}
		
		
		for (int j = 0; j < M; j++)
		{
			if (j == 4)
			{
				int a = 0;
			}

			for (int h = 0; h < N; h++)
			{
				if (0 == Farm[j][h])
				{
					continue;
				}
				else if(true != Visited[j][h])
				{
					++count;
					bfs(j, h);
				}
			}
		}

		std::cout << count << std::endl;
		count = 0;
		memset(Farm, 0, sizeof(Farm));
		memset(Visited, 0, sizeof(Visited));
	}

	return 0;
}