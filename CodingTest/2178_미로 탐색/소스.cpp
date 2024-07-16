#include <iostream>
#include <queue>
#include <utility>

char Maze[101][101];
bool Visited[101][101];
int Dist[101][101] = {};


int dirX[4] = { 0, 0, 1, -1 };
int dirY[4] = { 1, -1, 0, 0 };

int N, M;
void bfs(const int i, const int j)
{
	Visited[i][j] = true;
	std::queue<std::pair<int, int>> q;
	std::pair<int, int> p = { i , j };
	q.push(p);

	while (false == q.empty())
	{
		std::pair<int, int> currentpos = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			std::pair<int, int> nextpos = { currentpos.first + dirY[i], currentpos.second + dirX[i] };
			if (nextpos.first < 0 || nextpos.first >= N || nextpos.second < 0 || nextpos.second >= M)
			{
				continue;
			}
			else if (Maze[nextpos.first][nextpos.second] == '0')
			{
				continue;
			}
			else if (Visited[nextpos.first][nextpos.second] == true)
			{
				continue;
			}
			
			Visited[nextpos.first][nextpos.second] = true;
			Dist[nextpos.first][nextpos.second] = Dist[currentpos.first][currentpos.second] + 1;
			q.push(nextpos);
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		char c = ' ';
		for (int j = 0; j < M; j++)
		{
			std::cin >> c;
			Maze[i][j] = c;
		}
	}

	Dist[0][0] = 1;
	bfs(0, 0);

	std::cout << Dist[N - 1][M - 1];
	return 0;
}