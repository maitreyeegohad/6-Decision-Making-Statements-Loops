//Maitreyee Gohad
//24070123509

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter your choice: ";
    cin>>n;
    k=n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>=k)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        k--;
        cout<<"\n";
    }
}

/* OUTPUT:
Enter your choice: 5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
*/
