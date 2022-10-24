LList* GopDS(LList L1,LList L2)
{
	if(L1->spt==0 && L2->spt==0)
		return &L1;
	if(L1->spt==0)
		return &L2;
	if(L2->spt==0)
		return &L1;
	L1->spt+=L2->spt;
	L1->pTail->link=L2->pHead;
	L1->pTail=L2->pTail;
	return &L1;
}
