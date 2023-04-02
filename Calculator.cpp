#include <iostream>
#include<math.h>  
#include<stdlib.h>  
using namespace std;

class Digital_Calculator
{
    public:
            void Arithmatic_Calculation();
            void Trignometry_Calculation();
            void Inverse_Operator_Calculation();
            void Interest();
            void Advanced_Calculator();
};

void Digital_Calculator :: Arithmatic_Calculation()
{
    cout<<"***** Arithmatic Calculation *****"<<endl;
    cout<<"1. Addition "<<endl;
    cout<<"2. Subtraction "<<endl;
    cout<<"3. Multiplication "<<endl;
    cout<<"4. Division "<<endl;
    cout<<"5. Modulus "<<endl;
    
    int option;
    cout<<"Enter your choice: "<<endl;
    cin>>option;
    
    switch(option)
    {
        case 1:
        {
                cout<<"----- Addition -----"<<endl;
                int n, sum = 0, i, number;  
                cout <<"How many numbers you want to add: ";  
                cin >> n;  
                cout << "Please enter the number one by one: \n";  
                
                for (i = 1; i <= n; i++)  
                {  
                    cin >> number;  
                    sum = sum + number;  
                }  
                cout << "\n Sum of the numbers = "<<sum;
                break;
        }
                
        case 2: 
        {
                cout<<"----- Subtraction -----"<<endl;
                int num1, num2, z;  
                cout <<" \n Enter the First number = ";  
                cin >> num1;  
                cout << "\n Enter the Second number = ";  
                cin >> num2;  
                z = num1 - num2;  
                cout <<"\n Subtraction of the number = " << z; 
                break;
        }
                
        case 3:
        {
                cout<<"----- Multiplication -----"<<endl;
                int d, e, mul;  
                cout <<" \n Enter the First number = ";  
                cin >>d;  
                cout << "\n Enter the Second number = "; 
                cin >>e; 
                mul = d * e;  
                cout <<"\n Multiplication of two numbers = " << mul;  
                break;
        }
                
        case 4: 
        {
                cout<<"----- Division -----"<<endl;
                int f, g, div = 0;  
                cout <<" \n Enter the First number = ";  
                cin >> f;  
                cout << "\n Enter the Second number = ";  
                cin >> g;  
                while ( g == 0)  
                {  
                    cout << "\n Divisor canot be zero please enter the divisor once again: ";  
                    cin >> g;  
                }  
                div = f / g;  
                cout <<"\n Division of two numbers = "<<div;  
                break;
        }
        
        case 5:
        {
                cout<<"----- Modulus -----"<<endl;
                int h,j,res;
                cout <<" \n Enter the First number = ";  
                cin >> h;  
                cout << "\n Enter the Second number = ";  
                cin >> j; 
                res = h % j; // modulus expression  
                cout <<"\n Modulus returns a remainder: "<<res; 
                break;
        }
        
        default:
        {
            cout<<"Invalid Output"<<endl;
            break;
        }
    }
    cout<<endl;
    Advanced_Calculator();
}

void Digital_Calculator :: Trignometry_Calculation()
{
    cout<<"***** Trignometry Calculation ***** "<<endl;
    cout<<"1. sin  "<<endl;
    cout<<"2. cos "<<endl;
    cout<<"3. tan "<<endl;
    cout<<"4. asin "<<endl;
    cout<<"5. acos "<<endl;
    cout<<"6. atan "<<endl;
    cout<<"7. cosh "<<endl;
    cout<<"8. tanh "<<endl;
    int opts;
    cout<<"Enter your option: "<<endl;
    cin>>opts;
    
    switch(opts)
    {
        case 1: 
        {
            double x;
            cout<<"Enter a no: "<<endl;
            cin>>x;
            cout << "Sine value of x: "
            << sin(x) << endl;
            break;
        }
        
        case 2: 
        {
            double ab;
            cout<<"Enter a no: "<<endl;
            cin>>ab;
            cout << "Cosine value of x: "
            << cos(ab) << endl;
            break;
        }
        
        case 3: 
        {
            double ac;
            cout<<"Enter a no: "<<endl;
            cin>>ac;
            cout << "Tangent value of x: "
            << tan(ac) << endl;
            break;
        }
        
        case 4: 
        {
            double ad;
            cout<<"Enter a no: "<<endl;
            cin>>ad;
            cout << "Arc Cosine value of x: "
            << acos(ad) << endl;
            break;
        }
        
        case 5: 
        {
            double ae;
            cout<<"Enter a no: "<<endl;
            cin>>ae;
            cout << "Arc Sine value of x: "
            << asin(ae) << endl;
            break;
        }
        
        case 6: 
        {
            double af;
            cout<<"Enter a no: "<<endl;
            cin>>af;
            cout << "Arc Tangent value of x: "
            << atan(af) << endl;
            break;
        }
        
        case 7: 
        {
            double ag; // in degrees
            cout<<"Enter a no: "<<endl;
            cin>>ag;
            cout << "Hyperbolic Cosine of x: "
            << cosh(ag) << endl;
            break;
        }
        
        case 8: 
        {
            double ah; // in degrees
            cout<<"Enter a no: "<<endl;
            cin>>ah;
            cout << "Hyperbolic Tangent of x: "
            << tanh(ah) << endl;
            break;
        }
        
        default:
        {
            cout<<"Invalid Output"<<endl;
            break;
        }
    }
    cout<<endl;
    Advanced_Calculator();
}

void Digital_Calculator :: Inverse_Operator_Calculation()
{
    cout<<"***** Inverse Operator Calculation ***** "<<endl;
    cout<<"1. Square of a number "<<endl;
    cout<<"2. Square Root of a number "<<endl;
    int opt;
    cout<<"Enter your option: "<<endl;
    cin>>opt;
    
    switch(opt)
    {
        case 1: 
        {
            cout<<"------ Square of a number ------"<<endl;
            double no1;  
            float sq;  
            cout <<" \n Enter a number to find the Square: ";  
            cin >> no1;  
            sq = no1 * no1; 
            cout <<" \n Square of " << no1<< " is : "<< sq;  
            break;
        }
        
        case 2:
        {
            cout<<"------ Square Root of a number ------"<<endl;
            float q;  
            double number1;
            cout << "\n Enter the number to find the Square Root:";  
            cin >> number1;  
            q = sqrt(number1);  
            cout <<" \n Square Root of " << number1<< " is : "<< q;  
        }
        
        default:
        {
                cout<<"Invalid Output"<<endl;
                break;
        }
    }
    cout<<endl;
    Advanced_Calculator();
}

void Digital_Calculator :: Interest()
{
    cout<<"***** Interest ***** "<<endl;
    cout<<"1. Simple Interest "<<endl;
    cout<<"2. Compound Interest "<<endl;
    
    int opt;
    cout<<"Enter your option: "<<endl;
    cin>>opt;
    
    switch(opt)
    {
        case 1: 
        {
            cout<<"------ Simple Interest ------"<<endl;
            double principle,rate,time,si;
            cout<<"Enter principle: "<<endl;
            cin>>principle;
            cout<<"Enter rate: "<<endl;
            cin>>rate;
            cout<<"Enter time: "<<endl;
            cin>>time;
            
            si = principle * rate * time;
            cout<<"Simple Interest: "<<si;
            
            break;
        }
        
        case 2:
        {
            cout<<"------ Compound Interest ------"<<endl;
            double A,P,r,n,t;
            cout<<"Enter principle: "<<endl;
            cin>>P;
            cout<<"Enter rate: "<<endl;
            cin>>r;
            cout<<"Enter time: "<<endl;
            cin>>t;
            cout<<"Enter no of times interest applied per time period: "<<endl;
            cin>>n;
            
            A = P*pow((1 + r/n),(n*t));
            cout<<"Compound Interest: "<<A;
            break;
        }
        
        default:
        {
            cout<<"Invalid Output"<<endl;
            break;
        }
    }
    cout<<endl;
    Advanced_Calculator();
}

void Digital_Calculator :: Advanced_Calculator()
{
    cout<<endl;
    cout<<"------ Advanced Calculator ------"<<endl;
    cout<<"1. Arithmatic Calculation"<<endl;
    cout<<"2. Trignometry Calculation"<<endl;
    cout<<"3. Inverse Operator Calculation"<<endl;
    cout<<"4. Interest"<<endl;
    cout<<"5. Exit"<<endl;
    
    int prefer;
    cout<<"Enter your choice: "<<endl;
    cin>>prefer;
    cout<<endl;
    
    if(prefer == 1)
    {
        Arithmatic_Calculation();
    }
    else if(prefer == 2)
    {
        Trignometry_Calculation();
    }
    else if(prefer == 3)
    {
        Inverse_Operator_Calculation();
    }
    else if(prefer == 4)
    {
        Interest();
    }
    else if(prefer == 5)
    {
        return;
    }
    else 
	{
		cout <<"Expected Options are 1/2/3/4/5"<<endl;
		cout<<endl;
		Advanced_Calculator();
	}
}

int main()
{
    Digital_Calculator dc;
    dc.Advanced_Calculator();
    return 0;
}



