bool isValid(char* s) {
    int l=strlen(s),i;
    if(l == 1) return false;
    char st[l];
    int top=-1;
    for(i=0;i<l;i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st[++top]=s[i];
        }
        else if(top >= 0 && s[i]==')' && st[top]=='('){
            top--;
        }
        else if(top >= 0 && s[i]=='}' && st[top]=='{'){
            top--;
        }
        else if(top >= 0 && s[i]==']' && st[top]=='['){
            top--;
        }
        else{
            return false;
        }
        
    }
    if(top<0){
        return true;
    }
    else{
        return false;
    }
    
}