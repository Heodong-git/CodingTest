#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
#include <algorithm>

std::vector<std::pair<int, int>> graph[51];
int dist[51];
int N, K;

void Dijkstra(int startnode)
{
	std::fill(dist, dist + 51, INT_MAX);
	std::priority_queue<std::pair<int, int>> pq;
	dist[startnode] = 0;
	pq.push(std::make_pair(-dist[startnode], startnode));
	
	while (!pq.empty())
	{
		std::pair<int, int> p = pq.top();
		pq.pop();

		int currentnode = p.second;
		int currentcost = -p.first;

		if (currentcost > dist[currentnode])
		{
			continue;
		}

		int size = graph[currentnode].size();
		for (int i = 0; i < size; i++)
		{
			int nextcost = graph[currentnode][i].second;
			int nextnode = graph[currentnode][i].first;

			int addcost = nextcost + currentcost;
			// �� �������� ���� 
			if (addcost < dist[nextnode])
			{
				dist[nextnode] = addcost;
				pq.push(std::make_pair(-dist[nextnode], nextnode));
			}
		}
	}
}

int solution(int N, std::vector<std::vector<int>> road, int K) 
{
	int answer = 0;
	for (int i = 1; i <= road.size(); i++)
	{
		std::vector<int> v = road[i - 1];
		// v0 : ���1 , v1 : ���2, v2 : ���� �ڽ�Ʈ
		graph[v[0]].push_back(std::make_pair(v[1], v[2]));
		graph[v[1]].push_back(std::make_pair(v[0], v[2]));
	}

	Dijkstra(1);

	// �ٵ������� dist �ݺ����Ƽ� �ڽ�Ʈ�� K ������ �͵鸸 ī��Ʈ �ؼ� ���
	for (int i = 1; i < 51; i++)
	{
		if (dist[i] <= K)
		{
			++answer;
		}
	}

	return answer;
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	solution(5, { {1, 2, 1}, {2, 3, 3}, {5, 2, 2}, {1, 4, 2}, {5, 3, 1}, {5, 4, 2} }, 3);

	return 0;
}