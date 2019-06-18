def getInput(lst):
    size=0;
    size=int(input("enter the size"));
    print(size)
    for i in range(int(size)):
        val=(input("number:"))
        lst.append(val)
        print(lst)
    return lst;

def main():
    lst=[]
    lst=getInput(lst)
main()
