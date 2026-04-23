#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

// Function to create a new node
struct Node* newNode(int val) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = val;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to insert a value into the BST
struct Node* insert(struct Node* root, int val) {
    // If the tree/branch is empty, put the new node here
    if (root == NULL) return newNode(val);

    // Otherwise, recur down the tree
    if (val < root->data) {
        root->left = insert(root->left, val);
    } else if (val > root->data) {
        root->right = insert(root->right, val);
    }
    return root;
}

// Function to search for a value
struct Node* search(struct Node* root, int key) {
    if (root == NULL || root->data == key) return root;
    
    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}

void inorder(struct Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main() {
    struct Node* root = NULL;
    
    // Inserting values
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Inorder traversal of BST always gives sorted output
    printf("Inorder traversal (sorted): ");
    inorder(root); 
    printf("\n");

    return 0;
}
