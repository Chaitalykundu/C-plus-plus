/* Author : Chaitaly Kundu
   Date : 12th june 2021 */

#include<iostream>

using namespace std;

int main(){
    int i,j, row, col;
    cout << "Enter the no. of row and column: ";
    cin >> row >> col ;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            cout << "* " ;
        }
    cout << endl;
    }

}