/*program to print half pyramid using number
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
                int row;
                cin>>row; //enter the row
                for(int i=1;i<=row;i++){
                                for(int j=1;j<=i;j++){
                                                cout<<j<<" ";
                                }
                                cout<<endl;
                }
                return 0;
}
