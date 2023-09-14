#include<iostream>
using namespace std ;
// Sarita Meena - 2022ucp1435
// This is the code for addition ,substraction and multiplication of two complex numbers 

class complex{

    private:
        float x;
        float y;
        //float result;
    
   public:
         complex();
        void get_value(float,float);
        complex multi(complex,complex);
        complex add(complex,complex);
        complex sub(complex,complex);
        void display(complex);
        
};

complex :: complex(){

    x = 0;
    y = 0;
 }
 
void complex :: get_value(float real,float img)
    {
        x=real;
        y=img;
        
        }
        
complex complex::add (complex c1, complex c2)
    {
        complex c3;
        c3. x = c1.x + c2.x;
        c3.y = c1.y + c2.y;
        return(c3);
}

complex complex::sub (complex c1, complex c2)
    {
        complex c3;
        c3. x = c1.x - c2.x;
        c3.y = c1.y - c2.y;
        return(c3);
}

complex complex::multi (complex c1, complex c2)
    {
        complex c3;
        c3. x = c1.x * c2.x;
        c3.y = c1.y * c2.y;
        return(c3);
}
       
void complex :: display(complex c)
{
cout << c.x <<"i " << c.y << "j "<<endl;
}
       
int main()
    {
        complex c1,c2,A,S,M;
        int x1,x2,y1,y2;
        cout<<" Enter the numbers "<<endl;
        cin>>x1>>x2>>y1>>y2;
        c1.get_value(x1,y1);
        c2.get_value(x2,y2);
        cout<<"Substraction "<<endl;
        S= sub(c1,c2);
        S.display(S);
        cout<<"Addition " <<endl;
        A=add(c1,c2);
        A.display(A);
        cout<<"Multipication " <<endl;
        M=multi(c1,c2);
        M.display(M);
        
       }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
