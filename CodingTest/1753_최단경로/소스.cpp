#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
#include <algorithm>

std::vector<std::pair<int, int>> graph[20001];
int dist[20001];
int V, E, Start;

void Dijkstra(int startnode)
{
	std::fill(dist, dist + 20001, INT_MAX);
	std::priority_queue<std::pair<int, int>> pq;
	dist[startnode] = 0;
	pq.push(std::make_pair(-dist[startnode], startnode));

	while (!pq.empty())
	{
		std::pair<int, int> p = pq.top();
		int currentcost = -p.first;
		int currentnode = p.second;
		pq.pop();

		if (currentcost > dist[currentnode])
		{
			continue;
		}

		int size = graph[currentnode].size();
		for (int i = 0; i < size; i++)
		{
			int nextnode = graph[currentnode][i].first;
			int nextcost = graph[currentnode][i].second;

			int addcost = currentcost + nextcost;
			if (addcost < dist[nextnode])
			{
				dist[nextnode] = addcost;
				pq.push(std::make_pair(-dist[nextnode], nextnode));
			}
		}
	}
}


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::cin >> V >> E;
	std::cin >> Start;
	
	for (int i = 0; i < E; i++)
	{
		int node1, node2, cost;
		std::cin >> node1 >> node2 >> cost;
		graph[node1].push_back(std::make_pair(node2, cost));
	}

	Dijkstra(Start);

	for (int i = 1; i <= V; i++)
	{
		if (dist[i] == INT_MAX)
		{
			printf("INF\n");
			continue;
		}

		printf("%d\n", dist[i]);
	}

	return 0;
}