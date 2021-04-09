/* program to print pyramid using numbers
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main()
{
                int n;
                cin>>n; //enter the number

                for(int i=1;i<=n;i++){
                                                int j,k;
                                for(j=1;j<=n-i;j++){
                                                cout<<" ";
                                }
                                for(j=1;j<=i;j++){
                                                k=i;
                                                cout<<k<<" ";
                                                k++;
                                }
                                for(;j<=i-1;j++){
                                                k--;
                                                cout<<k<<" ";
                                }
                                cout<<endl;
                }
}
