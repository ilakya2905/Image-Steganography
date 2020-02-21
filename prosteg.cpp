#include<cmath>
#include<string.h>
#include <cstdio>
#include <cstdlib>
#include<conio.h>
#include "bitmap_image.hpp"
#include<iostream>
#include<cstring>
#include<fstream>
#include<string>
using namespace std;


void display(char a[20])
{
	
	system(a);
	
	
}


class stegno
{
	public:
	bitmap_image  image;
	void detext()
	{
	
		
	
	
	int n;
	
	int x;
	
	int remainder;
	int l=1;
	int k;
	k=0;
	long binary=0;
	
	
	

	int count=0;
	
	
	long bina=binary;
	int bt[8];
	
	
		
	int v=7,v1=7;

	
	int rc[8];
	int gc[8];
	int bc[8];
	long b1=0;
	long b2=0;
	long b3=0;
	int q=0;
int flag;
	
		
		
		int r=0,g=0,b=0;
			int height=image.height();
			int width=image.width();
		
		for(std::size_t i=0;i<height;i++)
		{
		
		for(std::size_t j=0;j<width;j++)
	{
		
		rgb_t colour;
	image.get_pixel(j,i,colour);
	
	r=colour.red;
	g=colour.green;
	b=colour.blue;
	
	
remainder=0;
l=1;		
	
	
	
	while(r!=0)
	{
		
		
		remainder=r%2;
	    r=r/2;
	    b1=b1+(remainder*l);
	    l=l*10;
	    
	}
	
	
	
	remainder=0;
	l=1;
	
	
	while(g!=0)
	{
		
		remainder=g%2;
	    g=g/2;
	    b2=b2+(remainder*l);
	    l=l*10;
	    
	}
	
	remainder=0;
	l=1;
	while(b!=0)
	{
		
		remainder=b%2;
	    b=b/2;
	    b3=b3+(remainder*l);
	    l=l*10;
	    
	}
	
	
		
	
	count=0;
	v=7;
bina=b1;	
	while(bina!=0)
	{
		bina/=10;
		count++;
		
}	
	
	
	
	if(count==8)
	{
	
	while(b1!=0)
	{
		rc[v]=b1%10;
		b1=b1/10;
		v--;
	}
}
else
{
	rc[0]=0;
	
	while(b1!=0)
	{
		rc[v]=b1%10;
		b1=b1/10;
		v--;
	}
	
}
	v=0;
	
	

count=0;
bina=b2;
v=7;	
		while(bina!=0)
	{
		bina/=10;
		count++;
		
}
	if(count==8)
	{
	
	while(b2!=0)
	{
		gc[v]=b2%10;
		b2=b2/10;
		v--;
	}
}
else
{
	gc[0]=0;
	
	while(b2!=0)
	{
		gc[v]=b2%10;
		b2=b2/10;
		v--;
	}
	
}
	
	
	bina=b3;
	count=0;
	v=7;
		while(bina!=0)
	{
		bina/=10;
		count++;
		
}
	if(count==8)
	{
	
	while(b3!=0)
	{
		bc[v]=b3%10;
		b3=b3/10;
		v--;
	}
	
}
else
{
	bc[0]=0;
	
	while(b3!=0)
	{
		bc[v]=b3%10;
		b3=b3/10;
		v--;
	}
	
}
	if(q==8)
	{
		flag=1;
			goto ji;
		}
	else
	{
	g1:
		flag=0;
	
	bt[q]=rc[7];
	q++;
    }
	if(q==8)
	{
	flag=2;	
	goto ji;
}
	else
	{
	g2:
		flag=0;
	
		bt[q]=gc[7];
		q++;
	}
	if(q==8)
	{
	flag=3;	
	goto ji;
}
	else
	{
	g3:
		flag=0;
	
		bt[q]=bc[7];
		q++;
	}
	
	
	
	ji:
	
		
		
		

	
	
	
	
	if(q>=8)
	{
			
		
		
		
		n=0;
		
		
			x=0;
			binary=bt[0];
			
			for(x=1;x<8;x++)
			{
				binary=(binary*10)+bt[x];
				
				}
		
		
	
		if(binary==0)
		return;
		
		x=0;	
			
			
			
	while(binary!=0)
	{
		remainder=binary%10;
		binary/=10;
		n=n+remainder*(pow(2,x));
		x++;
	}
	

  
  char ch;
  
  ch=n;
  
  

  
  cout<<ch;  
	
	
	q=0;
	switch(flag)
	{
		case 0:
			break;
		case 1:
			goto g1;
			break;
			case 2:
				goto g2;
				break;
				
				case 3:
					goto g3;
					break;
					
	}
	
}
	
}

}


}




void embedtext()
{
	
	int height=image.height();
			int width=image.width();
			
	
int hu;
hu=height*width*3;
hu=(hu/8)-1;
	
	char str[hu];
	cout<<"\n these much characters can be embeded in the image"<<hu;
cin.ignore(hu,'\n');
		cout<<"\n enter the data to be embed";
	       cin.getline(str,hu);
                     

	
		 
		 




		 
		
	
		int n=str[0];
	
	int si=0;
	
	int mn;
	for(mn=0;str[mn]!='\0';mn++)
	si++;
	
	cout<<si;
	
	cout<<"string is"<<str<<"\n";
	
	int mi=0;
	
	
	int remainder;
	int l=1;
	int k;
	k=0;
	long binary=0;
	
	cout<<n;
	
	while(n!=0)
	{
		
		remainder=n%2;
	    n=n/2;
	    binary=binary+(remainder*l);
	    l=l*10;
	    
	}
	cout<<"\n binary="<<binary;
	int count=0;
	
	int n1=n;
	long bina=binary;
	int bt[8];
	while(bina!=0)
	{
		bina/=10;
		count++;
		
}
	
	
	
	
	int v=7,v1=7;
if(count==8)
{
	while(binary!=0)
	{
		bt[v]=binary%10;
		binary=binary/10;
		v--;
	}
	
}	
else
	{
		bt[0]=0;
		while(binary!=0)
		{
			bt[v1]=binary%10;
			binary=binary/10;
			v1--;
		}
		
		
		
	}
	
	int f;
	
	int rc[8],gc[8],bc[8];
	long b1=0;
	long b2=0;
	long b3=0;
	int q=0;
int charindex=0;
int charvalue=0;

long colorindex=0;
		int zeros=0;
		
		
		int r=0,g=0,b=0;
	int flag;

			
		
		for(std::size_t i=0;i<height;i++)
		{
		
		for(std::size_t j=0;j<width;j++)
	{
		
		rgb_t colour;
	image.get_pixel(j,i,colour);
	
	r=colour.red;
	b=colour.blue;
	g=colour.green;
	
	
remainder=0;
l=1;		
	
	while(r!=0)
	{
		
		
		remainder=r%2;
	    r=r/2;
	    b1=b1+(remainder*l);
	    l=l*10;
	    
	}
	
	remainder=0;
	l=1;
	
	
	while(g!=0)
	{
		
		remainder=g%2;
	    g=g/2;
	    b2=b2+(remainder*l);
	    l=l*10;
	    
	}
	
	remainder=0;
	l=1;
	while(b!=0)
	{
		
		remainder=b%2;
	    b=b/2;
	    b3=b3+(remainder*l);
	    l=l*10;
	    
	}
	
	v=7;
	while(b1!=0)
	{
		rc[v]=b1%10;
		b1=b1/10;
		v--;
	}
	
	v=7;
	
	while(b2!=0)
	{
		gc[v]=b2%10;
		b2=b2/10;
		v--;
	}
	
	
	v=7;
	while(b3!=0)
	{
		bc[v]=b3%10;
		b3=b3/10;
		v--;
	}
	
	if(q==8)
	{
	flag=1;
	goto ji;
	
    }
		else
	{
		f1:
	flag=0;
	rc[7]=bt[q];
	cout<<"\n"<<rc[7];
	q++;
    }
	if(q==8)
	{
		
	flag=2;
	
	goto ji;
	
	}
	else
	{
		f2:
			flag=0;
		gc[7]=bt[q];
		cout<<"\n"<<gc[7];
		q++;
	}
	if(q==8)
	{
	flag=3;
	goto ji;
	
	}
	else
	{
		f3:
			flag=0;
		bc[7]=bt[q];
		cout<<"\n"<<bc[7];
		q++;
	}
	
	
	
	b1=rc[0];
	b2=gc[0];
	b3=bc[0];
	ji:
	for(int ij=1;ij<8;ij++)
	{
		b1=(b1*10)+rc[ij];
		b2=(b2*10)+gc[ij];
		b3=(b3*10)+bc[ij];
		
		}	
		
		
		r=b=g=0;
		int x=0;
		
		
		while(b1!=0)
		{
		remainder=b1%10;
		b1/=10;
		r+=remainder*(pow(2,x));
		x++;	
		}
		
		x=0;
		
		while(b2!=0)
		{
			remainder=b2%10;
			b2/=10;
			g=g+remainder*(pow(2,x));
			x++;
		}
	
	x=0;
	while(b3!=0)
	{
		remainder=b3%10;
		b3/=10;
		b=b+remainder*(pow(2,x));
		x++;
		
	}
	
	colour.red=r;
	colour.blue=b;
	colour.green=g;
	
	cout<<"\n r=="<<r;
	cout<<"\nb=="<<b;
	cout<<"\ng=="<<g;
	image.set_pixel(j,i,colour);
	
	if(q>=8)
	{
	
	mi++;
	
	if(mi==(si+1))
	{
		char fi[20];
		cout<<"\n enter the filename to be saved";
		cin>>fi;
		image.save_image(fi);
		return;
	}
	
	if(str[mi]=='`')
	str[mi]=' ';
	
	if(str[mi]!='\0')
	{
       
	
	

	n=str[mi];
	
	q=0;
	
	binary=0;
	l=1;
	cout<<"\n value:"<<n;
		while(n!=0)
	{
		
		remainder=n%2;
	    n=n/2;
	    binary=binary+(remainder*l);
	    l=l*10;
	    
	}
	cout<<"\n binary="<<binary;
	 count=0;
	
	
	 n1=n;
	 bina=binary;
	
	while(bina!=0)
	{
		bina/=10;
		count++;
		
}
	
	
	
	
	v=7;
	v1=7;
if(count==8)
{
	while(binary!=0)
	{
		bt[v]=binary%10;
		binary=binary/10;
		v--;
	}
	
}	
else
	{
		bt[0]=0;
		if(count==6)
		bt[1]=0;
		while(binary!=0)
		{
			bt[v1]=binary%10;
			binary=binary/10;
			v1--;
		}
		
		
		
	}
}

else
{
	int je;
	for(je=0;je<8;je++)
	bt[je]=0;
	cout<<"done hey";
	q=0;
	
}
cout<<"\nflag=="<<flag;	
	
	switch(flag)
	{
		
		case 0:
			break;
			
		case 1:
			goto f1;
			break;
			case 2:
				goto f2;
				break;
				
				case 3:
					goto f3;
						break;

				
				}
	

	
	}
	
}

}

	
	
	
}



};



int main()
{


    char a[20];
int choi;
gh:
	
	system("cls");
	cout<<"\n enter the image name";
	cin>>a;
	
	std::string file_name(a);
	stegno s;
	
	s.image=file_name;
	
	


	

   if (!s.image)
   {
      cout<<"\n not succes";      
	cout<<"\n enter a valid image name";
	goto gh;
   }

else
     cout<<"\n sucess";

int choice;

cout<<"\n 1.encrypt \n 2.decrypt \n 3.display \n enter the choice";
cin>>choice;
switch(choice)
{
	case 1:
		
		s.embedtext();
		
		break;
	case 2:
		s.detext();
		break;
	case 3:
		display(a);
		break;
}

cout<<"\n wanna continue press 1";
cin>>choi;

if(choi==1)
goto gh;

cout<<"\n end in main";
}
