questions=(
    ("1.What is the color of sun?"),
    ("2.How many moons does earth have?"),
    ("3.Who is the prime minister of India?"),
    ("4.What is the color of rose?")
)
options=(
    ("A.Yellow","B.Green","C.Pink","D.White"),
    ("A.1","B.2","C.3","D.4"),
    ("A.Modi","B.Nitish","C.Rahul","D.Yogi"),
    ("A.Gray","B.Black","C.Red","D.Green")
)
answer=("A","A","A","C")
chossen=[]
question_number=0
for question in questions:
    print("------------------------------")
    print(question)
    for option in options[question_number]:
        print(option)
    guess=input("Enter your answer: ").upper()
    chossen.append(guess)
    if guess==answer[question_number]:
        print("Correct answer")
    else:
        print("Wrong Answer")
    question_number+=1
print("----------------------")
print("        Result        ")
print("----------------------")
print("Your answers")
print(chossen) 
print("Correct answers")
print(answer)