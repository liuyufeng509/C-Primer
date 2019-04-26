#include <iostream>
#include "Sales_item.h"
using namespace std;

void fun20()
{
    Sales_item book;
    while (cin>>book)
    {
        cout<<book<<endl;
    }
    
}

void fun21()
{
    Sales_item book1, book2;
    cin>>book1>>book2;
    cout<<book1+book2<<endl;
}

void fun22()
{
    Sales_item book,sum;
    while (cin>>book)
    {
        sum += book;
    }

    cout<<"sum is: " <<sum<<endl;
        
}

void fun23()
{
    Sales_item curBook,book;
    if (cin>>curBook)
    {
        int cnt=1;
        while (cin>>book)
        {
            if(curBook.isbn() == book.isbn())
            {
                ++cnt;
            }else
            {
                cout<< curBook.isbn()<<"occurs "<<cnt<<" times"<<endl;
                curBook = book;
                cnt=1;
            }
            
        }
       cout<<curBook.isbn()<<" occurs "<<cnt<<" times"<<endl; 
    }
    
}

void fun25()
{
    Sales_item total;
    if (cin>>total)
    {
        Sales_item trans;
        while (cin>>trans)
        {
            if(total.isbn() == trans.isbn())
            {
                total += trans;
            }else
            {
                cout<<total<<endl;
                total = trans;
            }
         cout<<total<<endl;   
        }
    }else
    {
        cerr<<"no data"<<endl;
    }
}

int main()
{
    fun25();
    system("pause");
    return 0;
}