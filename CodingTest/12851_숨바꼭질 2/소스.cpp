#include <iostream>
#include <vector>
#include <queue>

std::vector<int> Road;
std::vector<bool> Visited;

int count = 0;

std::vector<int> counts;

void bfs(int startidx)
{
	std::queue<int> q;
	q.push(startidx);
	Visited[startidx] = true;

	while (false == q.empty())
	{
		int current = q.front();
		q.pop();
		
		
		
	}

	counts.push_back(count);
}



int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int N, K;
	std::cin >> N >> K;
	Road.resize(K);
	Visited.resize(K);
	for (size_t i = 0; i < Road.size(); i++)
	{
		Road[i] = i + 1;
	}

	bfs(N - 1);

	return 0;
}