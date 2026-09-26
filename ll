struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode small = {0, NULL}, large = {0, NULL};
    struct ListNode *s = &small, *l = &large;

    while (head) {
        if (head->val < x) {
            s->next = head;
            s = s->next;
        } else {
            l->next = head;
            l = l->next;
        }
        head = head->next;
    }

    l->next = NULL;
    s->next = large.next;

    return small.next;
}
