class vehicle:
    def general_usage(self):
        print('Transportation')
class car(vehicle):
    def __init__(self):
        print("This is a Car")
        self.wheels = 4
        self.has_roof=True
    def specific_usage(self):
        print('Use To Travel with family')
class MororCycle(vehicle):
    def __init__(self):
        print("Traveling With MC")
        self.wheels = 2
        self.has_roof = False
    def specific_usage(self):
        print('Road Trip Racing')
v = vehicle()
c = car()
mc = MororCycle()
v.general_usage()
c.general_usage()
c.specific_usage()
print(c.has_roof)
mc.general_usage()
mc.specific_usage()
print(mc.has_roof)
print(isinstance(c,car))
print(issubclass(car,vehicle))