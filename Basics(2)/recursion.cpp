#include <iostream>
#include<string>

using namespace std;

void rev(string s){
    if(s.length() == 0){
        return;
    }
    string ros = s.substr(1);
    rev(ros);
    cout<<s[0];
}
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int ros = power(n,p-1);
    return n*ros;
}
int fac(int n){
    if(n==0){
        return 1;
    }
    int ros = fac(n-1);
    return n*ros;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int ros = fib(n-1) + fib(n-2);
    return ros;
}
bool sorted(int arr[],int n){
    if(n==1){
        return true;
    }
   bool rA = sorted(arr+1,n-1);

   if(arr[0]<arr[1] && rA){
       return true;
   }

}
void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<"\n"; 
}
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<"\n"; 
    dec(n-1);
    
}
int firstOcc(int arr[],int n,int i,int k){
    if(i==n){
        return -1;
    }
    if(arr[i] == k){
        return i;
    }
    return firstOcc(arr,n,i+1,k);

}
int lastOcc(int arr[],int n,int i,int k){

    if(i==n){
        return -1;
    }
    int rA= lastOcc(arr,n,i+1,k);
    if(rA!=-1){
        return rA;
    }
    
    if(arr[i] == k){
        return i;
    }
    return -1;
    

}
void replacePi(string s){
    if(s[0] =='p' && s[1]=='i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}
void towerOfHanoi(int n, char src, char des, char help){
    if(n==0){
        return;
    }
    towerOfHanoi(n-1,src,help,des);
    cout<<"From "<<src<<" to "<<des<<endl;
    towerOfHanoi(n-1,help,des,src);

}
string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans  = removeDup(s.substr(1));

    if(ch == ans[0]){
        return ans;
    }
    return (ch+ans);
}

string moveAllx(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = moveAllx(s.substr(1));

    if(ch == 'x'){
        return (ans+ch);
    }
    return(ch+ans);
}
void substr(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    substr(ros,ans);
    substr(ros,ans+ch);
}
void ascii(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code =ch;
    string ros = s.substr(1);
    ascii(ros,ans);
    ascii(ros,ans+ch);
    ascii(ros,ans+to_string(code));

}
string keypadArr[] = {"", "", "abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch-'0'];
    string ros = s.substr(1);
    
    for(int i=0;i<code.length();i++){
        keypad(ros, ans+code[i]);
    }

}



int main(){
    substr("ABC","");
    return 0;
}