
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* create();
void preorder(struct Node *root);
void inorder(struct Node *root);
void postorder(struct Node *root);

int main() {
    struct Node *root;
    root = create();

    printf("\n--- Results ---\n");

    printf("Preorder:  ");
    preorder(root);
    printf("\n");

    printf("Inorder:   ");
    inorder(root);
    printf("\n");

    printf("Postorder: ");
    postorder(root);
    printf("\n");

    return 0;
}

struct Node* create() {
    int ch, val;
    printf("\nPress -1 to exit, any other number to continue: ");
    scanf("%d", &ch);

    if (ch == -1) {
        return NULL; // Correct way to signal an empty child
    } else {
        struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data: ");
        scanf("%d", &val);
        temp->data = val;

        printf("Left child of %d: ", val);
        temp->left = create();

        printf("Right child of %d: ", val);
        temp->right = create();

        return temp;
    }
}

void preorder(struct Node *root) {
    if (root == NULL) return;
    printf("%d ", root->data); // Space added for readability
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct Node *root) {
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data); // Space added for readability
    inorder(root->right);
}

void postorder(struct Node *root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data); // Space added for readability
}
 
