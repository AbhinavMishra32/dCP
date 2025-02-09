class Node:
    def __init__(self, val: int):
        self.val: int = val
        self.next: 'Node' | None = None

    def insert(self, node: 'Node'):
        temp = self
        while temp.next:
            temp = temp.next
        temp.next = node

    def display(self):
        temp = self
        while(temp.next != None):
            print(temp.val)
            temp = temp.next

if __name__ == "__main__":
    ll = Node(10)
    while(True):
        n = int(input())
        if n == -1:
            break
        ll.insert(Node(n))
    ll.display()
