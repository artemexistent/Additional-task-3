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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ans = new ListNode(0);
         ListNode *q,*w,*curr;
        int z=0;
        q=l1;
        w=l2;
        curr=ans;
        bool f1=0,f2=0;
        while (q->next != nullptr || w->next!=nullptr) {
            int x=(q->val != 0)? q->val : 0;
            int y=(w->val != 0)? w->val : 0;
            if (f1==1) x=0;
            if (f2==1) y=0;
            x+=y+z;
           // cout << x << " ";
            z=x/10;
            curr->next=new ListNode(x%10);
            curr=curr->next;
            if (q->next!=nullptr) q=q->next; else f1=1;
            if (w->next!=nullptr) w=w->next; else f2=1;
        }
        int x=(q->val != 0)? q->val : 0;
        int y=(w->val != 0)? w->val : 0;
        if (f1==1) x=0;
        if (f2==1) y=0;
        x+=y+z;
        z=x/10;
        curr->next=new ListNode(x%10);
        curr=curr->next;
        if (z>0)
            curr->next=new ListNode(z);
        return ans->next;
    }
};
