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
    
    int delet (ListNode* &curr,int n){
        int kol=0;
        if (curr->next!=nullptr)
         kol=delet(curr->next,n);
        else return 1;
        if (kol==n){
            curr->next=curr->next->next;
        }
        return kol+1;
    }
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int kol =delet(head,n);
        if (kol==n)
            return head->next;
        return head;
    }
};
