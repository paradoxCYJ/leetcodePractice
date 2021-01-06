/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* tmp = head;
    int count = 0;
    int index = 1;
    struct ListNode *freeNode;
    while( tmp ){
        count++;
        tmp = tmp->next;
    }
    
    if( count == 1 ){
        head = NULL;
        return head;
    }
    else if(n == count){
        freeNode = head;
        head = freeNode->next;
        free(freeNode);
        return head;
    }
    
    tmp = head;
    while( tmp ){
        if( index + n == count ){
            freeNode = tmp->next;
            tmp->next = freeNode->next;
            free(freeNode);
            break;
        }
        
        
        index++;
        tmp = tmp->next;
    }
    
    return head;
}
