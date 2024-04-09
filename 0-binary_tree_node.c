#include <stdio.h>
#include <stdlib.h>

/* Define the structure for a binary tree */
typedef struct TreeNode {
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
} TreeNode;

/* Function to create a new binary tree */
TreeNode* createNode(int data) {
	/* Allocate memory for a new node */
	TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));

	/*  Check if memory allocation */
	if (newNode == NULL) {
		printf("Memory allocation failed.\n");
		exit(1);
		/* Exit program if memory allocation failed */
	}

	/* Initialize the node with given data */
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;

	/* Return the newly created node */
	return newNode;
}

int main() {
	/* Usage of createNode function */
	TreeNode* root = createNode(5);
	root->left = createNode(3);
	root->right = createNode(8);

	/* Output the data of the root node */
	printf("Root Node: %d\n", root->data);
	printf("Left Child: %d\n", root->left->data);
	printf("Right Child: %d\n", root->right->data);

	/* Free  allocated memory */
	free(root->left);
	free(root->right);
	free(root);

	return 0;
}

