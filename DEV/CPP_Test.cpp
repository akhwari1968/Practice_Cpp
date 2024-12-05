void CWhiteBox::_02_DeleteComment(char *pSrc, char *pDes) 
{
    if (pSrc == NULL || pDes == NULL)
    return; 
    
    int len = 0;              
    bool cmmSin = false;
    bool cmmMul = false;
    char ch = *pSrc++; 
    char next = 0; 
    char* q = pSrc;
    
    while(*q != '\0')
	{
        len++;
		q++; 
	}
	
    if(len == 0) 
    return;
    
    while(ch) 
    { 
        if(!cmmSin && !cmmMul)
        {  
            if(ch == '/')
            {   
                next = *pSrc; 
                
                if(next == '\0')
                {
                    *pDes++ = ch;
                    break;
                }  
                else if(next == '*') 
                cmmMul = true; 
                else if(next == '/') 
                cmmSin = true; 
                
                if(cmmMul || cmmSin) 
                { 
                    pSrc++;
                    ch = *pSrc++; 
                    continue; 
                } 
            }             
            *pDes++ = ch; 
            ch = *pSrc++; 
        } 
        else if(cmmSin)
        { 
            if(ch == '\n')
            { 
                cmmSin = false; 
                *pDes++ = ch;
            } 
            ch = *pSrc++; 
        } 
        else if(cmmMul)
        { 
            if(ch == '*')
            { 
                next = *pSrc; 
                
                if(next == '/') 
                {   
					cmmMul = false; 
                    pSrc++;
                } 
            } 
            ch = *pSrc++; 
        } 
    }
    *pDes = '\0';
}
