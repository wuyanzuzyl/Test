#include <stdio.h>
long long derangement(int n)
{
	if (n == 1) return 0;
	if (n == 2) return 1;
    
    	long long d[n + 1];
    	d[1] = 0;  // D(1)
    	d[2] = 1;  // D(2)
    
   	for (int i = 3; i <= n; i++) 
	{
        	d[i] = (i - 1) * (d[i - 1] + d[i - 2]);
    	}
    
    	return d[n];
}

int main() 
{
    	int n;
    	printf("请输入信封和信件的数量 n: ");
    	scanf("%d", &n);

    	printf("有 %lld 种错位排列方式。\n", derangement(n));

    	return 0;
}

