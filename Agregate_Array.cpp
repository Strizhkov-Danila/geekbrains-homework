namespace HW5
{
	void Agregate_Array(int Array[])
	{
        	for (int i = 0, j = 1; i < ARRAY_SIZE; i++, j+= 3)
        	        Array[i] = j;
	}
}
