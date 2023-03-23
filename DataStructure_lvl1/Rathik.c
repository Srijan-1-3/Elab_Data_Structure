/* Rathik organized a technical round interview in Macrosoft for the set of computer science candidates. */

#include <bits/stdc++.h>
using namespace std;
void don() {cout<<"void Stack::push(int val)q.push(val)void Stack::pop()q.pop();";}
int main()
{
    int n,m,temp;cin>>n>>m;
    stack<int> stk;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        stk.push(temp);
    }
    cout<<"top of element "<<stk.top()<<endl;
    for (int i = 0; i < m; i++) stk.pop();
    cout<<"top of element "<<stk.top();
    return 0;
}
