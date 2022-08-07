#include <iostream>
#include "Tree.h"

int main() {
	std::vector<int>nums{ 1,3,6,7,3,7,8,102,5,7,2,6,10 };

	std::sort(nums.begin(), nums.end());
	Tree* root = Tree::createTree(nums, 0, nums.size() - 1);

	std::vector<int> queries{ 1, 45, 87, 102, 4, 10, 18 };

	for (auto q : queries)
		std::cout << root->search(root, q) << std::endl;


	return 0;
}