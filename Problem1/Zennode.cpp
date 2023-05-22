#include <bits/stdc++.h>
using namespace std;


float tiered_50_discountt(int A,int B,int C)
{
           float balance_quantity=0,discount=0;
           float a_discount=0,b_discount=0,c_discount=0;
           if(A>15)
           {
            balance_quantity=A-15;
            a_discount=(balance_quantity*50)/100;

           }
           if(B>15)
           {
            balance_quantity=B-15;
            b_discount=(balance_quantity*50)/100;
           }
           if(C>15)
           {
            balance_quantity=C-15;
            c_discount=(balance_quantity*50)/100;
           }
        discount=a_discount+b_discount+c_discount;
        return discount;

}


float bulk_10_discount(int total_amount)
{
     float discount=0;
     discount=(total_amount*10)/100;
     return discount;

}

float bulk_5_discount(int A,int B,int C,int a_total,int b_total,int c_total)
{

         float a_discount=0,b_discount=0,c_discount=0,discount=0;
         if(A>10)
         {
            a_discount=(a_total*5)/100;

         }
        if(B>10)
        {

            b_discount=(b_total*5)/100;
        }
        if(C>10)
        {

            c_discount=(c_total*5)/100;
        }
        discount=a_discount+b_discount+c_discount;
        return discount;
}

int main()
{
    int A,B,C,final_discount=0;
    bool a,b,c;
    cout<<"Enter the quantity of Product A";
    cin>>A;
    cout<<"Is your product-A wrapped as gift ?((1 for yes, 0 for no)";
    cin>>a;
    cout<<"Enter the quantity of Product B";
    cin>>B;
    cout<<"Is your product-B wrapped as gift ?((1 for yes, 0 for no)";
    cin>>b;
    cout<<"Enter the quantity of Product C";
    cin>>C;
    cout<<"Is your product-C wrapped as gift ?((1 for yes, 0 for no)";
    cin>>c;

    int total_quantity=A+B+C;
    int dis1,dis2,dis3;
    float total_amount,a_total,b_total,c_total;
    float discount=0;
    a_total=A*20;
    b_total=B*40;
    c_total=C*50;
    total_amount=a_total+b_total+c_total;
    if(total_quantity > 30 && (A>15 || B>15 || C>15))
      {

    dis1=tiered_50_discountt(A,B,C);
      }
     if(total_quantity>20)
      {
     dis2=bulk_10_discount(total_amount);
      }
     if(A>10 ||B > 10 || C > 10)
      {
          dis3= bulk_5_discount(A,B,C,a_total,b_total,c_total);
      }

      if(total_amount > 200)
      {
        discount=10;
      }

     int total_gift_wrap_count=0;
     if(a==1)
     {
        total_gift_wrap_count=total_gift_wrap_count+A;
     }
      if(b==1)
     {
        total_gift_wrap_count=total_gift_wrap_count+B;
     }
      if(c==1)
     {
        total_gift_wrap_count=total_gift_wrap_count+c;
     }



     if((dis1 > dis2)&&(dis1>dis3)&&(dis1>discount))
        {
            final_discount=dis1;
        }
     else if((dis2 > dis1)&&(dis2>dis3)&&(dis2>discount))
     {

            final_discount=dis2;

     }
     else if((dis3 > dis1)&&(dis3>dis1)&&(dis3>discount))
     {

            final_discount=dis3;

     }
     else
     {
         final_discount=discount;
     }


     float giftwrapfee=1.0*total_gift_wrap_count;
     int shippingpackage=total_quantity / 10.0;
     float shippingprice=5.0*shippingpackage;
     double total = (total_amount - final_discount )+ shippingprice + giftwrapfee;





    cout<<" --------------------------------"<<endl;
    cout<<"Product Name :"<<"Product A"<<endl;
    cout<<"Quantity :"<<A<<endl;
    cout<<"Product Total  :"<<a_total<<endl;
    cout<<" --------------------------------"<<endl;

    cout<<"Product Name :"<<"Product B"<<endl;
    cout<<"Quantity :"<<B<<endl;
    cout<<"Product Total  :"<<b_total<<endl;
    cout<<" --------------------------------"<<endl;

    cout<<"Product Name :"<<"Product C"<<endl;
    cout<<"Quantity :"<<C<<endl;
    cout<<"Product amount :"<<c_total<<endl;
    cout<<" --------------------------------"<<endl;

   cout<<"Sub Total :"<<total_amount<<endl;
   cout<<"Name of the discount and amount :"<<final_discount<<endl;
   cout<<"Shipping Fee :"<<shippingprice<<endl;
   cout<<"Gift Wrap Fee :"<<giftwrapfee<<endl;
   cout<<"Total :"<<total<<endl;


   //cout<<"Dis1"<<dis1<<" "<<dis2<<" "<<dis3<<endl;

}
