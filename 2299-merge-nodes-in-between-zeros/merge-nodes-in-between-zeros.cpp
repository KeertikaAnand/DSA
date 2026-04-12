/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* move=head->next;
        while(move->next!=NULL){
            if(move->val!=0){
                temp->val+=move->val;
                move=move->next;
                temp->next=move;
            }
            else{
                temp=move;
                move=move->next;
            }

        }
        temp->next=NULL;
        return head;
    }
};