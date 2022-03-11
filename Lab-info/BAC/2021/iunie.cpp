III.1 

void divPrim(unsigned int n, unsigned int &s)
{
    unsigned int divizor = 2;
    while (n > 1)
    {
        if(n % divizor == 0)
        {
            unsigned int putere = 0;
            while(n % divizor == 0)
            {
                putere = putere + 1;
                n = n / divizor;
            }
            if(putere % 2 == 1)
                s = s + divizor;
        }
        divizor++;
    }
}

III.2

