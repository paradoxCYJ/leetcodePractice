/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max( int x, int y ){
    return x > y ? x : y;
}
int findDiameter(struct TreeNode* root, int *diameter)
{   
    if (root == NULL)
        return 0;
    
    int leftDeep = findDiameter(root->left, diameter);
    int rightDeep = findDiameter(root->right, diameter);
    int currDiameter = leftDeep + rightDeep;
    
    *diameter = max(*diameter, currDiameter);
    return 1 + max(leftDeep, rightDeep);
}

int diameterOfBinaryTree(struct TreeNode* root)
{
    int diameter = 0;
    findDiameter(root, &diameter);
    return diameter;
}