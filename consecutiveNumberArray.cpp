#include <iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main()
{
    
   int a[]= {-4,-5}; 
   int size = sizeof(a)/sizeof(a[0]);
   //we unordered set to remove dupliacates from the array
   unordered_set <int> us;
   for(int i=0;i<size;i++){
       us.insert(a[i]);
   }
   //here we are storing new array without duplicates to the orignal array with modifying the size with nSize
   int nSize=0;
  for (auto it = us.cbegin(); it != us.cend(); it++) {
        a[nSize]= *it;
        nSize++;
    }
   //we are sorting the array
   sort(a,a+nSize);
   int min = 199999999;
   int max=-199999999;
//here we are finding minimum and maximum of the array to compare if it is consecutive or not
   for(int i=0;i<nSize;i++){
       if(min>a[i]){
           min=a[i];
       }
       if(max<a[i]){
           max=a[i];
       }
   }
   //count will store number of same elements in array and our consecutive variable min
   int count=0;
   int index=0;
   for(int i=min;i<=max;i++){
       if(min==a[index]){
           count++;
           cout<<"Min : "<<min<<" a[i] : "<<a[index]<<"\n";
             min++;
       }
     
       index++;
   }
   //now we are checking if the array elements are consecutive or not with the help of count and nSize variable
   if(count==nSize){
       cout<<"TRUE"<<endl;
   }
   else{
       cout<<"FALSE"<<endl;
   }

    return 0;
}
