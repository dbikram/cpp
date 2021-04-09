/* program to print full pyramid using star
    *
   ***
  *****
 *******
*********
*/
#include<iostream>
using namespace std;
int main()
{
                int n;
                cin>>n; //enter the number

                for(int i=1;i<=n;i++){
                int j;
                                for(j=1;j<=n-i;j++){
                                                cout<<" ";
                                }
                                for(j=1;j<=2*i-1;j++){
                                                cout<<"*";
                                }cout<<endl;
                }return 0;


}
