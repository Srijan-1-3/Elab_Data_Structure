/* Public School have arranged an Annual Day Function. */

#include <iostream>
using namespace std;
int main()
{
    int rows, i,j;
    cin>>rows;
    for(i=1;i<=rows;i++) {
        for(j=1;j<=i;j++) {
            if(i==3||i<rows) {
                if(j!=1&&j!=i)
                    cout<<"0 ";
                else
                    cout<<"1 ";
            }
            else
                cout<<"1 ";
        }
        cout<<endl;
    }
    return 0;
}
