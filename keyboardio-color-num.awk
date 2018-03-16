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
        keybarray[name][3][6]=$7;
        keybarray[name][3][9]=$12;
        layerline=0;
			color=0;
        }

   if (layerline==5) {
        keybarray[name][0][7]=$6;
        keybarray[name][0][8]=$13;
        keybarray[name][1][7]=$7;
        keybarray[name][1][8]=$12;

        keybarray[name][2][7]=$8;
        keybarray[name][2][8]=$11;
        keybarray[name][3][7]=$9;
        keybarray[name][3][8]=$10;
     
        layerline=6;
        }

   if (layerline==4) {
        keybarray[name][3][0]=$1;
        keybarray[name][3][1]=$2;
        keybarray[name][3][2]=$3;
        keybarray[name][3][3]=$4;
        keybarray[name][3][4]=$5;
        keybarray[name][3][5]=$6;
        keybarray[name][2][6]=$7;                

        keybarray[name][2][9]=$12;
        keybarray[name][3][10]=$13;
        keybarray[name][3][11]=$14;
        keybarray[name][3][12]=$15;
        keybarray[name][3][13]=$16;
        keybarray[name][3][14]=$17;
        keybarray[name][3][15]=$18;
     
        layerline=5;
        }


   if (layerline==3) {
        keybarray[name][2][0]=$1;
        keybarray[name][2][1]=$2;
        keybarray[name][2][2]=$3;
        keybarray[name][2][3]=$4;
        keybarray[name][2][4]=$5;
        keybarray[name][2][5]=$6;        

        keybarray[name][2][10]=$13;
        keybarray[name][2][11]=$14;
        keybarray[name][2][12]=$15;
        keybarray[name][2][13]=$16;
        keybarray[name][2][14]=$17;
        keybarray[name][2][15]=$18;
     
        layerline=4;
        }

    
    if (layerline==2) {
        keybarray[name][1][0]=$1;
        keybarray[name][1][1]=$2;
        keybarray[name][1][2]=$3;
        keybarray[name][1][3]=$4;
        keybarray[name][1][4]=$5;
        keybarray[name][1][5]=$6;        
        keybarray[name][1][6]=$7;

        keybarray[name][1][9]=$12;
        keybarray[name][1][10]=$13;
        keybarray[name][1][11]=$14;
        keybarray[name][1][12]=$15;
        keybarray[name][1][13]=$16;
        keybarray[name][1][14]=$17;
        keybarray[name][1][15]=$18;
        layerline=3;
        }

    if (layerline==1) {
        keybarray[name][0][0]=$1;
        keybarray[name][0][1]=$2;
        keybarray[name][0][2]=$3;
        keybarray[name][0][3]=$4;
        keybarray[name][0][4]=$5;
        keybarray[name][0][5]=$6;        
        keybarray[name][0][6]=$7;

       keybarray[name][0][9]=$12;
       keybarray[name][0][10]=$13;
       keybarray[name][0][11]=$14;
       keybarray[name][0][12]=$16;
       keybarray[name][0][13]=$16;
       keybarray[name][0][14]=$17;
       keybarray[name][0][15]=$18;
        
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

    for (h = 0; h < 4; ++h) {
    for (i = 0; i < 16; ++i) {
	kleur = keybarray["cmap_"name][h][i];
#	print kleur OFS h OFS i ;

	toets = keybarray[name][h][i];
	if (toets == "___" || toupper(toets) == "XXX") continue; #these keys are excluded
	if(kleur in test) {test[kleur]=test[kleur] " || (r=="h " && c=="i " ) ";}
	else {test[kleur]="(r=="h " && c=="i " ) ";}
       }
}    
	for (i in test) {
		R= strtonum("0x"substr(i,1,2));#convert hex to decimal
		G= strtonum("0x"substr(i,3,2));#convert hex to decimal
		B= strtonum("0x"substr(i,5,2));#convert hex to decimal
		print "if("test[i]"){LEDControl.setCrgbAt(r, c, CRGB("R","G","B"));}"
		}
	print  "</COLORMAP>"; #create postamble
	delete test;	
	}
}
