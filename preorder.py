class Node :
    def __init__(self, i) :
        self.right = None
        self.left = None
        self.val = i

def push(root, i) :
    node = Node(i)
    if(root is None) :
        root = node
    elif(i > root.val) :
        if(root.right is None) :
            root.right = node
        else :
            root = root.right
    else :
        if(root.left is None) :
            root.left = node
        else :
            root = root.left
   
   #----> preorder function
def preorder(node) :
    if(node is None) :
        return
    print(node.val)
    preorder(node.left)
    preorder(node.right)
    
root = Node(int(input('Enter Root Node: ')))
top = root
push(top, int(input('Enter Something To Push: ')))

preorder(root)