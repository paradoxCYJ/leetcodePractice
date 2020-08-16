/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

int* maxDepth(struct Node* root) {
    int tmp = 0;
    int result = 0;
    if (root == NULL) {
        return 0;
    }
    for ( int i = 0; i < root->numChildren; i++ ) {
        tmp = maxDepth( root->children[i] );
        result = tmp > result ? tmp : result;
    }
    return 1 + result;
}