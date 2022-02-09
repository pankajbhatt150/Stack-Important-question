class Stack
{
  Node *head;
    Node *tail;
  int size;
public:
  Stack()
  {
    head = NULL;
      
    size = 0;
  }
  int getSize()
  {
    return size;
  }  
  bool isEmpty()
  {
    return head == NULL;
  }
  void push(int element)
  {
    Node *newNode = new Node(element);
    if(head == NULL)
    {
      head = newNode;
    
    }else
    {
      newNode->next=head;
      head=newNode;
    }
    size++;
  }
  int pop()
  {
     if(isEmpty())
    {
      return -1;
    }
      size--;
    int temp=head->data;
    head=head->next;
    return temp;
  }
  int top()
  {
    if(isEmpty())
    {
      return -1;
    }
    return head->data;
  }
};
