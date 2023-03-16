/* Suresh has "N" rectangles. A rectangle is Silver if the ratio of its sides is in between [1.6, 1.7] both inclusive. */

#include <iostream>
using namespace std;
int main()
{
    int n,c=1;
    float width,height;
    cin>>n;
  while(n--)
    { cin>>width>>height;
     if(width/height>=1.6 && width/height<=1.7)
     c++;
     else if(height/width >=1.6 && height/width<=1.7)
     c++;
    }
    cout<<c;
return 0;
}
