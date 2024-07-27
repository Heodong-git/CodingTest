#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

std::vector<std::pair<int, int>> map[1001];
int dist[1001];

int N, M, Start, End;

void Dijkstra(int startnode, int endnode)
{
	std::priority_queue<std::pair<int, int>> pq;
	std::fill(dist, dist + 1001, INT_MAX);
	dist[startnode] = 0;

	// 가중치와 노드번호 
	pq.push(std::make_pair(-1 * dist[startnode], startnode));
	
	while (!pq.empty())
	{
		std::pair<int, int> p = pq.top();
		int currentcost = -1 * p.first;
		int currentnode = p.second;
		pq.pop();

		if (currentcost > dist[currentnode])
		{
			continue;
		}

		int size = static_cast<int>(map[currentnode].size());
		for (int i = 0; i < size; i++)
		{
			int nextcost = map[currentnode][i].second;
			int nextnode = map[currentnode][i].first;

			int addcost = nextcost + currentcost;
			if (addcost < dist[nextnode])
			{
				dist[nextnode] = addcost;
				pq.push(std::make_pair(-1 * addcost, nextnode));
			}
		}
	}
}


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	// 노드개수 
	std::cin >> N;
	
	// 간선 개수 
	std::cin >> M;

	// 1번노드에서 2번노드까지의 비용이 2라는 뜻. 
	for (int i = 0; i < M; i++)
	{
		int linknode1, linknode2, cost;
		std::cin >> linknode1 >> linknode2 >> cost;
		map[linknode1].push_back(std::make_pair(linknode2, cost));
	}

	std::cin >> Start >> End;
	Dijkstra(Start, End);

	printf("%d", dist[End]);

	return 0;
}