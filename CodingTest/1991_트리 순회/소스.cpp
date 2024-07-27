#include <iostream>
#include <map>

struct TreeNode
{
	char LeftNode;
	char RightNode;
};

std::map<char, TreeNode> m;

void PreOrder(char Node)
{
	if ('.' == Node)
	{
		return;
	}
	
	std::map<char, TreeNode>::iterator FindIter = m.find(Node);
	if (FindIter != m.end())
	{
		// ∑Á∆Æ øﬁ ø¿ 
		std::cout << Node;
		PreOrder((*FindIter).second.LeftNode);
		PreOrder((*FindIter).second.RightNode);
	}
}

void InOrder(char Node)
{
	if ('.' == Node)
	{
		return;
	}

	
	std::map<char, TreeNode>::iterator FindIter = m.find(Node);
	if (FindIter != m.end())
	{
		// øﬁ ∑Á∆Æ ø¿ 
		InOrder((*FindIter).second.LeftNode);
		std::cout << Node;
		InOrder((*FindIter).second.RightNode);
	}
}

void PostOrder(char Node)
{
	if ('.' == Node)
	{
		return;
	}

	std::map<char, TreeNode>::iterator FindIter = m.find(Node);
	if (FindIter != m.end())
	{
		// øﬁ ø¿ ∑Á∆Æ 
		PostOrder((*FindIter).second.LeftNode);
		PostOrder((*FindIter).second.RightNode);
		std::cout << Node;
	}
}


int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	
	int N;
	std::cin >> N;
	for (int i = 0; i < N; i++)
	{
		char Node;
		std::cin >> Node;

		TreeNode TNode;
		std::cin >> TNode.LeftNode;
		std::cin >> TNode.RightNode;
		m.insert(std::make_pair(Node, TNode));
	}

	PreOrder('A');
	std::cout << std::endl;
	InOrder('A');
	std::cout << std::endl;
	PostOrder('A');
	std::cout << std::endl;
	
	return 0;
}