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
    ListNode* middleNode(ListNode* head) {
        ListNode *curr= head;
     
        int count=0;
        while(curr!=NULL)
        {
            count++;
            curr=curr->next;
        }
        int t=count/2;
        curr= head;
        while(t--)
        {
            curr=curr->next;
        }
           ListNode *head1=curr;

        return head1;
        
    }
};