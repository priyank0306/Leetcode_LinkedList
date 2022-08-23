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
    bool isPalindrome(ListNode * head) {
      vector < int > palindrome;
      ListNode * temp = head;
      while (temp != NULL) {
        palindrome.push_back(temp -> val);
        temp = temp -> next;

      }
      int left = 0;
      int right = palindrome.size() - 1;
      while (left <= right) {
        if (palindrome[left] == palindrome[right]) {
          left++;
          right--;
        } else {
          return false;
        }
      }
      return true;
    }
};