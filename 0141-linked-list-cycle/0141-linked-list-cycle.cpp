
 /* Definition for singly-linked list.
  struct ListNode {
      int val;
     ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
  };
 */
class Solution {
public:
#define null NULL
#define node ListNode
#define ed endl;
    bool hasCycle(ListNode *head) {

        if(head==null || head->next == null){
                return false;
        }
        node* s = head;
        node* f = head;
        while(f!= null && f->next != null){
            s = s->next;
            f=f->next->next;

            if(s == f) return true;
        }
        return false;
    }
};