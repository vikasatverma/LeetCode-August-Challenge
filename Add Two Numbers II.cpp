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
        int n1=0,n2=0,sum=0,len1,len2,rem=0;
        vector <int> v1,v2;
        while(l1!=NULL){
            // n1 *= 10;
            // n1 += l1->val;
            // len1++;
            v1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            // n2 *= 10;
            // n2 += l2->val;
            // len2++;
            v2.push_back(l2->val);
            l2  = l2->next;
            
        }
        
        // sum=n1+n2;
        
        // cout<<"sum = "<<sum<<endl;
        
        
        ListNode* head = NULL;
        int value;
        while(!v1.empty() && !v2.empty()){
            n1 = v1.back();
            v1.pop_back();
            n2 = v2.back();
            v2.pop_back();
                
            
            value = 0;
            // if(rem)
                value = (n1+n2+rem)%10;
            // else
            //     value = (n1+n2+rem);
            rem = (n1+n2+rem)/10;
            
            struct ListNode *ret = new ListNode(value,head);
            head = ret;
            // cout<<"\n"<<ret->val;
            // head = &ret;
            // sum/=10;
        }
        
        while(!v2.empty()){
            value = (v2.back() + rem)%10;
            rem = (v2.back() + rem)/10;
            v2.pop_back();
            struct ListNode *ret = new ListNode(value,head);
            head = ret;
        }
        
        while(!v1.empty()){
            cout<<"rem="<<rem;
            value = (v1.back() + rem)%10;
            rem = (v1.back() + rem)/10;
            
            v1.pop_back();
            struct ListNode *ret = new ListNode(value,head);
            head = ret;
        }
        
        if(rem){
            struct ListNode *ret = new ListNode(rem,head);
            head = ret;
        }
        
        if(head==NULL)
            return new ListNode(0,head);
        return head;
    }
};
