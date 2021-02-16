string columnName(int n)
{
   char result[100];
   int a=0;
   while(n>0)
   {
         n = n-1;
         int remainder = n%26;
    
		 result[a] = 'A' + remainder;
	     a++;
		 		 
		 n = n/26;
           
   }
   reverse();
}
