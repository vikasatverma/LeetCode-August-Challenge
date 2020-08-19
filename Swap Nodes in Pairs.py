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
    ListNode* swapPairs(ListNode* head) {
        auto f=head,ret=head;
        if(head && head->next)
            ret = head->next;
        else
            return ret;
        auto s=head->next;
        
        
        while(s){
            ListNode* t=s->next;
            s->next=f;
            if(t && t->next){
                f->next = t->next;
            }
            else if(f)
                f->next = t;
            f=t;
            
            if(f) s=f->next;
            else break;
        }
        
        
        
        return ret;
    }
};
