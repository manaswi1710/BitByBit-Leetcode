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
    ListNode* deleteathead(ListNode* head) {
        ListNode* temp = head->next;
        head->next=NULL;
        delete(head);
        head=temp;
        return head;
    }

    ListNode* addattail(int val, ListNode* head) {
        ListNode* temp=head;
          while (temp->next!= NULL) {
            temp = temp->next;
        }
        ListNode* newnode = new ListNode(val);
        temp->next=newnode;
        return head;
    }

     ListNode* reverseList(ListNode* head) {
        stack<int>st;
        ListNode* temp=head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            temp->val=st.top();
            st.pop();
            temp=temp->next;
        }
        return head;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        if(head==NULL){
            return NULL;
        }
        else if(head->next==NULL){
            return head;
        }
        if (k == 0) {
            return head;
        }
         int c=0;
          while (temp->next!= NULL) {
            temp = temp->next;
            c++;
        }
        head=reverseList(head);

        while ((k%(c+1))!= 0) {
            head = addattail(head->val, head);
            head = deleteathead(head);
            k--;
        }

        head=reverseList(head);
        return head;
    }
};