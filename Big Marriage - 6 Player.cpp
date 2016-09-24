
#include <iostream>
using namespace std; 
#include <string>

int main()
{

    int a,b,c,d,e,f,g,h,i,j,k;
    
	cout << "# of Players: ";
		cin >> h;
		
			
			if(h==2) {
				
				cout << "Player 1 points: ";
				cin>> a;
				cout << "Player 2 points: ";
				cin>> b;
				cout << "Player 2 hand: ";
				cin>> c;
				cout << " "; 
				cout << " ";
				cout << "Results: ";
				cout << "Player 1: " << a+c-b << "   ";
				cout << "Player 2: " << b-a-c;
				
			cin >> i;
			}
			
			
			
			
			if (h==3) {
				
    cout << "Player 1 points:	"; 
		cin >> a; 
    cout << "Player 2 points: "; 
		cin >> b;
    cout << "Player 2 hand: "; 
		cin >> c;
    cout << "Player 3 points: "; 
		cin >> d; 
    cout << "Player 3 hand: "; 
		cin >> e;
    cout << "";
		cout << " ";
		cout << "results: " << " " ;
   
    cout << "Player 1: " << 2*a-b-d+c+e << "    ";
    cout << "Player 2: " << 2*b-c-a-d << "    ";
    cout << "Player 3: " << 2*d-e-a-b << "    " ;
	
	cin >> i;
	}

	else if (h == 4)	{   
    cout << "Player 1 points: "; 
    cin >> a; 
    cout << "Player 2 points: "; 
    cin >> b;
    cout << "Player 2 hand: "; 
    cin >> c;
    cout << "Player 3 points: "; 
    cin >> d; 
    cout << "Player 3 hand: "; 
    cin >> e;
    cout << "Player 4 points: ";
	cin >> f;
	cout << "Player 4 hand: ";
	cin >>g;
    cout << "  " ;
    cout << "results: " << " " ;
    cout << "Player 1: " <<  3*a-b-d-f+c+e+g<< "   ";
    cout << "Player 2: " << 3*b-c-a-d-f << "   ";
    cout << "Player 3: " << 3*d-e-a-b-f<< "   " ;
    cout << "Player 4: " << 3*f-g-a-b-d << "   " ;
	
	cin >> i;
}

else if (h == 5)	{   
    cout << "Player 1 points: "; 
    cin >> a; 
    cout << "Player 2 points: "; 
    cin >> b;
    cout << "Player 2 hand: "; 
    cin >> c;
    cout << "Player 3 points: "; 
    cin >> d; 
    cout << "Player 3 hand: "; 
    cin >> e;
    cout << "Player 4 points: ";
	cin >> f;
	cout << "Player 4 hand: ";
	cin >>g;
	cout << "Player 5 points: ";
	cin >>h;
	cout << "Player 5 hand: ";
	cin >>i;
    cout << "  " ;
    cout << "results: " << " " ;
    cout << "Player 1: " <<  4*a-b-d-f-h+c+e+g+i<< "   ";
    cout << "Player 2: " << 4*b-c-a-d-f-h<< "   ";
    cout << "Player 3: " << 4*d-e-a-b-f-h<< "   " ;
    cout << "Player 4: " << 4*f-g-a-b-d-h<< "   " ;
	cout << "Player 5: " << 4*h-i-a-b-d-f<< "   ";	
	
	cin >> i;
}

else if (h == 6)	{   
    cout << "Player 1 points: "; 
    cin >> a; 
    cout << "Player 2 points: "; 
    cin >> b;
    cout << "Player 2 hand: "; 
    cin >> c;
    cout << "Player 3 points: "; 
    cin >> d; 
    cout << "Player 3 hand: "; 
    cin >> e;
    cout << "Player 4 points: ";
	cin >> f;
	cout << "Player 4 hand: ";
	cin >>g;
	cout << "Player 5 points: ";
	cin >>h;
	cout << "Player 5 hand: ";
	cin >>i;
	cout << "Player 6 points: ";
	cin >>j;
	cout << "Player 6 hand: ";
	cin >>k;
    cout << "  " ;
    cout << "results: " << " " ;
    cout << "Player 1: " << 5*a-b-d-f-h-j+c+e+g+i+k<< "   ";
    cout << "Player 2: " << 5*b-c-a-d-f-h-j<< "   ";
    cout << "Player 3: " << 5*d-e-a-b-f-h-j<< "   " ;
    cout << "Player 4: " << 5*f-g-a-b-d-h-j<< "   " ;
	cout << "Player 5: " << 5*h-i-a-b-d-f-j<< "   ";	
	cout << "Player 6: " << 5*j-k-a-b-d-f-h<< "   ";
	
	cin >> i;

}

else { 
		return(0);
}
}