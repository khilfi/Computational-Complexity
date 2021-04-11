# Computational-Complexity

Title: Library Book Borrowing System

2. Whether or not the system should accept the request to borrow books from the library depends on three factors:
    a. Whether or not the visitor is already registered to the system or not
    b. Whether there are outstanding charges on the visitor
    c. Whether the number of borrowed books is below 3 books

3. State transition diagram
    Laccept = {TFF}
    Lreject = {F, TT, TFT}
    
About the code :

1. The code has arrays that hold the username, their outstanding charge and book titles available
2. The user are prompted to enter their name, if the system could not recognize them. The system will be terminated
3. Once login, the system will check if they have any outstanding charge. If they have any outstanding charge. The sytem will also be terminated.
4. Then the system displays available books on the array and the user can choose how many books the want but to a limit of 4 books or the system will be terminated.
5. Finally, the system will display what book they have picked
6. the program ended
