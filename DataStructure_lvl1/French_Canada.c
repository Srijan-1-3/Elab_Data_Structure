/* Once upon a time, in French Canada, there lived a fat old women named Tante Adela. */

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
    bool isQueryFound = false;
    
    for (int i = 0; i < len; i++) {
        if(linkedList[i] == query){
            isQueryFound = true;
            break;
        }
    }
    if(isQueryFound){
        cout << "Yes";
    }else{
        cout << "No";
    }
    
    return 0;
    cout << "struct node struct node* next; search(struct node* head,int x)";
}
