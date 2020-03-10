BEGIN   {
        nf=0;
	# We read in the csv file prepared by the mapper script
        cmd = "awk -f keyboardio-mapper.awk keymapper.csv";
        while ((cmd |& getline line) > 0) {
              nf=nf+1;      
              temp[nf]=line;
              }
        close(cmd);
        skipflag=0;
        }
{
   #We look for the right position to insert the KEYMAPS
   if($0 ~/layers/ && $0 ~/enum/) {
    for (i = 1; i <= nf; ++i)  print temp[i];
    next;
	}
#The rest of the lines are simply copied if you change your "Model1-firmware.gen" file the changes will be kept
   else {
 	print $0;
    	} 
}

