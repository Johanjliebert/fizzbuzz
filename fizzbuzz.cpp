#include <iostream>
#include <string>

using namespace std;

int main() {
	string x;
	for(int i=1;i<=100;i++){
		x="";
		if(i%3==0){
			x+="fizz";
		}
		if(i%5==0){
			x+="buzz";
		}
		if(x==""){
			cout<<i;
		}
		cout<<x<<endl;
	}
    return 0;
}
