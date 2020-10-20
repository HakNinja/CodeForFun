string1=input("Enter string1 : ")
string2=input("Enter string2 : ")
if len(string1)>len(string2):
	print(string1)
elif len(string2)>len(string1):
    print(string2)
else:
	print(string1,string2,sep='\n')
