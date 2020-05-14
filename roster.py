import sys
import cs50

if len(sys.argv) != 2:
    print("Error")
    sys.exit(1)

db = cs50.SQL("sqlite:///students.db")

lists = db.execute("SELECT first, middle, last, birth FROM students WHERE house = ? ORDER BY last, first", sys.argv[1])

for stud in lists:
    first = stud["first"]
    middle = stud["middle"]
    last = stud["last"]
    birth = stud["birth"]

    if middle == None:
        print(f"{first} {last}, born {birth}")
    else:
        print(f"{first} {middle} {last}, born {birth}")
print()
