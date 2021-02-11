namespace HW5 
{
bool Check_Balance (int Array[])
{
	int Left_Check = Array[0];
	int Right_Check = Array[ARRAY_SIZE - 1];
	bool result = false;
	int i = 0, j = ARRAY_SIZE - 1;

	while (!result)
	{
		if (Left_Check > Right_Check && (j - 1 != i))
                {
			Left_Check -= Right_Check;
                        j--;
                        Right_Check = Array[j];
                }

                if (Left_Check < Right_Check && (i + 1 != j))
                {
                        Right_Check -= Left_Check;
                        i++;
                        Left_Check = Array[i];
                }

                if (Left_Check == Right_Check && (i + 1 != j))
                {
                        i++;
                        j--;
                        Left_Check = Array[i];
                        Right_Check = Array[j];
                }

                if (i == j)
                        break;

                if (Left_Check == Right_Check && (i + 1 == j))
                        result = true;

                if (Left_Check != Right_Check && (i + 1 == j))
                	break;
        }

        return result;
}
}
