int static TestPrime(int X)
{
	int i=2;
	for(i=2;i*i<=X;i++)
	{
		if(X%i==0)
			break;
			
	}
	if(i*i>X)
		return 1;
	else
		return 0;
}
int NextPrime(int X)
{
	int i;
	for(i=2*(X/2)+1;;i+=2)
		if(TestPrime(i)==1)
			return i;
}
