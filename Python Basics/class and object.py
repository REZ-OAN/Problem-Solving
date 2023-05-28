class Human :
    ## initialize the properties of the instance of the class
    ## self refers to the class ( this pointer type)
    def __init__(self,nam,occu,ag):
        self.name = nam
        self.age = ag
        self.occupation = occu
    def do_work(self):
        if self.occupation == 'programmer':
            print(self.name,'Plays With Code')
    
Linda = Human('Linda Oath','programmer',24)
print(Linda.age)
Linda.do_work()
print(Linda.name)
    
