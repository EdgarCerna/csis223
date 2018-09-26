// BinaryTree-Traversal.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

using namespace std;

struct TreeNode
{
	char		element;
	TreeNode*	left  = nullptr;
	TreeNode*	right = nullptr;
};

void		preOrderTraversal(TreeNode* node);
void		inOrderTraversal(TreeNode* node);
void		postOrderTraversal(TreeNode* node);
TreeNode*	buildEntireTree();

int main()
{
	TreeNode*	root;

	root = buildEntireTree();

	cout << endl << endl << "PreOrder traversal:"   << endl;
	preOrderTraversal(root);

	cout << endl << endl << "InOrder traversal:"    << endl;
	inOrderTraversal(root);

	cout << endl << endl << "PostOrder traversal:"  << endl;
	postOrderTraversal(root);

	cout << endl << endl;
	system("pause");
	return 0;
}

void		preOrderTraversal(TreeNode* node)
{
	if (node)
	{
		cout << "  " << node->element;
		preOrderTraversal(node->left);
		preOrderTraversal(node->right);
	}
}

void		inOrderTraversal(TreeNode* node)
{
	if (node)
	{
		inOrderTraversal(node->left);
		cout << "  "  << node->element;
		inOrderTraversal(node->right);
	}
}

void		postOrderTraversal(TreeNode* node)
{
	if (node)
	{
		postOrderTraversal(node->left);
		postOrderTraversal(node->right);
		cout << "  "  <<   node->element;
	}
}

TreeNode*	buildEntireTree()
{
	static TreeNode* aNode = new TreeNode;
	aNode->element = 'A';
	static TreeNode* bNode = new TreeNode;
	bNode->element = 'B';
	static TreeNode* cNode = new TreeNode;
	cNode->element = 'C';
	static TreeNode* dNode = new TreeNode;
	dNode->element = 'D';
	static TreeNode* eNode = new TreeNode;
	eNode->element = 'E';
	static TreeNode* fNode = new TreeNode;
	fNode->element = 'F';
	static TreeNode* gNode = new TreeNode;
	gNode->element = 'G';
	static TreeNode* hNode = new TreeNode;
	hNode->element = 'H';
	static TreeNode* iNode = new TreeNode;
	iNode->element = 'I';
	static TreeNode* jNode = new TreeNode;
	jNode->element = 'J';
	static TreeNode* kNode = new TreeNode;
	kNode->element = 'K';
	static TreeNode* lNode = new TreeNode;
	lNode->element = 'L';
	static TreeNode* mNode = new TreeNode;
	mNode->element = 'M';
	static TreeNode* nNode = new TreeNode;
	nNode->element = 'N';

	aNode->left  = bNode;
	aNode->right = iNode;
	bNode->left  = cNode;
	bNode->right = eNode;
	cNode->left  = dNode;
	eNode->right = fNode;
	fNode->left  = gNode;
	fNode->right = hNode;
	iNode->left  = jNode;
	iNode->right = kNode;
	kNode->left  = lNode;
	kNode->right = mNode;
	mNode->right = nNode;

	return aNode;
}

