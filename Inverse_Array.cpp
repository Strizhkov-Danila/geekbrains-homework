namespace HW5 
{
	void Inverse_Array (int Array[])
	{
        	for (int i = 0; i < ARRAY_SIZE; i++)
       		         Array[i] ^= 1;
	}

	void Inverse_Array (int elem, ...)
	{
        	va_list lst;

        	va_start (lst, elem);

        	for (int i = 0; i < elem; i++)
        	{
                	std :: cout << (va_arg(lst, int) ^ 1) << " ";
        	}

        	va_end (lst);
	}

}
