#include <iostream>
using namespace std;



int main(){
	int nx=80;
	int nt=50;
	double xf=2.0;
	double dx=xf/nx;
	double dt=dx*0.5;
	double tf=nt*dt;
	double up[nx];
	double uf[nx];	
	up[0]=1.0;
	for(int j=0; j<nt+1 ; j++)
	{
		cout << 0 << "	" << up[0] << endl;
		for(int i=1; i<nx+1 ; i++)
		{	
			up[0]=1.0;
			if(j==0 && ( i<(0.75*nx/xf) || i>(1.25*nx/xf)))
			{	
				up[i]=1.0;
				cout << i << "	" << up[i] << endl;
			}
			if( j==0 && i>=(0.75*nx/xf) && i<=(1.25*nx/xf))
			{
				up[i]=2.0;	
				cout << i << "	" << up[i] << endl;
			}
			if(j!=0)
			{
				uf[i]=(-1.0*(dt/dx)*(up[i]-up[i-1]))+up[i];
				uf[0]=1.0;
				up[0]=1.0;
				up[i]=uf[i];
				cout << i << "	" <<up[i] << endl;
			}
		}
			
	}
	
	return 0;
}

