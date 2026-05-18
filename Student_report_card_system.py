#create average marks list
#create pass student list
#create topper list
#create grade list
#create flattened marks list
#create leaderboard
students = [
    {"name": "Suraj", "marks": [78, 85, 90]},
    {"name": "Aman", "marks": [45, 50, 40]},
    {"name": "Riya", "marks": [92, 88, 95]},
    {"name": "Kunal", "marks": [60, 70, 65]}
]
marks=[ student["marks"] for student in students]
avg_marks=[sum(student["marks"])/3 for student in students]
pass_students=[student["name"] for student in students if sum(student["marks"])/3 >=50]
topper_list=[sum(student["marks"])/3 for student in students]
topper_list=sorted(topper_list)
print(topper_list[-1])

