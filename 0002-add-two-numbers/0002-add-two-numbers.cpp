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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {  ListNode * newList=new ListNode(0);
        ListNode * dummy=newList;
        ListNode * temp1=l1;
        ListNode * temp2=l2;
        int carry=0;
        while(temp1!=NULL&&temp2!=NULL)
        {
            int sum=(temp1->val+temp2->val+carry)%10;
            carry=(temp1->val+temp2->val+carry)/10;
            ListNode *temp=new ListNode(sum,NULL);
            dummy->next=temp;
            dummy=dummy->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        while(temp1!=NULL)
        {
            int sum=(temp1->val+carry)%10;
            carry=(temp1->val+carry)/10;
            ListNode *temp=new ListNode(sum,NULL);
            dummy->next=temp;
            dummy=dummy->next;
            temp1=temp1->next;
        }
         while(temp2!=NULL)
        {
            int sum=(temp2->val+carry)%10;
            carry=(temp2->val+carry)/10;
            ListNode *temp=new ListNode(sum,NULL);
            dummy->next=temp;
            dummy=dummy->next;
            temp2=temp2->next;
        }
        if(carry==1)
        {
            ListNode *temp=new ListNode(1,NULL);
            dummy->next=temp;
            dummy=dummy->next;
        }
        return newList->next;
        delete dummy;
        
        
    }
};