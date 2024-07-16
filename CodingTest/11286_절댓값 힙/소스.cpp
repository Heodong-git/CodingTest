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

		// X�� 0 �� �ƴ� �� 
		if (X != 0)
		{
			// �迭�� �� �߰� 
			Node element;
			element.absValue = abs(X);
			element.Value = X;
			pq.push(element);
		}
		// X�� 0 �� �� 
		else if (X == 0)
		{
			// ����ִٸ� 0 ��� 
			if (true == pq.empty())
			{
				std::cout << 0 << std::endl;
			}
			else
			{
				// �迭���� ������ ���� ���� ���� ����ϰ�, �� ���� �迭���� ���� 
				Node element = pq.top();
				std::cout << element.Value << std::endl;
				pq.pop();
			}
		}
	}

	return 0;
}