//int** fun(int n) {
//    int** s = (int**)malloc(n * sizeof(int*));
//    while (n--)
//        s[n] = (int*)malloc(n * sizeof(int));
//    return s;
//}
//void SeqListInit(SeqList* psl)
//{
//	assert(psl != NULL); 
//	psl->a = NULL;  
//	psl->size = 0; 
//	psl->capacity = 0;  
//}
//void SeqListDestory(SeqList* psl)
//{
//	assert(psl != NULL);  //断言
//
//	free(psl->a);   
//	psl->a = NULL;  
//	psl->size = 0;  
//	psl->capacity = 0;  
//}
//void SeqListPushBack(SeqList* psl, SLDataType x)
//{
//	assert(psl != NULL);  
//	CheckCapacity(psl);  
//	psl->a[psl->size] = x;  
//	psl->size++;  
//}
//void SeqListPopBack(SeqList* psl)
//{
//	assert(psl != NULL);  
//	assert(psl->size > 0); 
//	psl->size--;  
//}
//void SeqListPushFront(SeqList* psl, SLDataType x)
//{
//	assert(psl); 
//	CheckCapacity(psl);  
//	int i = 0;
//	for (i = psl->size - 1; i >= 0; i--)  
//	{
//		psl->a[i + 1] = psl->a[i];
//	}
//	psl->a[0] = x;
//	psl->size++;
//}
//void SeqListPopFront(SeqList* psl)
//{
//	assert(psl);  
//	assert(psl->size > 0);  
//	int i = 0;
//	for (i = 1; i < psl->size; i++) 
//	{
//		psl->a[i - 1] = psl->a[i];
//	}
//	psl->size--;  
//}
//void SeqListPrint(const SeqList* psl)
//{
//	assert(psl != NULL);  
//	if (psl->size == 0)  
//	{
//		printf("顺序表为空\n");
//		return;
//	}
//	int i = 0;
//	for (i = 0; i < psl->size; i++) 
//	{
//		printf("%d ", psl->a[i]);
//	}
//	printf("\n");
//}
//int SeqListFind(const SeqList* psl, SLDataType x)
//{
//	assert(psl);  
//	int i = 0;
//	for (i = 0; i < psl->size; i++)
//	{
//		if (psl->a[i] == x)
//		{
//			return i; 
//		}
//	}
//	return -1; 
//}
//void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
//{
//	assert(psl);  
//	assert(pos >= 0 && pos <= psl->size);  
//	CheckCapacity(psl);
//	size_t i = 0;
//	for (i = psl->size; i > pos; i--) 
//	{
//		psl->a[i] = psl->a[i - 1];
//	}
//	psl->a[pos] = x;  
//	psl->size++;  
//}
//void SeqListErase(SeqList* psl, size_t pos)
//{
//	assert(psl); 
//	assert(psl->size > 0); 
//	assert(pos >= 0 && pos < psl->size);  
//	size_t i = 0;
//	for (i = pos + 1; i < psl->size; i++)  
//	{
//		psl->a[i - 1] = psl->a[i];
//	}
//	psl->size--; 
//}
//int removeElement(int* nums, int numsSize, int val)
//{
//    int n = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] != val)
//        {
//            nums[n] = nums[i];
//            ++n;
//        }
//    }
//    return n;
//};
