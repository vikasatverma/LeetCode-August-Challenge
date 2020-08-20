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
    ListNode* reorderList(ListNode* head) {
        if(!head)
            return head;
        vector<ListNode*> v;
        auto f=head;
        int i;
        for(i=0; f ; i++){
            v.push_back(f);
            f=f->next;
        }
        int s=i;
        for(i=0;i<s/2;i++){
            v[i]->next=v[s-(i+1)];
            v[s-(i+1)]->next = v[i+1];
        }
        v[i]->next=NULL;
        // cout<<v[1]->val;
        return head;
    }
};
