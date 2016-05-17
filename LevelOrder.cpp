#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <queue>

struct BinaryTreeNode
{
	int _value;
	BinaryTreeNode* _left;
	BinaryTreeNode* _right;
};

void LevelOrder(BinaryTreeNode* pRoot)
{
	if (pRoot == NULL)
		return;
	//把根节点压入队列中
	queue<BinaryTreeNode*> q;
	q.push(pRoot);

	//一个数要队列时，先把他的左右插入队列中然后输出，再出队列
	//其他思路，先将要出队列的数保存起来，然后除队列，在输出值，再出入左右的节点
	while (!q.empty())
	{
		if (q.front()->_left != NULL)
		{
			q.push(q.front()->_left);
		}
		if (q.front()->_right != NULL)
		{
			q.push(q.front()->_right);
		}
		cout << q.front()->_value << " ";
		q.pop();
	}
	cout << endl;
}