#include <iostream>
#include <queue>
#include <vector>
#include <set>

std::vector<std::set<int>> graph;
std::vector<bool> visited;

int N, M, V;

void dfs(const int startnode)
{
	// 시작위치를 방문상태로 변경
	visited[startnode] = true;
	std::cout << startnode + 1 << ' ';
	
	std::set<int> s = graph[startnode];
	std::set<int>::iterator startiter = s.begin();
	std::set<int>::iterator enditer = s.end();

	for (; startiter != enditer; ++startiter)
	{
		int nextnode = *startiter;
		
		// 방문상태가 아닐 때만 재귀호출
		if (false == visited[nextnode])
		{
			dfs(nextnode);
		}
	}
}


void bfs(int startnode)
{
	// 방문상태로 변경 
	visited[startnode] = true;

	// 큐에 추가
	std::queue<int> q;
	int node = startnode;
	q.push(startnode);

	std::cout << node + 1 << ' ';

	while (false == q.empty())
	{
		int curnode = q.front();
		q.pop();

		std::set<int> s = graph[curnode];
		std::set<int>::iterator startiter = s.begin();
		std::set<int>::iterator enditer = s.end();

		for (; startiter != enditer; ++startiter)
		{
			if (true == visited[(*startiter)])
			{
				continue;
			}

			visited[(*startiter)] = true;

			// 큐에 추가 
			q.push(*startiter);
			std::cout << (*startiter) + 1 << ' ';
		}
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> N >> M >> V;
	graph.resize(N);
	visited.resize(N);

	for (int i = 0; i < M; i++)
	{
		int node1, node2;
		std::cin >> node1 >> node2;

		--node1;
		--node2;

		graph[node1].insert(node2);
		graph[node2].insert(node1);
	}

	dfs(V - 1);

	std::cout << std::endl;
	visited.clear();
	visited.resize(N);

	bfs(V - 1);

	return 0;
}