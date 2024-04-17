"""A function that appends a strinig at the end of a utf-8 file"""

def my_append(filename="", text=""):
    """
    A function that appends a sting at the end of a file

    Args:
        filename: the file name. description(optional)
        text: the text to be appended to the end of the file. description(optional)

    Returns:
        the string to be appended to the end of the file.
    """
    with open(filename, "a", encoding="utf-8") as f:
        return f.write(text)