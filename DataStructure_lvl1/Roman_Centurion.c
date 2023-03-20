/* How many Y's did a Roman Centurion make a day in cold hard Lira? */

#include <bits/stdc++.h>
using namespace std;
void print(int number)
{
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"B","BW","W","BK","Z","ZP","P","ZB","B","BG","G","BR","R"};
    int i=12;
    while(number>0)
    {
    int div = number/num[i];
    number = number%num[i];
    while(div--)
    {
        cout<<sym[i];
    }
    i--;
    }
}
int main()
{
    int number,n2,n3,n4,n5;
    cin>>number>>n2>>n3>>n4>>n5;
    print(number);
    cout<<endl;
    print(n2);
    cout<<endl;
    print(n3);
    cout<<endl;
    print(n4);
    cout<<endl;
    print(n5);

    return 0;
    cout<<"char buf[] buf[i++]='R'; while(n>=10)";
}
