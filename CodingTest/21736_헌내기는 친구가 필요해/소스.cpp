#include <iostream>
#include <queue>
#include <utility>

char Road[601][601];
bool Visited[601][601];

int result = 0;

int dirX[4] = { 0, 0, 1, -1 };
int dirY[4] = { 1, -1, 0, 0 };

int N, M;

void bfs(const int i, const int j)
{
	// ���ڷ� ���� ��ġ�� �湮���·� ���� 
	Visited[i][j] = true;

	std::queue<std::pair<int, int>> q;
	std::pair<int, int> p = { i, j };
	q.push(p);

	while (false == q.empty())
	{
		std::pair<int, int> currentpos = q.front();
		q.pop();

		// 4���� üũ 
		for (int i = 0; i < 4; i++)
		{
			std::pair<int, int> nextpos = { currentpos.first + dirY[i], currentpos.second + dirX[i] };

			// �ε��� �ʰ� üũ
			if (nextpos.first < 0 || nextpos.first >= N || nextpos.second >= M || nextpos.second < 0)
			{
				continue;
			}
			// �� üũ 
			else if (Road[nextpos.first][nextpos.second] == 'X')
			{
				continue;
			}
			// �̹� �湮�ߴ��� üũ 
			else if (true == Visited[nextpos.first][nextpos.second])
			{
				continue;
			}
			// ��� �������� ī���� 
			else if (Road[nextpos.first][nextpos.second] == 'P')
			{
				++result;
			}
			
			q.push(nextpos);
			Visited[nextpos.first][nextpos.second] = true;
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
			Road[i][j] = c;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (Road[i][j] == 'I')
			{
				bfs(i, j);
			}
		}
	}

	if (0 == result)
	{
		std::cout << "TT" << std::endl;
	}
	else
	{
		std::cout << result;
	}
	return 0;
}