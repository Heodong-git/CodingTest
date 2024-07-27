#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
#include <limits.h>

std::vector<std::pair<int,int>> graph[1001];
int dist[1001];
int savecost[1001];

int Dijkstra(int startnode, int endnode)
{
	std::fill(dist, dist + 1001, INT_MAX);
	std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
	// ���۳�� ����ġ�� 0 ���� ť�� push
	pq.push(std::make_pair(0, startnode));

	// 0�� ����� ����ġ�� 0���� �ʱ�ȭ 
	dist[startnode] = 0;
	
	// ť�� ������� �ʴٸ� �ݺ� 
	while (false == pq.empty())
	{
		// ����ġ, ����ȣ 
		std::pair<int, int> p = pq.top();
		int curnode = p.second;
		int curcost = p.first;
		pq.pop();

		if (curcost >= dist[curnode])
		{
			continue;
		}

		// ���� ��� ��尡 ����Ǿ��ִ��� �޾ƿ���
		int size = static_cast<int>(graph[curnode].size());
		for (int i = 0; i < size; i++)
		{
			int nextnode = graph[curnode][i].first;
			int nextcost = graph[curnode][i].second + curcost;

			if (dist[nextnode] > nextcost)
			{
				pq.push(std::make_pair(nextcost, nextnode));
				dist[nextnode] = nextcost;
			}
		}
	}

	return dist[endnode];
}

int main()
{
	int N, M, X;
	std::cin >> N >> M >> X;
	for (int i = 0; i < N; i++)
	{
		graph[i].reserve(N);
	}

	for (int i = 0; i < M; i++)
	{
		int nodeA, nodeB, cost;
		std::cin >> nodeA >> nodeB >> cost;
		graph[nodeA].push_back(std::make_pair(nodeB, cost));
	}
	
	// ���۳����� X �� �������� ���ͽ�Ʈ�� ����
	for (int i = 1; i <= N; i++)
	{
		savecost[i] = Dijkstra(i, X);
	}

	int result = 0;
	// ������ ������ �ٽ� �������� ���ͽ�Ʈ�� ����
	for (int i = 1; i <= N; ++i)
	{
		savecost[i] += Dijkstra(X, i);
		result = std::max(result, savecost[i]);
	}
	
	return 0;
}