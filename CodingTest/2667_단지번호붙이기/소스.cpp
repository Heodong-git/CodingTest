#include <iostream>
#include <queue>
#include <utility>
#include <memory.h>
#include <vector>
#include <algorithm>

char Map[26][26] = { };
bool Visited[26][26] = { };

int count = 1;

int N;
std::vector<int> v;

int dirX[4] = { 0, 0, 1, -1 };
int dirY[4] = { 1, -1, 0, 0 };

void bfs(const int i, const int j)
{
	Visited[i][j] = true;
	std::queue<std::pair<int, int>> q;
	std::pair<int, int> p = { i , j };
	q.push(p);

	while (false == q.empty())
	{
		std::pair<int, int> current = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			std::pair<int, int> next = { current.first + dirY[i] , current.second + dirX[i] };
			if (next.first < 0 || next.first >= N || next.second < 0 || next.second >= N)
			{
				continue;
			}
			else if (Map[next.first][next.second] == '0')
			{
				continue;
			}
			else if (true == Visited[next.first][next.second])
			{
				continue;
			}

			Visited[next.first][next.second] = true;
			q.push(next);
			++count;
		}
	}
	
	v.push_back(count);
	count = 1;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	
	std::cin >> N;

	for (int i = 0; i < N; i++)
	{
		char c = ' ';
		for (int j = 0; j < N; j++)
		{
			std::cin >> c;
			Map[i][j] = c;
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if ('1' == Map[i][j] && false == Visited[i][j])
			{
				bfs(i, j);
			}
		}
	}

	std::cout << v.size() << std::endl;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << std::endl;
	}

	return 0;
}