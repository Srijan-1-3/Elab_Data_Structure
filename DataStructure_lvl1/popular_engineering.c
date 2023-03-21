/* the popular engineering college got lowest pass percentage in last semester. */

#include <iostream>
#include <vector>

using namespace std;

int getLength(){
    int len;
    cin >> len;
    
    return len;
}

vector<int> getElements(int len){
    vector<int> linkedList;
    for (int i = 0; i < len; i++) {
        int temp;
        cin >> temp;
        linkedList.push_back(temp);
    }
    
    return linkedList;
}


int main () {
    int len = getLength();
    
    vector<int> linkedList = getElements(len);
    
    int query;
    cin >> query;
    int queryResultPos;
    bool isQueryFound = false;
    
    for (int i = 0; i < len; i++) {
        if(linkedList[i] == query){
            queryResultPos = i;
            isQueryFound = true;
            break;
        }
    }
    if(isQueryFound){
        cout << "Linked List:";
        for (int i = 0; i <= queryResultPos; i++) {
            cout << "->" << linkedList[i];
        }
    }else{
        cout << "Invalid Node! Linked List:";
        for (int i = 0; i < len; i++) {
            cout << "->" << linkedList[i];
        }
    }
    
    return 0;
    cout << "struct node node *next; void create() for(i=0;i<n;i++) p2=p2->next; void display() void del()";
}
