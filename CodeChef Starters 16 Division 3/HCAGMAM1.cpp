#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	long long int t,x,y,s;
	string str;
	cin >>t;
	while(t--){
	    cin >>x >>y;
	    cin >>str;
	    int max=0,c=0,f=0;
	    for(int i=0; i<30; i++){
	        if (str[i]=='1'){
	            c++;
	            f++;
	        }
	        if(str[i]=='0')
	        f=0;
	        if(f>max)
	        max=f;
	    }
	    s=c*x+max*y;
	    cout <<s <<endl;
	}
	return 0;
}
