#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;

  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *readList()
{
  int n;
  cin >> n;
  ListNode *head;
  for (int i = 0; i < n; i++)
  {
    ListNode *ptr;
    int x;
    cin >> x;
    if (i == 0)
    {
      head = new ListNode(x);
      ptr = head;
    }
    else
    {
      ptr->next = new ListNode(x, nullptr);
      ptr = ptr->next;
    }
  }

  return head;
}

int getMiddle(ListNode *head)
{
  ListNode *slow = head;
  ListNode *fast = slow->next->next;

  while (fast->next != nullptr && fast->next->next != nullptr)
  {
    slow = slow->next;
    fast = fast->next;
    fast = fast->next;
  }

  if (fast->next == nullptr)
    return slow->next->val;

  return slow->next->next->val;
}

int main()
{

  ListNode *head = readList();

  cout << getMiddle(head) << endl;

  return 0;
}