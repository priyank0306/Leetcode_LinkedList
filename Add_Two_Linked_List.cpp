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
        
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        int sum=0;
        int carry=0;
        ListNode* temp=new ListNode();
        ListNode* ans=temp;
     while(temp1!=NULL || temp2!=NULL || carry!=0)
     {         
         if(temp1!=NULL)
         { 
          sum=sum+temp1->val;
          temp1=temp1->next;
         }
         if(temp2!=NULL)
         {
             sum=sum+temp2->val;
             temp2=temp2->next;}
             
         sum=sum+carry;
         
         if(sum>9)
         {
             carry=1;
             sum=sum-10;
}
         else
         {
             carry=0;
}
     temp->val=sum;
         sum=0;
     if(temp1!=NULL || temp2!=NULL || carry!=0)
     {
     temp->next=new ListNode();
     temp=temp->next;
     }
    
}
       
        if(carry!=0)
        {
            temp->next=new ListNode();
            temp=temp->next;
            temp->val=carry;
}
     return ans;       
    }
    
};