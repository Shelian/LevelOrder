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
	//�Ѹ��ڵ�ѹ�������
	queue<BinaryTreeNode*> q;
	q.push(pRoot);

	//һ����Ҫ����ʱ���Ȱ��������Ҳ��������Ȼ��������ٳ�����
	//����˼·���Ƚ�Ҫ�����е�������������Ȼ������У������ֵ���ٳ������ҵĽڵ�
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