BEGIN { 
FS = ","; 
OFS="#"
nlayer=0;
nkey=0;
ncmap=0;
layerline=0;
}
{
if (layerline>0) {
	name = LAYERNAMES[nlayer]
	
	if (color==1){ name = "cmap_"name}
   if (layerline==6) {
        keybarray[name][31]=$7;
        keybarray[name][32]=$12;
        layerline=0;
			color=0;
        }

   if (layerline==5) {
        keybarray[name][27]=$6;
        keybarray[name][28]=$7;
        keybarray[name][29]=$8;
        keybarray[name][30]=$9;

        keybarray[name][33]=$10;
        keybarray[name][34]=$11;
        keybarray[name][35]=$12;
        keybarray[name][36]=$13;
     
        layerline=6;
        }

   if (layerline==4) {
        keybarray[name][0]=$1;
        keybarray[name][7]=$2;
        keybarray[name][8]=$3;
        keybarray[name][15]=$4;
        keybarray[name][16]=$5;
        keybarray[name][23]=$6;
        keybarray[name][24]=$7;                

        keybarray[name][39]=$12;
        keybarray[name][40]=$13;
        keybarray[name][47]=$14;
        keybarray[name][48]=$15;
        keybarray[name][55]=$16;
        keybarray[name][56]=$17;
        keybarray[name][63]=$18;
     
        layerline=5;
        }


   if (layerline==3) {
        keybarray[name][1]=$1;
        keybarray[name][6]=$2;
        keybarray[name][9]=$3;
        keybarray[name][14]=$4;
        keybarray[name][17]=$5;
        keybarray[name][22]=$6;        

        keybarray[name][41]=$13;
        keybarray[name][46]=$14;
        keybarray[name][49]=$15;
        keybarray[name][54]=$16;
        keybarray[name][57]=$17;
        keybarray[name][62]=$18;
     
        layerline=4;
        }

    
    if (layerline==2) {
        keybarray[name][2]=$1;
        keybarray[name][5]=$2;
        keybarray[name][10]=$3;
        keybarray[name][13]=$4;
        keybarray[name][18]=$5;
        keybarray[name][21]=$6;        
        keybarray[name][25]=$7;

        keybarray[name][38]=$12;
        keybarray[name][42]=$13;
        keybarray[name][45]=$14;
        keybarray[name][50]=$15;
        keybarray[name][53]=$16;
        keybarray[name][58]=$17;
        keybarray[name][61]=$18;
        layerline=3;
        }

    if (layerline==1) {
        keybarray[name][3]=$1;
        keybarray[name][4]=$2;
        keybarray[name][11]=$3;
        keybarray[name][12]=$4;
        keybarray[name][19]=$5;
        keybarray[name][20]=$6;        
        keybarray[name][26]=$7;

       keybarray[name][39]$12;
       keybarray[name][43]=$13;
       keybarray[name][44]=$14;
       keybarray[name][51]=$16;
       keybarray[name][52]=$16;
       keybarray[name][59]=$17;
       keybarray[name][60]=$18;
        
        layerline=2;
        }
    }

if ($1 == "LAYER") {
    nlayer = nlayer + 1;
    LAYERNAMES[nlayer]=$2;    
    layerline=1;
    }
if ($1 == "COLORMAP") {
	ncmap = ncmap + 1;
	COLORMAP[ncmap]=$2;
	color=1;
	layerline=1;

	}

}
END {

for (k = 1; k <= ncmap; ++k) {
    name = COLORMAP[k];
	for (i in LAYERNAMES){if (name == LAYERNAMES[i]) break;} 
	layernumber = i-1;
	print "<COLORMAP>"name OFS layernumber OFS;  #create preamble with the name and position of the layer

    for (i = 0; i < 64; ++i) {
	kleur = keybarray["cmap_"name][i];
#	print kleur OFS h OFS i ;

	toets = keybarray[name][i];
	if (toets == "___" || toupper(toets) == "XXX") continue; #these keys are excluded
	
		R= strtonum("0x"substr(kleur,1,2));#convert hex to decimal
		G= strtonum("0x"substr(kleur,3,2));#convert hex to decimal
		B= strtonum("0x"substr(kleur,5,2));#convert hex to decimal
		print "::LEDControl.setCrgbAt("i", CRGB("R","G","B"));"
		}
	print  "</COLORMAP>"; #create postamble
	delete test;	
	}
}
