//Maitreyee Gohad
//24070123509

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter your choice: ";
    cin>>n;

    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

/*OUTPUT
Enter your choice: 7
* * * * * * * 
* * * * * *
* * * * * 
* * * * 
* * * 
* * 
* 

*/
