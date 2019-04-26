#include <iostream>
 
using namespace std;

void fun1_4_1_9()
{
    int val = 50, sum = 0;
    while(val <= 100)
    {
        sum += val;
        ++val;
    }
    cout<<"the sum of 50~100 is : "<<sum<<endl;
}

void fun1_4_1_10()
{
    int val =10; 
    while(val>=0)
    {
        cout<<val<<endl;
        --val;
    }
}

void fun1_4_1_11()
{
    cout<<"please input two numbers:"<<endl;
    int val1=0, val2=0;
    cin >> val1 >> val2;
    if(val1>val2)
    {
        cout<<"first number is bigger than the second number";
        return;
    }

    while(val1<=val2)
    {
        cout<<val1<<endl;
        ++val1;
    }
}

void fun1_4_2_13_9()
{
    int val = 50, sum = 0;
    for(val = 50; val<=100; ++val)
    {
        sum += val;
    }
    cout<<"the sum of 50~100 is : "<<sum<<endl;
}

void fun1_4_2_13_10()
{
    int val =10; 
    for(val=10; val>=0; --val)
    {
        cout<<val<<endl;
    }
}

void fun1_4_2_13_11()
{
    cout<<"please input two numbers:"<<endl;
    int val1=0, val2=0;
    cin >> val1 >> val2;
    if(val1>val2)
    {
        cout<<"first number is bigger than the second number";
        return;
    }

    for(; val1<=val2; ++val1)
    {
        cout<<val1<<endl;
        ++val1;
    }
}

void fun1_4_1_16()
{
    int value=0,sum=0;
    while (cin>>value)
    {
        sum += value;
    }
    cout<<"sum is "<<sum <<endl; 
}

void fun1_4_1_18()
{
    int curVal=0, val=0;
    if(cin>>curVal)
    {
        int cnt = 1;
        while (cin>>val)
        {
            if(curVal == val)
            {
                ++cnt;
            }else
            {
                cout<<curVal<<" occured "<<cnt<<" times"<<endl;
                curVal = val;
                cnt = 1;
            }
        }
        cout<<curVal<<" occured "<<cnt<<" times"<<endl;
    }
}
int main()
{
    //fun1_4_1_9();
    //fun1_4_1_10();
//    fun1_4_1_11();
//    fun1_4_2_13_9();
//    fun1_4_2_13_10();
//    fun1_4_2_13_11();
//    fun1_4_1_16();
    fun1_4_1_18();
    system("pause");
    return 0;
}