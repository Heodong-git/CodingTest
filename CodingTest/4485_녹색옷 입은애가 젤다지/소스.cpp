#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>
// BFS 풀이 

//int N;
//std::vector<std::vector<int>> map;
//std::vector<std::vector<int>> visited;
//
//int dirX[4] = { 0, 0, 1, -1 };
//int dirY[4] = { 1, -1, 0, 0 };
//
//void bfs(int first, int second)
//{
//	visited[first][second] = map[first][second];
//	std::queue<std::pair<int, int>> q;
//	q.push({ first, second });
//
//	while (false == q.empty())
//	{
//		std::pair<int, int> p = q.front();
//		q.pop();
//		
//		for (int i = 0; i < 4; i++)
//		{
//			int curY = p.first;
//			int curX = p.second;
//			int nextY = curY + dirY[i];
//			int nextX = curX + dirX[i];
//
//			if (nextX < 0 || nextX >= N || nextY < 0 || nextY >= N)
//			{
//				continue;
//			}
//			else if (visited[nextY][nextX] <= map[nextY][nextX] + visited[curY][curX])
//			{
//				continue;
//			}
//			
//			visited[nextY][nextX] = map[nextY][nextX] + visited[curY][curX];
//			q.push({ nextY, nextX });
//		}
//	}
//}
//
//int main()
//{
//	int count = 1;
//
//	while (true)
//	{
//		std::cin >> N;
//
//		if (N == 0)
//		{
//			break;
//		}
//
//		map.resize(N);
//		visited.resize(N);
//		for (int i = 0; i < N; i++)
//		{
//			map[i].resize(N);
//			visited[i].resize(N);
//			for (int j = 0; j < N; j++)
//			{
//				std::cin >> map[i][j];
//				visited[i][j] = INT_MAX;
//			}
//		}
//
//		bfs(0, 0);
//		printf("Problem %d: %d\n", count, visited[N - 1][N - 1]);
//		++count;
//	}
//
//	
//
//	return 0;
//}

// 다익스트라 풀이 
//int N;
//std::vector<std::vector<int>> map;
//std::vector<std::vector<int>> dist;
//
//int dirY[4] = { 1, -1, 0, 0 };
//int dirX[4] = { 0, 0, 1, -1 };
//
//void Dijkstra()
//{
//	std::priority_queue<std::pair<int, std::pair<int, int>>> pq;
//	pq.push(std::make_pair(-1 * map[0][0], std::make_pair(0, 0)));
//	dist[0][0] = map[0][0];
//
//	while (false == pq.empty())
//	{
//		int y = pq.top().second.first;
//		int x = pq.top().second.second;
//		pq.pop();
//
//		for (int i = 0; i < 4; i++)
//		{
//			int nextY = y + dirY[i];
//			int nextX = x + dirX[i];
//			if (nextY < 0 || nextY >= N || nextX < 0 || nextX >= N)
//			{
//				continue;
//			}
//
//			int nextcost = map[nextY][nextX];
//			int prevcost = dist[nextY][nextX];
//			int curcost = dist[y][x] + nextcost;
//			if (curcost < prevcost)
//			{
//				dist[nextY][nextX] = curcost;
//				pq.push(std::make_pair(-curcost, std::make_pair(nextY, nextX)));
//			}
//		}
//	}
//}
//
//int main()
//{
//	int count = 1;
//
//	while (true)
//	{
//		std::cin >> N;
//		if (N == 0)
//		{
//			break;
//		}
//
//		map.resize(N);
//		dist.resize(N);
//		for (int i = 0; i < N; i++)
//		{
//			map[i].resize(N);
//			dist[i].resize(N);
//			for (int j = 0; j < N; j++)
//			{
//				std::cin >> map[i][j];
//				dist[i][j] = INT_MAX;
//			}
//		}
//
//		Dijkstra();
//		printf("Problem %d: %d\n", count, dist[N - 1][N - 1]);
//		++count;
//	}
//
//	
//	return 0;
//}

