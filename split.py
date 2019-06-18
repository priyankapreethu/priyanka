def getInput(lst):
    size=0;
    size=int(input("enter the size"));
    print(size)
    for i in range(size):
        val=(input("enter string:"))
        lst.append(val)
    print(lst)
    return lst;
def split(lst,s1,s2):
    temp=[]
    for i in lst:
        temp=i.split('=');
        s1.append(temp[0]);
        s2.append(temp[1])
    return s1,s2
def join(s1,s2):
    tmp=0;lst=[];
    #for i in range(len(s1)):
    for j in s1:
        tmp=j
        print(tmp)
        lst.append(tmp)
    lst.append('=')
    for k in s2:
        tmp=j
        print(tmp)
        lst.append(tmp)
    print(lst)
        
def output(s1,s2):
    print("list 1:",s1,"list 2:",s2)
def main():
    res=0;
    lst=[]
    s1=[];s2=[];
    lst=getInput(lst)
    s1,s2=split(lst,s1,s2)
    output(s1,s2);
    join(s1,s2)
main()
