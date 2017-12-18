#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int a[10],p=0;
    string string;
    getline(cin, string);
    istringstream stream(string);
    int element = 0 ;
    bool success = true;
    
    for (int i = 0; i < 10; ++i) {
        if (!(stream >> a[i])) {
            success = false;
            break;
        }
    }
    if (stream >> element)
        success = false;
    for (int i = 0;i<10;i++){
        for (int j = i;j<10;j++){
            if (a[j]<a[i]){
                p++;
            }
        }
    }
    if (success){
        cout<<p;}
    else
    {
        cout<< "An error has occurred while reading numbers";
    }
    cin.get();
    return 0;
}
