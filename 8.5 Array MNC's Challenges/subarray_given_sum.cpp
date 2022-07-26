#include<iostream>
using namespace std;



int main () {
    int n;
    cin>>n;
    int array[n];
    int sum;
    cin>>sum;

    for (int i= 0; i<n; i++) {
        cin>>array[i];
    }
    int j = 0;
    for(int i = 0; i<n; i++) {
        int count = 0;
        for (int j = i; j<n; j++) {
            count = count + array[j];
            if (count == sum) {
                cout<<i<<" "<<j<<endl;
                return 0;
            }
        }
        
    }




    return 0;
}