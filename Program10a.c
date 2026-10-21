int addition (int iFirstNumber,int iSecondNumber)
{
	if(iFirstNumber<0)
	{
		iFirstNumber= -iFirstNumber;
	}
	if(iSecondNumber<0)
	{
		iSecondNumber= -iSecondNumber;
	}
	return iFirstNumber+iSecondNumber;
}
