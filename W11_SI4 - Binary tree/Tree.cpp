#include "Tree.h"

Tree::Tree(int n)
{
	value = n;
}

Tree::~Tree()
{
	delete left;
	delete right;
}

bool Tree::search(Tree* node, int toFind)
{
	if (node == nullptr)
		return false;
	if (node->value == toFind)
		return true;
	if (node->value > toFind)
		return search(node->left, toFind);
	return search(node->right, toFind);
}

Tree* Tree::createTree(std::vector<int>& elements, int l, int r)
{
	if (l > r)
		return nullptr;

	int middle = (l + r) / 2;

	Tree* res = new Tree(elements[middle]);
	res->left = createTree(elements, l, middle - 1);
	res->right = createTree(elements, middle + 1, r);

	return res;
}

