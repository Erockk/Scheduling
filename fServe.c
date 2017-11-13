#include "fserve.h"

void fserve(int size, struct schedule * s)
{
	
	double t = 0;
	int total = 0;
	int i = 0;
	int j = 0;
	
	for (i; i < size; i++)
	{
		if (i == 0)
		{
			s->Atime[i] = 0; //
		//	cout << s.Atime[i] << '\n';
			total = s->Stime[i] + s->Rtime[i];
	
		}
		else
		{
			if(total < s->Stime[i])
			{
				total = s->Stime[i];
				s->Atime[i] = 0;
				s->Atime[i] = total - s->Stime[i];
				total += s->Rtime[i];
			}
			else
			{
				s->Atime[i] = total - s->Stime[i];
				total += s.Rtime[i];
			}
//	cout << s.Atime[i] << '\n';
		}
	}
	for (j; j < size; j++)
	{ 
		t += s->Atime[j];
	}

printf("%d", t / size);

	
}
