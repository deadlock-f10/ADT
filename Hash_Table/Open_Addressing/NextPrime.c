int static TestPrime(int X)
{
	int i=2;
	for(i=2;i*i<=X;i++)
	{
		if(X%i==0)
			return 0;	
	}
	return 1;
}
int NextPrime(int X)
{
	int i;
	for(i=2*(X/2)+1;;i+=2)
		if(TestPrime(i)==1)
			return i;
}
