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
    int findgcd(ListNode* temp){
        int a=temp->val;
        int b=temp->next->val;
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    void insertgcd(ListNode*temp,int b){
        ListNode* next=temp->next;
        temp->next=new ListNode(b,next);

    }
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp != NULL && temp->next != NULL)
{
            int n=findgcd(temp);
            insertgcd(temp,n);
            temp=temp->next->next;
        }
        return head;
    }
};