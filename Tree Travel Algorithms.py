#function defined outside class 
def funcPreOrder(self, root, arr):
    arr.append(root.data)   #this line differs in Pre/Post/Inline traversal
    if root and root.left:
        funcPreOrder(self, root.left, arr)
    if root and root.right:
        funcPreOrder(self, root.right, arr)
    return arr

#function defined outside class 
def funcPostOrder(self, root, arr):
    if root and root.left:
        funcPostOrder(self, root.left, arr)
    if root and root.right:
        funcPostOrder(self, root.right, arr)
    arr.append(root.data)
    return arr

def funcLevelOrder(self, root, arr):
    queue = [root]
    while queue:
        n = queue.pop(0)
        arr.append(n.data)
        if n.left:
            queue.append(n.left)
        if n.right:
            queue.append(n.right)
    return arr


#class which has one function defined in itself and references to three functions defined outside class
class tree:
    preOrder = funcPreOrder #definition outside class
    postOrder = funcPostOrder
    def inlineOrder(self, root, arr): #definition in class
        if root and root.left:
            self.inlineOrder(root.left, arr)
        arr.append(root.data)
        if root and root.right:
            self.inlineOrder(root.right, arr)
        return arr
    levelOrder = funcLevelOrder

# Tree Node structure
class createTree:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None


# create nodes for the tree
root = createTree(1)
n1 = createTree(2)
n2 = createTree(3)
n3 = createTree(4)
n4 = createTree(5)

# create childs for the nodes
root.left = n1
root.right = n2
n1.left = n3
n1.right = n4

#Call functions
parse = tree()
print ('PreOrder Traversal = ',parse.preOrder(root, []))
print ('PostOrder Traversal = ',parse.postOrder(root, []))
print ('Inline Traversal = ',parse.inlineOrder(root, []))
print ('Level Order Traversal = ',parse.levelOrder(root, []))