for(int i=0;i<=N;i++){
  p[i]=i;     
}

for(int i=2;i<=N;i++){
  if(p[i]==i){
    int x=i;
    for(int k=x*2;k<=N;k+=x){
      p[k]=((p[k])/x)*(x-1);
    }
  }
}
