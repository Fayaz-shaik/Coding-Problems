/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA ==NULL || headB == NULL){
            return NULL;
        }
        ListNode* aa = headA;
        ListNode* bb = headB;
        while(aa != bb){
            aa = (aa!=NULL) ? aa->next : headB;
            bb = (bb!=NULL) ? bb->next : headA;
        }
        return bb;
    }
};