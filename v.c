{
    int i = 0, flag = 0, points = 0, e = 0, plus = 0, minus = 0, space = 1;

    while(A[i]!='\0')
    { && A[i]<='9')))
            return 0;
        
        if(A[i] == '.')
            if(!(A[i+1]!='\0' && A[i+1]<='9' && A[i+1]>='0')) 
                return 0;

        if(A[i]<='9' && A[i]>='0')      flag=1;
        if(flag == 1 && A[i] == ' ')    flag=2;
        if(flag == 1 && ( A[i] == '+' || A[i] == '-')) return 0;
        if(A[i] == '.') points++;
        if(A[i] == 'e') {   e++; minus=0;   plus=0;     flag=0;     }
        if(A[i] == '+') plus++;
        if(A[i] == '-') minus++;
        if(points>1 || e >1 || plus>1 || minus>1)       return 0;
        if(e>0 && A[i] == '.') return 0;
        if(A[i]>='0' && A[i]<='9') space=0;
        i++;
    }
    if(space  ==  1) return 0;
    return 1;
}

