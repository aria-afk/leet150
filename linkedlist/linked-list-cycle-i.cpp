class Solution {
    public:
        bool hasCycle(ListNode *head) {
            std::map<ListNode*, int> seen;
            while (head) {
                if (head->next == NULL) return false;
                if (seen.find(head->next) != seen.end()) return true;
                seen[head] = 1;
                head = head->next;
            }
            return false;
        }
}
