awk 'BEGIN{FS=";";sum=0;}{if(substr($2,0,2)=="11"){sum=sum+$3;}}END{print sum}' $1
