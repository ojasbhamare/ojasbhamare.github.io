import sys,csv,cs50

if len(sys.argv) != 2:
    print("Error")
    sys.exit(1)

db = cs50.SQL("sqlite:///students.db")

with open (sys.argv[1], "r") as houses:

    reader = csv.reader(houses)

    for row in reader:
        name = row[0].split()
        if len(name) == 3:
            db.execute("INSERT INTO houses (first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)", name[0], name[1], name[2], row[1] ,row[2])
        elif len(name) == 2:
            db.execute("INSERT INTO houses (first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)", name[0], None, name[1], row[1] ,row[2])



