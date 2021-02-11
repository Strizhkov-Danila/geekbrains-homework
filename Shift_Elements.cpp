namespace HW5
{
	void Shift_Elements (int Array[], int n)
	{
        	int Some_Array[ARRAY_SIZE] = {0};

        	if (n > 0)
        	{
                	for (int i = ARRAY_SIZE - 1, j = 0, k = n, m = n - 1; i >= 0; i--, j++, k++, m--)
                	{
                		if (m >= 0)
					Some_Array[m] = Array [i];

                		if (k < ARRAY_SIZE)
                        		Some_Array[k] = Array[j];
                	}

                	for (int i = 0; i < ARRAY_SIZE; i++)
                        	Array[i] = Some_Array[i];
        	}

         	if (n < 0)
        	{
                	for (int i = ARRAY_SIZE + n, j = 0, k = ARRAY_SIZE + n - 1, m = ARRAY_SIZE - 1; j < ARRAY_SIZE; i++, j++, k--, m--)
                	{
                        	if (i < ARRAY_SIZE)
                                	Some_Array[i] = Array[j];
                        	if (k >= 0)
                                	Some_Array[k] = Array[m];
                	}

                for (int i = 0; i < ARRAY_SIZE; i++)
                        Array[i] = Some_Array[i];
        	}
	}
}
