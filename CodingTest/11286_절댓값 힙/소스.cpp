#include <iostream>
#include <queue>
#include <vector>

struct Node
{
	int Value;
	int absValue;
};

struct compare
{
	bool operator()(const Node& FirstNode, const Node& SecondNode)
	{
		bool result = false;
		if (FirstNode.absValue == SecondNode.absValue)
		{
			if (FirstNode.Value > SecondNode.Value)
			{
				result = true;
			}
		}

		if (FirstNode.absValue > SecondNode.absValue)
		{
			result = true;
		}

		return result;
	}
};

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	std::priority_queue<Node, std::vector<Node>, compare> pq;

	int N;
	std::cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int X;
		std::cin >> X;

		// X가 0 이 아닐 때 
		if (X != 0)
		{
			// 배열에 값 추가 
			Node element;
			element.absValue = abs(X);
			element.Value = X;
			pq.push(element);
		}
		// X가 0 일 때 
		else if (X == 0)
		{
			// 비어있다면 0 출력 
			if (true == pq.empty())
			{
				std::cout << 0 << std::endl;
			}
			else
			{
				// 배열에서 절댓값이 가장 작은 값을 출력하고, 그 값을 배열에서 제거 
				Node element = pq.top();
				std::cout << element.Value << std::endl;
				pq.pop();
			}
		}
	}

	return 0;
}