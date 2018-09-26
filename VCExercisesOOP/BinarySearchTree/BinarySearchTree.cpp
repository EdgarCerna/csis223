// BinarySearchTree.cpp : Defines the entry point for the console application.
//	
#include "stdafx.h"
#include <iostream>

using namespace std;

struct TreeNode
{
	int			value;
	TreeNode*	left  = nullptr;
	TreeNode*	right = nullptr;
};

TreeNode*	insertNode(TreeNode* root, int val);
TreeNode*	findNode(TreeNode* root, int val);
void		findNodeDisplay(TreeNode* rt, int val);
void		displayNodeValue(TreeNode* node);
void		preOrderTraversal(TreeNode* node);
void		inOrderTraversal(TreeNode* node);
void		postOrderTraversal(TreeNode* node);
int			treeHeight(TreeNode* node);
void		deleteEntireTree(TreeNode* node);

int main()
{
	TreeNode*	root = nullptr;
	
	displayNodeValue(root);

	root = insertNode(root, 27);

	displayNodeValue(root);

	root = insertNode(root, 88);
	root = insertNode(root, 77);
	root = insertNode(root, 6);
	root = insertNode(root, 28);
	root = insertNode(root, 14);
	root = insertNode(root, 125);
	root = insertNode(root, 0);
	root = insertNode(root, 61);
	root = insertNode(root, -4);
	root = insertNode(root, 201);
	root = insertNode(root, 18);
	root = insertNode(root, 33);
	root = insertNode(root, -22);
	root = insertNode(root, 100);

	findNodeDisplay(root, -22);
	findNodeDisplay(root, 18);
	findNodeDisplay(root, 61);
	findNodeDisplay(root, 201);
	findNodeDisplay(root, -44);
	findNodeDisplay(root, 0);
	findNodeDisplay(root, 299);
	findNodeDisplay(root, 6);
	findNodeDisplay(root, 7);
	findNodeDisplay(root, 33);

	cout << endl << endl << "  Height of tree:  " << treeHeight(root) << endl;
	
	cout << endl << endl << "PreOrder traversal:"   << endl << endl;
	preOrderTraversal(root);

	cout << endl << endl << "InOrder traversal:"    << endl << endl;
	inOrderTraversal(root);

	cout << endl << endl << "PostOrder traversal:"  << endl << endl;
	postOrderTraversal(root);

	deleteEntireTree(root);		// free memory allocated for tree nodes


	cout << endl << endl << endl;
	system("pause");
	return 0;
}

TreeNode*	insertNode(TreeNode *rt, int val)
{
	if (rt == nullptr)
	{
		rt = new TreeNode;
		rt->value = val;
	}
	else
	{
		if (val < rt->value)
			rt->left = insertNode(rt->left, val);
		else
			if (val > rt->value)
				rt->right = insertNode(rt->right, val);
	}
	return rt;
}

void		findNodeDisplay(TreeNode *rt, int val)
{
	TreeNode*	node;

	node = findNode(rt, val);

	if (node == nullptr)
		cout << endl << " value not found:  " << val << endl;
	else
		cout << endl << "node value found:  "  << node->value << endl;
}

TreeNode*	findNode(TreeNode* rt, int val)
{
	if (rt == nullptr)
		return nullptr;
	if (val < rt->value)
		return findNode(rt->left, val);
	else
		if (val > rt->value)
			return findNode(rt->right, val);
	return rt;		// when val == rt->value
}

void		displayNodeValue(TreeNode* node)
{
	if (node == nullptr)
		cout << endl << "Empty binary tree"  << endl;
	else
		cout << endl << "node value is " << node->value << endl;
}

void		preOrderTraversal(TreeNode* node)
{
	if (node)
	{
		cout << "  " << node->value;
		preOrderTraversal(node->left);
		preOrderTraversal(node->right);
	}
}

void		inOrderTraversal(TreeNode* node)
{
	if (node)
	{
		inOrderTraversal(node->left);
		cout << "  "  << node->value;
		inOrderTraversal(node->right);
	}
}

void		postOrderTraversal(TreeNode* node)
{
	if (node)
	{
		postOrderTraversal(node->left);
		postOrderTraversal(node->right);
		cout << "  "  <<   node->value;
	}
}

int			treeHeight(TreeNode* rt)
{
	int		leftHeight;
	int		rightHeight;

	if (rt == nullptr)
		return 0;
	else
	{	// calculate depth of each subtree
		leftHeight  = treeHeight(rt->left);
		rightHeight = treeHeight(rt->right);
	}

	if (leftHeight > rightHeight)
		return leftHeight + 1;
	else
		return rightHeight + 1;
}

void		deleteEntireTree(TreeNode* node)
{
	if (node == nullptr)
		return;
	deleteEntireTree(node->left);
	deleteEntireTree(node->right);
	delete node;
}


