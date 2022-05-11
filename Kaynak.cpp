#include<iostream>
#include<vector>
using namespace std;
bool is_divisible(int n) {
	int temp_num = n;
	int total_num=0;
	while (n != 0) {
		total_num+=(n % 10);
		n /= 10;
	}
	if (temp_num % total_num == 0) {
		return true;
	}
	else return false;
}
void main() {
	cout<<is_divisible(75);
}