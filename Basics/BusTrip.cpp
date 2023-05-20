// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int amount(int td)
{
    
}
int main() {
    // Write C++ code here
    int i,a,b,s,td=0,td1=100,ta=2;
    cout<<"Enter Total Stations: ";
    cin>>s;
    cout<<"Enter the Source Station: ";
    cin>>a;
    cout<<"Enter the Destination Station: ";
    cin>>b;
    if(b==0 || a==0 || a>s || b>s)
    {
        cout<<"Invalid Input!";
        return 0;
    }
    else if(a==b)
    {
        for(i=0;i<s;i++)
        {
            td+=100;
            if(td<=600)
                ta+=2;
            else if(td>600 && td<=1000)
                ta+=5;
            else
                ta+=1;
        }
    }
    else if(b>a)
    {
        for(i=a;i<b;i++)
        {
            td+=100;
            if(td<=600)
                ta+=2;
            else if(td>600 && td<=1000)
                ta+=5;
            else
                ta+=1;
        }
    }
    else if(a>b)
    {
        for(i=0;i<s-(a-b);i++)
        {
            td+=100;
            if(td<=600)
                ta+=2;
            else if(td>600 && td<=1000)
                ta+=5;
            else
                ta+=1;
        }
    }
    cout<<"Distance Covered: "<<td<<endl<<"Total Amount: "<<ta;
    return 0;
}
