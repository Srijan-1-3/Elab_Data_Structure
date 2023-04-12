/* When the king of ghosts notices that all humans on planet earth have lost their dread of the ghost race, he is extremely unhappy. */

#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,n,m;
cin>>n>>m;
unordered_map<int,int> ghost;
int best = -1;
cin>>best;
ghost[best]+=1;
cout<<best<<" "<<1<<endl;
for(i=0;i<n-1;i++)
{
int y;
cin>>y;
ghost[y]+=1;
if((ghost[y]>ghost[best]) || (ghost[y]==ghost[best] && y>best)) best = y;
cout<<best<<" "<<ghost[best]<<"\n";
}
}
