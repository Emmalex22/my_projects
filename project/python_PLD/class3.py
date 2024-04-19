class Church:
    
    def __init__(self, denomination, branch):
        self.denomination = denomination
        self.branch = branch
        print('welcome to {}'.format(denomination))
        
        def worship(self):
            print('Lord we worship you')
        
class Revivalhub(Church):
    def __init__(self, denomination, branch):
        super().__init__(denomination, branch)
    def worship(self):
        print('God is good')
        
mychurch = Church('AG', 'Ilapo')
print(mychurch.denomination)
mychurch2 = Revivalhub('RH', 'Nnewi')
mychurch2.worship()
print(mychurch2.denomination)
print(mychurch2.branch)