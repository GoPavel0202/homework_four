//pull
#include <iostream>

int main(int argc, const char** argv) {
//4.1
	int a = 10;
    int b = 9;
	
	if (10 <= a + b && a + b <= 20) {
		std::cout << "true" << std::endl;
	}
	else { 
       std::cout << "false" << std::endl;
	  }
//4.2
     int n = 4;  
     int d ;  
     float r;  
     d = 2;        
     do {
        r = n % d;
        if (r != 0) d++;	
     }
     while ( r != 0 && n > 1); {
     if (d == n  )
	 printf("%d - Prostoe" ,n);
     else  {printf("%d - Ne prostoe\n" ,n);}
	 
	 }
//4.3
	const int a1 = 0;
	const int b1 = 10;
	if (10 == b1 + a || b1 == 10 || a1 == 10) {
		std::cout << "true" << std::endl;
	}
	else { 
       std::cout << "false" << std::endl;
	}
//4.4
	const int c1 = 8;
	const int d1 = 8;
	 for (int y = 1; y < c1; y++) {
        for (int x = 1; x < d1; x++) {
			printf("%3d ", (y * 0) * (x * 0));
        }
		
        std::cout << std::endl;
    }
//4.5
	int god = 400;
	if (god % 4 || (god / 100 && god % 400))
	printf("nevesokosniy god\n");
	else printf("vesokosniy\n");
	
	 return 0;
}