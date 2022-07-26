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
    ListNode* partition(ListNode* head, int x) {
        vector<int>a;
        vector<int>y;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(temp->val>=x)
            {
                y.push_back(temp->val);
}
            else
            {
                a.push_back(temp->val);
}
            
        temp=temp->next;
}
        temp=head;
        int i=0;
        while(i<a.size())
        {
            temp->val=a[i];
            temp=temp->next;
            i++;
}
        i=0;
                while(i<y.size())
        {
            temp->val=y[i];
            temp=temp->next;
            i++;
}
        return head;
    }
};