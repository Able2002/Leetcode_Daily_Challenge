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
    ListNode* reverse(ListNode* head){

        if(head==NULL || head->next==NULL){
            return head;
        }

         ListNode* tem=reverse(head->next);
         ListNode* g=head->next;
         g->next=head;
         head->next=NULL;
         return tem;

    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        l1=reverse(l1);
        l2=reverse(l2);

        int carry=0;
        ListNode* ans = new ListNode(0);
        ListNode* dumy=ans;

        while(l1!=NULL || l2!=NULL){
            int sum=0;
            sum+=carry;
            if(l1!=NULL){
                sum+=l1->val;
            }
            if(l2!=NULL){
                sum+=l2->val;
            }

            carry=sum/10;
            int num=sum%10;

            ListNode* d = new ListNode(num);
            ans->next= d;
            ans=ans->next;
           if(l1!=NULL){
            l1=l1->next;
           }
           if(l2!=NULL){
               l2=l2->next;
           }
        }
        if(carry>0){
              ListNode* d = new ListNode(carry);
            ans->next= d;
            ans=ans->next;
        }
       return reverse(dumy->next);
    }
};
