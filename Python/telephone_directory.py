import pickle
try:
 contact=pickle.load(open("save.p", "rb+"))
except IOError:
 contact={}
 pass
def pick():
 pickle.dump(contact, open("save.p", "wb")) 
def store():
 global contact 
 name=input("Enter name:")
 phone=input("Enter Phone:")
 if name in contact: 
    print("Contact Already exists !\n") 
 else: 
    contact[name] =phone 
    print("Contact Stored !")
    print(contact)
    print("Do you want to perform more operations? (y / n)") 
 choice = input().strip() 
 if choice == "y": 
  main()
  pick()
def search(): 
 global contact 
 print("Enter the name to be searched") 
 iname = input().strip()
 if iname in contact:
   print (contact[iname])
 else:
   print("Contact not found !\n") 
   print("Do you want to perform more operations? (y / n)") 
 choice = input().strip() 
 if choice == "y": 
  main()
def update(): 
 global contact 
 print("Enter the contact name to be updated -") 
 name = input().strip() 
 if name in contact: 
   print("Enter the phone number-") 
   phone = input()
   contact[name]=phone 
   print("Contact updated\n")
   print(contact)

 else: 
 print("Contact not found !\n") 
 print("Do you want to perform more operations? (y / n)")
 choice = input().strip() 
 if choice == "y": 
 main()
 pick()
def delete(): 
 global contact 
 print("Enter the contact name to be deleted") 
 name = input().strip() 
 if name in contact: 
 del(contact[name]) 
 print("Contact Deleted !\n") 
 else: 
 print("Contact not found !\n") 
 print("Do you want to perform more operations? (y / n)") 
 choice = input().strip() 
 if choice == "y": 
 main()
 pick()
def main(): 
 print("lookup (1)") 
 print("add (2)") 
 print("change (3)") 
 print("Delete (4)") 
 
 choice = int(input()) 
 if choice==1:
 search()
 elif choice==2:
 store()
 elif choice==3:
 update()
 elif choice==4:
 delete()
 
main()