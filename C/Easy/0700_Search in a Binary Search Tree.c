/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* searchBST(struct TreeNode* root, int val){
    struct TreeNode* result = root;
    while( result ){
        if( result->val == val ){
            break;
        }
        else if( result->val > val  ){
            result = result->left;
        }
        else{
            result = result->right;
        }
    }
    
    
    return result;
}