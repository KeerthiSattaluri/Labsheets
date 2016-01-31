#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

class timet{
    public:
      int hrs,min,sec;

   timet()
   {
       hrs=0;
       min=0;
       sec=0;
   }

   timet(int h,int m,int s)
   {
       hrs=11;
       min=59;
       sec=59;
   }

  void display()
  {
     cout<<endl<<"the time in the format hh/mm/ss is:"<<hrs<<":"<<min<<":"<<sec<<endl;
  }

  timet operator + (const timet &t)
  {
      timet t1;

      t1.hrs=this.hrs+t.hrs;
      t1.min=this.min+t.min;
      t1.sec=this.sec+t.sec;

         if(t1.sec>=60)
         {
             t1.sec-=60;
             t1.min+=1;
         }

         if(t1.min>=60)
         {
             t1.min-=60;
             t1.hrs+=1;
         }

      return t1;
  }
};

 main()
 {
     int n,hr,mn,sc;
     cout<<"enter n:";
     cin>>n;

     timet t[n];
     timet a,tmp;

     for(int i=0;i<n;i++)
     {
         cout<<"\n enter the time:";
         cin>>t[i].hrs>>t[i].min>>t[i].sec;

     }

     a=t[0]+t[1];
     a.display();

     for(int j=0;j<n;j++)
     {
         for(int i=0;i<n;i++)
         {
             if(t[i].hrs>t[i+1].hrs)
             {
                 tmp=t[i];
                 t[i]=t[i+1];
                 t[i+1]=tmp;

             }

             else
                  if(t[i].hrs==t[i+1].hrs)
                  {
                      if(t[i].min>t[i+1].min)
                      {
                          tmp=t[i];
                          t[i]=t[i+1];
                          t[i+1]=tmp;
                      }

                      else
                      {
                          if(t[i].min==t[i+1].min)
                          {
                              if(t[i].sec>t[i+1].sec)
                              {
                                  tmp=t[i];
                                  t[i]=t[i+1];
                                  t[i+1]=tmp;
                              }
                          }
                      }
                  }

         }
     }

     for(int i=0;i<n;i++)
     {
         t[i].display();
     }

     return 0;

 }
