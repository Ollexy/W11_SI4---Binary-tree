#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

class Tree
{
public:
	Tree* left;
	Tree* right;
	int value;

	Tree(int n);
	~Tree();
	bool search(Tree* node, int toFind);
	static Tree* createTree(std::vector<int>& elements, int l, int r);
};

