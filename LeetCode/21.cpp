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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        ListNode* curr=ans;
        bool f1=true,f2=true;
        if (l1==0 && l2==0)
            return 0;
        if (l1==0)
            return l2;
        if (l2==0)
            return l1;
            
        while (true){
            int a=INT_MAX,b=INT_MAX;
            a=l1->val;
            b=l2->val;
            ListNode* q =new ListNode(min(a,b));
            curr->next=q;
            curr=curr->next;
            if (a<b){
                if (l1->next==nullptr){
                    curr->next=l2;
                    return ans->next;
                }
                l1=l1->next;
            }else {
                if (l2->next==nullptr){
                    curr->next=l1;
                    return ans->next;
                }
                l2=l2->next;
            }
        }
        
        return ans;
    }
};
