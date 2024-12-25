// count the occurence of "ch" in string
int StrCount(const char* str, char ch){
  int i;
  int count = 0;
  for(i = 0; str[i] != '\0'; ++i){
    if(str[i] == ch){
      count++;
    }
  }
  return count;
}