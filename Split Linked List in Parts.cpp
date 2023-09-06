class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size = 0;
        ListNode* temp = head;
        vector<ListNode*> ans;
        while(temp!= NULL){
            temp=temp->next;
            size++;
        }
        int total_parts=size/k;
        int extra_parts=size%k;
        while(k--){
            int s=total_parts;

            if(extra_parts){
            s++;
            extra_parts--;
            }

            if(s==0){
                ans.push_back(NULL);
                continue;
            }

            ListNode* start=head;
            ListNode* prev=NULL;

            while(s-- && head!= NULL){
                    prev=head;
                    head=head->next;
            }
            if(prev!= NULL) prev->next=NULL;
            ans.push_back(start);

        }
        return ans;
    }
};
