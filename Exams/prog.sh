awk 'BEGIN{print "Name\t\tHouse No\t\tPhone";RS="\n\n";FS="\n";ORS="\n";OFS="\t"} {$1=$1;print $0}' $1
