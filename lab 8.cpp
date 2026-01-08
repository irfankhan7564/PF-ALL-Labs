#include<iostream>
using namespace std;
int main() {
    int day,noofbooks,totalfine = 0,noofdays,fine = 0;
    cout<<"Enter number of books: ";
    cin>>noofbooks;
    const int maxfine = 1000;
    const int penalty = 50;
    for (int i=1;i<=noofbooks;i++) {
        cout<<"book id: "<<i<<endl;
        cout<<"Enter number of day which are late: ";
        cin>>day;
        fine = 5;
        for (int j=1;j<=day;j++) {
            if (fine>maxfine) {
                fine = maxfine;

            }
            cout << "Day " << j << " fine: " << fine << endl;
            if (fine<maxfine){
                fine = fine*2;
            }
        }
        totalfine = totalfine + fine;
        if (noofbooks>=3) {
            totalfine = totalfine + penalty;
        }

    }
    cout<<"Total fine: "<<totalfine<<endl;
    return 0;
}
