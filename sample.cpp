#include <stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int buffer[N],in=0,out=0
		samaphore empty=N,full=0,mutex=1;
	do{
		item=produce_item();
		wait(empty);
		wait(mutex);
		buffer[in]=item;
		in(in+1)%N;
		signal(mutex);
		signal(full);
	}while (true);
	do{
		wait(full);
		wait(mutex);
		item=buffer[out];
		out(out+1)%N;
		signal(mutex);
		signal(out);
		consume_item(item);
	}while (true);
}

