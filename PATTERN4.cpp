/* program to print inverted half pyramid using star
* * * * *
* * * *
* * *
* *
*   */
#include<iostream>
using namespace std;
int main()
{
                int rows;
                cin>>rows;

                for(int i=1;i<=rows;i++){
                                for(int j=6-i;j>=1;j--){
                                                cout<<"* ";
                                }
                                cout<<endl;
                }
                return 0;
}

