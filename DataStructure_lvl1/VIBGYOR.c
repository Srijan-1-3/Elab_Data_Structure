/* VIBGYOR isn't just an acroynm, it's a way of life for Asian Paint company. */

#include<iostream>
#include<string>
using namespace std;
void arr()
{
    return;
}
int main()


    
{ 
    
        string ss[] = {"RED", "BLUE", "PURPLE", "YELLOW", "ORANGE" "GREEN"};
            string s,s1;
            int t = 4;
            while(t--)
            {
                
                  cin>>s>>s1;
                  //cout<<s<<" "<<s1;
                if(s == ss[0] && s1 == ss[3])
            
                    cout<<"ORANGE";
            
                    else if(s == ss[1] && s1 == ss[3]) cout<<"GREEN";
                    else if(s == ss[1] && s1== ss[0]) cout<<"PURPLE";
                    else if(s == "BLACK") cout<<"DARK"<<" "<<s1;
                     else if(s1 == "BLACK") cout<<"DARK"<<" "<<s;
                     else if(s1 == "WHITE") cout<<"LIGHT"<<" "<<s;
                      else if(s == "WHITE") cout<<"LIGHT"<<" "<<s1;
                      else if(s1 == s)cout<<s;
                      else cout<<"N/A";
                       cout<<"\n";

                 }


   return 0;
   cout<<"if(strcmp(c,colors[i])==0) for(i=0;i<8;i++) char mixes[8][8][32] char colors[8][32]";
}
