class Node():

    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None
    
    def traverse(self):
        print(f"{self.val} ")
        if self.left:
            self.left.traverse()
        if self.right:
            self.right.traverse()
        
root = Node(10)

root.left = Node(9)
root.left.right = Node(11)

root.right = Node(12)

root.traverse()

