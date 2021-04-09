/*program to print half pyramid using alphabet
A
B B
C C C
D D D D
E E E E E
*/
#include<iostream>
using namespace std;
int main()
{
                int rows;
                char c='A';
                cin>>rows; //enter the rows
                for(int i=1;i<=rows;i++){
                                for(int j=1;j<=i;j++){
                                                cout<<c<<" ";
                                }
                                c++;
                                cout<<endl;
                }
                return 0;
}
