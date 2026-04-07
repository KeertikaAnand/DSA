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
    bool hasCycle(ListNode *head) {
        //optimal approch:tortoise and hare
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
       /* unordered_map<ListNode* ,int> lookup;
        ListNode* temp=head;
        while(temp!=NULL){
            if(lookup.contains(temp)){
                return true;
            }
            lookup[temp]++;
            temp=temp->next;
        }
        return false;*/
        
    }
};