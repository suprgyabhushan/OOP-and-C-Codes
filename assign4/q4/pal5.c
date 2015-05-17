countEvens(array,size) is 0 if array is empty
countEvens(array,size) is 1 + countEvens(tail(array),size) if head(array) is even.
countEvens(array,size) is countEvens(tail(array),size) if otherwise
int countEvens(int array[],int size)
{
	for(i=0;i<size;i++)
	{
		if(array[i]==NULL)
		{
			
int head(items)
{
return items[0];
}
tail(items): return items[1:]
