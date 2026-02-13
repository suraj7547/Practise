class student:
    def __init__(self,id,name,marks):
        self.id=id
        self.name=name
        self.marks=marks
    def compute_grade(self):
        if self.marks>=90:
            print("0")
        elif self.marks>=80 and self.marks<=90:
            print("A")
        elif self.marks>=80 and self.marks<=80:
            print("B")
        else:
            print('C')
        

def main():
    s1=student(123,"amar",78)
    s1.compute_grade()

main()

