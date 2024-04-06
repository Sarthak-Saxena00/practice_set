/* Calculating a grocery bill: You have a list of groceries with prices. Write a program to find the total cost of all items. (Loop through the list, add each item's price to a running total)
 */
#include <iostream>
#include <list>
using namespace std;
 
int main()
{int n;
list<int> items;
cout<<"enter the length of items";
cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"enter the cost of item "<<i<<" ";
        int val;
        cin>>val;
        items.push_back(val);
    }
     int sum=0;
    for(auto  i: items){
        sum=sum+i;
        

    }
    cout<<"the total cost of items is:-->"<<sum;
    return 0;
}