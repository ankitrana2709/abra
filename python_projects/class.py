import matplotlib.pyplot as plt

class Circle(object):
    def __init__(self, radius, color):
        self.radius = radius
        self.color = color
    def add_radius(self, r):
        self.radius += r
        return self.radius
    def drawCircle(self):
        plt.gca().add_patch(plt.Circle((0, 0), radius=self.radius, fc=self.color))
        plt.axis('scaled')
        plt.show()
class Rectangle(object):
    def __init__ (self, height, width, color):
        self.height = height
        self.width = width; self.color = color
    
    def add_height(self, a):
        self.height += a
        return self.height
    
    def add_width(self, b):
        self.width += b
        return self.width
    def drawRectangle(self):
        plt.gca().add_patch(plt.Rectangle((0, 0), self.width, self.height ,fc=self.color))
        plt.axis('scaled')
        plt.show()
        

Circle1 = Circle(4, "red")
Rectangle1 = Rectangle(5,4,"blue")
print(Circle1.color)
Circle1.drawCircle()
Rectangle1.drawRectangle()
