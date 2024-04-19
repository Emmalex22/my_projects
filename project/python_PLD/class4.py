"""A  class that that defines a square"""
class Square:
    def __init__(self, size=0):
        """
        initializes a square object.
        Parameters:
        size(optional): Defaults to 0.
        Raises:
        TypeError: if size is not an integar
        valueError: if size <= 0.
        """
        
        if not isinstance(size, int):
            raise TypeError('size must be an integar')
        elif size < 0:
            raise ValueError("size must be >= 0")
        else:
            self.__size = size
            
        def area(self):
            """
            A method that calculates the area of a square.
            Args:
            None.
            Returns:
            int: The current square area.
            """
            return self.__size ** 2