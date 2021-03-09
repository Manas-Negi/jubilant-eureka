list1 = [1,2,3,5,4]
list2 = [1,2,3,4,5]
list3 = [1,2,3,'a','b']
list4 = [1,2,3,'b','a']
#comparing list1 with list2
print (cmp(list1, list2))
#comparing list3 with list4
print (cmp(list3, list4))
#comparing list1 with list3
print (cmp(list1, list3))
#comparing list2 with list4
print (cmp(list2, list4))