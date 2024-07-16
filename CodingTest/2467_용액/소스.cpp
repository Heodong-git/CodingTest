#include <iostream>
#include <vector>
#include <map>
#include <limits.h>

std::vector<int> solutions;

int main()
{
	int N;
	std::cin >> N;
	solutions.reserve(N);
	for (int i = 0; i < N; i++)
	{
		int value;
		std::cin >> value;
		solutions.push_back(value);
	}
	
	int leftidx = 0;
	int rightidx = solutions.size() - 1;

	int min = INT_MAX;
	int target = 0;
	int first = 0;
	int second = 0;

	while (leftidx < rightidx)
	{
		int sum = solutions[leftidx] + solutions[rightidx];
		int diff = abs(sum - target);
		
		if (min >= diff)
		{
			min = diff;
			first = solutions[leftidx];
			second = solutions[rightidx];
		}
		
		if (sum < 0)
		{
			++leftidx;
		}
		else
		{
			--rightidx;
		}
	}

	std::cout << first << second;

	return 0;
}