BEGIN   {
	RS="<.[A-Z]+>";
	FS="#";
        nf=0;            
        cmd = "awk -f keyboardio-color-num.awk keymapper.csv";
        while ((cmd |& getline ) > 0) {
              temp[$2]=$3;
              }       		
        close(cmd);            
        skipflag=0;
        RS="\n"; 
	FS="[:(]";
        }
{ 
   if ($0 ~/void/ && $3 ~/ledeffectlayer[1-9]/) {
	print $0;    
	i = substr($3,length($3),1);
	print temp[i];
	skipflag=1;
    }
   else {
    if (skipflag==0) print $0;
    if ($0 ~/}/ && skipflag==1)
	print "}";
	skipflag=0;              
    } 
}

