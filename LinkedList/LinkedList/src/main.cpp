#include <iostream>
#include <vector>

struct Node
{
	Node(int value = 0)
	{
		mValue = value;
		mNext = nullptr;
	}

	int mValue;
	Node* mNext;
};

class MyList
{
public:
	MyList()
	{
		// Initialize the member value (mpHead, mpTail)
	}

	~MyList()
	{
		// Destroy the memory
	}

	void Create(int value = 0)
	{
		mpHead = new Node(value);
		mpHead->mNext = nullptr;
		mpTail = mpHead;
	}

	MyList& Add(int value)
	{
		Node* ptr = mpTail;
		ptr->mNext = new Node(value);
		mpTail = ptr->mNext;
		return *this;
	}

	void Delete(int value) 
	{
		// Find the nodes whose mValue = value and delete them
	}

	void Delete(Node* pToDelete) 
	{
		// Delete the node by the paremeter Node* pToDelete
	}

	std::vector<Node*> Find(int value) 
	{
		// Find nodes whose mValue = value, and push the node points into a vector and return it
		std::vector<Node*> result;


		return result;
	}

	Node* FindMiddleNode() 
	{
		// Find the middle node then return the point, if having two nodes, return the left one
	}

	void Print()
	{
		Node* ptr = mpHead;
		while (ptr != nullptr)
		{
			std::cout << ptr->mValue << " ";
			ptr = ptr->mNext;
		}
	}

private:
	Node* mpHead;
	Node* mpTail;
};

int main()
{
	MyList list;
	list.Create(1);
	list.Add(3).Add(55).Add(13).Add(99).Add(192);
	list.Print();
	return 0;
}