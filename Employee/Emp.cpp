#include <bits/stdc++.h>
#define Mansour_On_The_Code
#define ll long long
#include <algorithm>
#include <cmath>
#include<math.h>
#include<ctime>
#include<string>
using namespace std;
int binary_search(int size, vector<int>arr, int value){
    int low = 0 ; 
    int high = size - 1 ; 
    int ans;
    while( low <= high ){
        int mid = ( low + high ) / 2 ;
        if(arr[mid] == value){
            return mid;
        }
        else if( arr[mid] < value ){
            low = mid + 1;
        }
        else{
            high = mid - 1 ;
        }
    }
    return -1;
}
int find_min(int a,int b,int c){
        if(a <= b && a <= c){
            return a ;
        }
        else if(b <= a && b <= c){
            return b;
        }
        else{
            return c;
        }
    }
int find_max(int a,int b,int c){
        if(a >= b && a >= c){
            return a ;
        }
        else if(b >= a && b >= c){
            return b;
        }
        else{
            return c;
        }
    }
void solve(){
	const int MAX = 10000;
	string names[MAX];
	int ages[MAX];
	double salaries[MAX];
	char genders[MAX];
	int added = 0;	
	while (true) {
		int choice = -1;
		cout << "\nEnter your choice:\n";
		cout << "1) Add new employee\n";
		cout << "2) Print all employees\n";
		cout << "3) Delete by age\n";
		cout << "4) Update Salary by name\n";
		cin >> choice;
		if (!(1 <= choice && choice <= 4)) {
			cout << "Invalid choice. Try again\n";
			continue;
		}
		if (choice == 1) {
			cout << "Enter name: ";
			cin >> names[added];
			cout << "Enter age: ";
			cin >> ages[added];
			cout << "Enter salary: ";
			cin >> salaries[added];
			cout << "Enter gender (M/F): ";
			cin >> genders[added];
			++added;
		} else if (choice == 2) {
			cout << "****************************\n";
			for (int i = 0; i < added; ++i) {
				if (ages[i] != -1)
					cout << names[i] << " " << ages[i] << " " << salaries[i]
							<< " " << genders[i] << "\n";
			}
		} else if (choice == 3) {
			cout << "Enter start and end age: ";
			int start, end;
			cin >> start >> end;
			for (int i = 0; i < added; ++i) {
				if (start <= ages[i] && ages[i] <= end)
					ages[i] = -1;
			}
		} else {
			cout << "Enter the name and salary: ";
			string name;
			int salary;
			cin >> name >> salary;
			bool is_found = false;
			for (int i = 0; i < added; ++i) {
				if (ages[i] != -1 && names[i] == name) {
					is_found = true;
					salaries[i] = salary;
					break;
				}
			}
			if (!is_found)
				cout << "No employee with this name!\n";
		}
	}
}
void fastIO() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
}
void Swap(int &a , int &b){
      int temp = a ;
      a = b;
      b = temp;
      cout<<a<<" "<<b;
}
int main() {
      Mansour_On_The_Code;
        solve();
        fastIO();
        return 0;
}
