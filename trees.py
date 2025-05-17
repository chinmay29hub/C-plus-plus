class TreeNode:
    def __init__(self, data):
        self.data = data
        self.children = []
        self.parent = None

    def addChild(self, child):
        child.parent = self
        self.children.append(child)

    def getLevel(self):
        p = self.parent
        level = 0

        while p:
            level += 1
            p = p.parent

        return level

    def printTree(self, level=0):
        spaces = " " * self.getLevel() * 5

        prefix = spaces + "|--" if self.parent else ""

        print(prefix + self.data)

        if self.children:
            for child in self.children:
                child.printTree()


root = TreeNode("Electronics")

laptops = TreeNode("Laptops")
cellphones = TreeNode("Cell Phones")
televisions = TreeNode("Televisions")

laptops.addChild(TreeNode("Macbook"))
laptops.addChild(TreeNode("Microsoft Azure"))
laptops.addChild(TreeNode("Thinkpad"))

cellphones.addChild(TreeNode("Iphone"))
cellphones.addChild(TreeNode("Google Pixel"))
cellphones.addChild(TreeNode("Vivo"))

televisions.addChild(TreeNode("Samsung"))
televisions.addChild(TreeNode("LG"))

root.addChild(laptops)
root.addChild(cellphones)
root.addChild(televisions)

# print(cellphones.getLevel())
root.printTree()
