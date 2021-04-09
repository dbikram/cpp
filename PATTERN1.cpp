/* program to print half pyramid
*
* *
* * *
* * * *
* * * * *
*/
#include<iostream>
using namespace std;
int main()
{
                int row;
                cin>>row; //enter row number
                for(int i=1;i<=row;i++)
                {
                                for(int j=1;j<=i;j++){
                                                cout<<"* ";
                                }
                                cout<<endl;
                }
                return 0;
}
