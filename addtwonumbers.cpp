#include<iostream>
using namespace std;
int main(){
    
    int T;
    printf("Enter number of test cases: ");
    scanf("%d",&T);
    while (T--){
        int a ,b,c;
        printf("Enter 2 numbers to add:\n");
        scanf("%d %d" ,&a , &b);
        c = a +b;
        printf("%d\n", c);
	}

	return 0;
}