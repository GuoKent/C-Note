# include <iostream>
# include <string>
using namespace std;

#define day 7;
int main(){
    const int ss=88;
    int a;
    //cin>>a;
    //cout<<a<<endl;
    for (int i = 0; i < 3; i++)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
        }
        else{
            cout<<"danshu"<<endl;
        }
        
        //cout<<i<<endl;
    }

    int score;
    cin>>score;
    if(score>=600){
        cout<<"985"<<endl;
    }
    else if (score>=500)
    {
        cout<<"211"<<endl;
    }
    else{
        cout<<"nothing"<<endl;
    }
    
    
    cout<<"Day="<<day;
    cout<<endl;
    cout<<"hello world"<<endl;
    return 0;
}