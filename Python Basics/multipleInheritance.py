class Father():
    def gardening(self):
        print('I enjoy gardening')
class Mother():
    def cooking(self):
        print('I love cooking')

class child(Father,Mother):
    def skill(self):
        Father.gardening(self)
        Mother.cooking(self)
        print('Love to Play')
c = child()
c.skill()