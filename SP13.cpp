#include<iostream>
using namespace::std;
struct student
{
       char sname[20];
       int rollno;
       int english, maths, science;
};
int main()
{
       struct student st[100];
       int n, i;
       cout<<"\n How Many Students You Want to Enter? : ";
       cin>>n;
       for(i=0; i<=n-1; i++)
       {
              cout<<"\n Student Name :  ";
              cin>>st[i].sname;
              cout<<"\n Roll Number  :  ";
              cin>>st[i].rollno;
              cout<<"\n Marks of Three Subjects ";
              cout<<"\n ---------------------";
              cout<<"\n English      :  ";
              cin>>st[i].english;
              cout<<"\n Maths        :  ";
              cin>>st[i].maths;
              cout<<"\n Science      :  ";
              cin>>st[i].science;
              cout<<"\n ---------------------------------";
       }
       cout<<"\n\n\t ********** Displaying Student's Details ********** \n\n"<<" ";
       cout<<"\n\tStudent's Name"<<"\tRoll Number"<<"\tMarks of Three Subjects";
       cout<<"\n\n\t\t\t\t\tEnglish  Maths  Science";
       for(i=0;i<=n-1;i++)
       {
              cout<<"\n\t----------------------------------------------------------";
              cout<<"\n\t "<<st[i].sname<<"\t "<<st[i].rollno<<"\t\t "<<st[i].english<<"\t "<<st[i].maths<<"\t "<<st[i].science;
       }
       return 0;
}