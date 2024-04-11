class Instructor:
    pass
    def __init__(self, name, subject):
        self.name = name
        self.subject = subject
        print(f'my name is {self.name}, am an instructor at iris college, and i teach {self.subject}')
        
    def teach(self):
        print(f'i teach {self.subject}')
    
instructor_1=Instructor('Emmanuel', 'chemistry')
instructor_1.teach()
instructor_2=Instructor('David', 'physics')
instructor_2.teach()
