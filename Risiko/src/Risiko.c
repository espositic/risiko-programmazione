#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define NUMARMATE 6
#define MAXGIOCATORI 6
#define MAXOBIETTIVI 14

typedef struct obiettivo{
	int distruggereGiallo;
	int distruggereRosso;
	int distruggereVerde;
	int distruggereBlu;
	int distruggereViola;
	int distruggereNero;
	int ventiQuattroTerritori;
	int diciottoTerritoriDueArmate;
	int conquistareEuropaSudAmericaEScelta;
	int conquistareAsiaESudAmerica;
	int conquistareNordAmericaEOceania;
	int conquistareEuropaOceaniaEScelta;
	int conquistareNordAmericaEAfrica;
	int conquistareAsiaEAfrica;
}obiettivo;

typedef struct giocatore{
	char colore;
	obiettivo obiettivo;
	char armateDistrutte[NUMARMATE];
}giocatore;

typedef struct territorio{
	char*nome;
	char coloreArmate;
	int numeroArmate;
	char*continente;
	char**confini;
}territorio;

void scriviNome();
int numeroGiocatori();
void assegnazioneColore(giocatore giocatori[MAXGIOCATORI],int i);
void assegnazioneObiettivi(giocatore giocatori[MAXGIOCATORI],int n,obiettivo mazzoObiettivi[MAXOBIETTIVI]);
void stampaObiettivo(giocatore giocatori[MAXGIOCATORI],int n);
obiettivo pescareCartaObiettivo(obiettivo mazzoObiettivi[MAXOBIETTIVI],int i);
int numeroRandom(int max);

int main(void) {
	giocatore giocatore1;
	giocatore giocatore2;
	giocatore giocatore3;
	giocatore giocatore4;
	giocatore giocatore5;
	giocatore giocatore6;
	giocatore giocatori[MAXGIOCATORI];
	giocatori[0]=giocatore1;
	giocatori[1]=giocatore2;
	giocatori[2]=giocatore3;
	giocatori[3]=giocatore4;
	giocatori[4]=giocatore5;
	giocatori[5]=giocatore6;
	obiettivo obiettivo1;
	obiettivo1.distruggereGiallo=0;
	obiettivo1.distruggereRosso=-1;
	obiettivo1.distruggereVerde=-1;
	obiettivo1.distruggereBlu=-1;
	obiettivo1.distruggereViola=-1;
	obiettivo1.distruggereNero=-1;
	obiettivo1.ventiQuattroTerritori=-1;
	obiettivo1.diciottoTerritoriDueArmate=-1;
	obiettivo1.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo1.conquistareAsiaESudAmerica=-1;
	obiettivo1.conquistareNordAmericaEOceania=-1;
	obiettivo1.conquistareEuropaOceaniaEScelta=-1;
	obiettivo1.conquistareNordAmericaEAfrica=-1;
	obiettivo1.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo2;
	obiettivo2.distruggereGiallo=-1;
	obiettivo2.distruggereRosso=0;
	obiettivo2.distruggereVerde=-1;
	obiettivo2.distruggereBlu=-1;
	obiettivo2.distruggereViola=-1;
	obiettivo2.distruggereNero=-1;
	obiettivo2.ventiQuattroTerritori=-1;
	obiettivo2.diciottoTerritoriDueArmate=-1;
	obiettivo2.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo2.conquistareAsiaESudAmerica=-1;
	obiettivo2.conquistareNordAmericaEOceania=-1;
	obiettivo2.conquistareEuropaOceaniaEScelta=-1;
	obiettivo2.conquistareNordAmericaEAfrica=-1;
	obiettivo2.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo3;
	obiettivo3.distruggereGiallo=-1;
	obiettivo3.distruggereRosso=-1;
	obiettivo3.distruggereVerde=0;
	obiettivo3.distruggereBlu=-1;
	obiettivo3.distruggereViola=-1;
	obiettivo3.distruggereNero=-1;
	obiettivo3.ventiQuattroTerritori=-1;
	obiettivo3.diciottoTerritoriDueArmate=-1;
	obiettivo3.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo3.conquistareAsiaESudAmerica=-1;
	obiettivo3.conquistareNordAmericaEOceania=-1;
	obiettivo3.conquistareEuropaOceaniaEScelta=-1;
	obiettivo3.conquistareNordAmericaEAfrica=-1;
	obiettivo3.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo4;
	obiettivo4.distruggereGiallo=-1;
	obiettivo4.distruggereRosso=-1;
	obiettivo4.distruggereVerde=-1;
	obiettivo4.distruggereBlu=0;
	obiettivo4.distruggereViola=-1;
	obiettivo4.distruggereNero=-1;
	obiettivo4.ventiQuattroTerritori=-1;
	obiettivo4.diciottoTerritoriDueArmate=-1;
	obiettivo4.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo4.conquistareAsiaESudAmerica=-1;
	obiettivo4.conquistareNordAmericaEOceania=-1;
	obiettivo4.conquistareEuropaOceaniaEScelta=-1;
	obiettivo4.conquistareNordAmericaEAfrica=-1;
	obiettivo4.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo5;
	obiettivo5.distruggereGiallo=-1;
	obiettivo5.distruggereRosso=-1;
	obiettivo5.distruggereVerde=-1;
	obiettivo5.distruggereBlu=-1;
	obiettivo5.distruggereViola=0;
	obiettivo5.distruggereNero=-1;
	obiettivo5.ventiQuattroTerritori=-1;
	obiettivo5.diciottoTerritoriDueArmate=-1;
	obiettivo5.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo5.conquistareAsiaESudAmerica=-1;
	obiettivo5.conquistareNordAmericaEOceania=-1;
	obiettivo5.conquistareEuropaOceaniaEScelta=-1;
	obiettivo5.conquistareNordAmericaEAfrica=-1;
	obiettivo5.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo6;
	obiettivo6.distruggereGiallo=-1;
	obiettivo6.distruggereRosso=-1;
	obiettivo6.distruggereVerde=-1;
	obiettivo6.distruggereBlu=-1;
	obiettivo6.distruggereViola=-1;
	obiettivo6.distruggereNero=0;
	obiettivo6.ventiQuattroTerritori=-1;
	obiettivo6.diciottoTerritoriDueArmate=-1;
	obiettivo6.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo6.conquistareAsiaESudAmerica=-1;
	obiettivo6.conquistareNordAmericaEOceania=-1;
	obiettivo6.conquistareEuropaOceaniaEScelta=-1;
	obiettivo6.conquistareNordAmericaEAfrica=-1;
	obiettivo6.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo7;
	obiettivo7.distruggereGiallo=-1;
	obiettivo7.distruggereRosso=-1;
	obiettivo7.distruggereVerde=-1;
	obiettivo7.distruggereBlu=-1;
	obiettivo7.distruggereViola=-1;
	obiettivo7.distruggereNero=-1;
	obiettivo7.ventiQuattroTerritori=0;
	obiettivo7.diciottoTerritoriDueArmate=-1;
	obiettivo7.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo7.conquistareAsiaESudAmerica=-1;
	obiettivo7.conquistareNordAmericaEOceania=-1;
	obiettivo7.conquistareEuropaOceaniaEScelta=-1;
	obiettivo7.conquistareNordAmericaEAfrica=-1;
	obiettivo7.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo8;
	obiettivo8.distruggereGiallo=-1;
	obiettivo8.distruggereRosso=-1;
	obiettivo8.distruggereVerde=-1;
	obiettivo8.distruggereBlu=-1;
	obiettivo8.distruggereViola=-1;
	obiettivo8.distruggereNero=-1;
	obiettivo8.ventiQuattroTerritori=-1;
	obiettivo8.diciottoTerritoriDueArmate=0;
	obiettivo8.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo8.conquistareAsiaESudAmerica=-1;
	obiettivo8.conquistareNordAmericaEOceania=-1;
	obiettivo8.conquistareEuropaOceaniaEScelta=-1;
	obiettivo8.conquistareNordAmericaEAfrica=-1;
	obiettivo8.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo9;
	obiettivo9.distruggereGiallo=-1;
	obiettivo9.distruggereRosso=-1;
	obiettivo9.distruggereVerde=-1;
	obiettivo9.distruggereBlu=-1;
	obiettivo9.distruggereViola=-1;
	obiettivo9.distruggereNero=-1;
	obiettivo9.ventiQuattroTerritori=-1;
	obiettivo9.diciottoTerritoriDueArmate=-1;
	obiettivo9.conquistareEuropaSudAmericaEScelta=0;
	obiettivo9.conquistareAsiaESudAmerica=-1;
	obiettivo9.conquistareNordAmericaEOceania=-1;
	obiettivo9.conquistareEuropaOceaniaEScelta=-1;
	obiettivo9.conquistareNordAmericaEAfrica=-1;
	obiettivo9.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo10;
	obiettivo10.distruggereGiallo=-1;
	obiettivo10.distruggereRosso=-1;
	obiettivo10.distruggereVerde=-1;
	obiettivo10.distruggereBlu=-1;
	obiettivo10.distruggereViola=-1;
	obiettivo10.distruggereNero=-1;
	obiettivo10.ventiQuattroTerritori=-1;
	obiettivo10.diciottoTerritoriDueArmate=-1;
	obiettivo10.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo10.conquistareAsiaESudAmerica=0;
	obiettivo10.conquistareNordAmericaEOceania=-1;
	obiettivo10.conquistareEuropaOceaniaEScelta=-1;
	obiettivo10.conquistareNordAmericaEAfrica=-1;
	obiettivo10.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo11;
	obiettivo11.distruggereGiallo=-1;
	obiettivo11.distruggereRosso=-1;
	obiettivo11.distruggereVerde=-1;
	obiettivo11.distruggereBlu=-1;
	obiettivo11.distruggereViola=-1;
	obiettivo11.distruggereNero=-1;
	obiettivo11.ventiQuattroTerritori=-1;
	obiettivo11.diciottoTerritoriDueArmate=-1;
	obiettivo11.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo11.conquistareAsiaESudAmerica=-1;
	obiettivo11.conquistareNordAmericaEOceania=0;
	obiettivo11.conquistareEuropaOceaniaEScelta=-1;
	obiettivo11.conquistareNordAmericaEAfrica=-1;
	obiettivo11.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo12;
	obiettivo12.distruggereGiallo=-1;
	obiettivo12.distruggereRosso=-1;
	obiettivo12.distruggereVerde=-1;
	obiettivo12.distruggereBlu=-1;
	obiettivo12.distruggereViola=-1;
	obiettivo12.distruggereNero=-1;
	obiettivo12.ventiQuattroTerritori=-1;
	obiettivo12.diciottoTerritoriDueArmate=-1;
	obiettivo12.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo12.conquistareAsiaESudAmerica=-1;
	obiettivo12.conquistareNordAmericaEOceania=-1;
	obiettivo12.conquistareEuropaOceaniaEScelta=0;
	obiettivo12.conquistareNordAmericaEAfrica=-1;
	obiettivo12.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo13;
	obiettivo13.distruggereGiallo=-1;
	obiettivo13.distruggereRosso=-1;
	obiettivo13.distruggereVerde=-1;
	obiettivo13.distruggereBlu=-1;
	obiettivo13.distruggereViola=-1;
	obiettivo13.distruggereNero=-1;
	obiettivo13.ventiQuattroTerritori=-1;
	obiettivo13.diciottoTerritoriDueArmate=-1;
	obiettivo13.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo13.conquistareAsiaESudAmerica=-1;
	obiettivo13.conquistareNordAmericaEOceania=-1;
	obiettivo13.conquistareEuropaOceaniaEScelta=-1;
	obiettivo13.conquistareNordAmericaEAfrica=0;
	obiettivo13.conquistareAsiaEAfrica=-1;
	obiettivo obiettivo14;
	obiettivo14.distruggereGiallo=-1;
	obiettivo14.distruggereRosso=-1;
	obiettivo14.distruggereVerde=-1;
	obiettivo14.distruggereBlu=-1;
	obiettivo14.distruggereViola=-1;
	obiettivo14.distruggereNero=-1;
	obiettivo14.ventiQuattroTerritori=-1;
	obiettivo14.diciottoTerritoriDueArmate=-1;
	obiettivo14.conquistareEuropaSudAmericaEScelta=-1;
	obiettivo14.conquistareAsiaESudAmerica=-1;
	obiettivo14.conquistareNordAmericaEOceania=-1;
	obiettivo14.conquistareEuropaOceaniaEScelta=-1;
	obiettivo14.conquistareNordAmericaEAfrica=-1;
	obiettivo14.conquistareAsiaEAfrica=0;
	obiettivo mazzoObiettivi[MAXOBIETTIVI];
	mazzoObiettivi[0]=obiettivo1;
	mazzoObiettivi[1]=obiettivo2;
	mazzoObiettivi[2]=obiettivo3;
	mazzoObiettivi[3]=obiettivo4;
	mazzoObiettivi[4]=obiettivo5;
	mazzoObiettivi[5]=obiettivo6;
	mazzoObiettivi[6]=obiettivo7;
	mazzoObiettivi[7]=obiettivo8;
	mazzoObiettivi[8]=obiettivo9;
	mazzoObiettivi[9]=obiettivo10;
	mazzoObiettivi[10]=obiettivo11;
	mazzoObiettivi[11]=obiettivo12;
	mazzoObiettivi[12]=obiettivo13;
	mazzoObiettivi[13]=obiettivo14;
	territorio territorio1;
	scriviNome(territorio1.nome,"Alaska",6);
	scriviNome(territorio1.continente,"Nord America",12);
	territorio1.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio1.confini+0),"Territori del Nord Ovest",24);
	scriviNome((territorio1.confini+1),"Alberta",7);
	scriviNome((territorio1.confini+2),"Kamchatka",9);
	territorio territorio2;
	scriviNome(territorio2.nome,"Territori del Nord Ovest",24);
	scriviNome(territorio2.continente,"Nord America",12);
	territorio2.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio2.confini+0),"Alaska",6);
	scriviNome((territorio2.confini+1),"Alberta",7);
	scriviNome((territorio2.confini+2),"Ontario",7);
	scriviNome((territorio2.confini+3),"Groenlandia",11);
	territorio territorio3;
	scriviNome(territorio3.nome,"Groenlandia",11);
	scriviNome(territorio3.continente,"Nord America",12);
	territorio3.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio3.confini+0),"Territori del Nord Ovest",24);
	scriviNome((territorio3.confini+1),"Ontario",7);
	scriviNome((territorio3.confini+2),"Quebec",6);
	scriviNome((territorio3.confini+3),"Islanda",7);
	territorio territorio4;
	scriviNome(territorio4.nome,"Alberta",7);
	scriviNome(territorio4.continente,"Nord America",12);
	territorio4.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio4.confini+0),"Alaska",6);
	scriviNome((territorio4.confini+1),"Territori del Nord Ovest",24);
	scriviNome((territorio4.confini+2),"Ontario",7);
	scriviNome((territorio4.confini+3),"Stati Uniti Occidentali",23);
	territorio territorio5;
	scriviNome(territorio5.nome,"Ontario",7);
	scriviNome(territorio5.continente,"Nord America",12);
	territorio5.confini = (char**) calloc(6,sizeof(char*));
	scriviNome((territorio5.confini+0),"Alberta",7);
	scriviNome((territorio5.confini+1),"Territori del Nord Ovest",24);
	scriviNome((territorio5.confini+2),"Groenlandia",11);
	scriviNome((territorio5.confini+3),"Quebec",6);
	scriviNome((territorio5.confini+4),"Stati Uniti Orientali",21);
	scriviNome((territorio5.confini+5),"Stati Uniti Occidentali",23);
	territorio territorio6;
	scriviNome(territorio6.nome,"Quebec",6);
	scriviNome(territorio6.continente,"Nord America",12);
	territorio6.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio6.confini+0),"Ontario",7);
	scriviNome((territorio6.confini+1),"Groenlandia",11);
	scriviNome((territorio6.confini+2),"Stati Uniti Orientali",21);
	territorio territorio7;
	scriviNome(territorio7.nome,"Stati Uniti Occidentali",23);
	scriviNome(territorio7.continente,"Nord America",12);
	territorio7.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio7.confini+0),"Alberta",7);
	scriviNome((territorio7.confini+1),"Ontario",7);
	scriviNome((territorio7.confini+2),"Stati Uniti Orientali",21);
	scriviNome((territorio7.confini+3),"America Centrale",16);
	territorio territorio8;
	scriviNome(territorio8.nome,"Stati Uniti Orientali",21);
	scriviNome(territorio8.continente,"Nord America",12);
	territorio8.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio8.confini+0),"Alberta",7);
	scriviNome((territorio8.confini+1),"Ontario",7);
	scriviNome((territorio8.confini+2),"Quebec",6);
	scriviNome((territorio8.confini+3),"Stati Uniti Occidentali",23);
	scriviNome((territorio8.confini+4),"America Centrale",16);
	territorio territorio9;
	scriviNome(territorio9.nome,"America Centrale",16);
	scriviNome(territorio9.continente,"Nord America",12);
	territorio9.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio9.confini+0),"Stati Uniti Occidentali",23);
	scriviNome((territorio9.confini+1),"Stati Uniti Orientali",21);
	scriviNome((territorio9.confini+2),"Venezuela",9);
	territorio territorio10;
	scriviNome(territorio10.nome,"Venezuela",9);
	scriviNome(territorio10.continente,"Sud America",11);
	territorio10.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio10.confini+0),"America Centrale",16);
	scriviNome((territorio10.confini+1),"Perù",4);
	scriviNome((territorio10.confini+2),"Brasile",7);
	territorio territorio11;
	scriviNome(territorio11.nome,"Perù",4);
	scriviNome(territorio11.continente,"Sud America",11);
	territorio11.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio11.confini+0),"Venezuela",9);
	scriviNome((territorio11.confini+1),"Brasile",7);
	scriviNome((territorio11.confini+2),"Argentina",9);
	territorio territorio12;
	scriviNome(territorio12.nome,"Brasile",7);
	scriviNome(territorio12.continente,"Sud America",11);
	territorio12.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio12.confini+0),"Venezuela",9);
	scriviNome((territorio12.confini+1),"Perù",4);
	scriviNome((territorio12.confini+2),"Argentina",9);
	scriviNome((territorio12.confini+3),"Africa del Nord",15);
	territorio territorio13;
	scriviNome(territorio13.nome,"Argentina",9);
	scriviNome(territorio13.continente,"Sud America",11);
	territorio13.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio13.confini+0),"Brasile",7);
	scriviNome((territorio13.confini+1),"Perù",4);
	territorio territorio14;
	scriviNome(territorio14.nome,"Islanda",7);
	scriviNome(territorio14.continente,"Europa",6);
	territorio14.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio14.confini+0),"Groenlandia",11);
	scriviNome((territorio14.confini+1),"Scandinavia",11);
	scriviNome((territorio14.confini+2),"Gran Bretagna",13);
	territorio territorio15;
	scriviNome(territorio15.nome,"Scandinavia",11);
	scriviNome(territorio15.continente,"Europa",6);
	territorio15.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio15.confini+0),"Islanda",7);
	scriviNome((territorio15.confini+1),"Ucraina",7);
	scriviNome((territorio15.confini+2),"Europa Settentrionale",21);
	scriviNome((territorio15.confini+3),"Gran Bretagna",13);
	territorio territorio16;
	scriviNome(territorio16.nome,"Ucraina",7);
	scriviNome(territorio16.continente,"Europa",6);
	territorio16.confini = (char**) calloc(6,sizeof(char*));
	scriviNome((territorio16.confini+0),"Scandinavia",11);
	scriviNome((territorio16.confini+1),"Europa Settentrionale",21);
	scriviNome((territorio16.confini+2),"Europa Meridionale",18);
	scriviNome((territorio16.confini+3),"Medio Oriente",13);
	scriviNome((territorio16.confini+4),"Afghanistan",10);
	scriviNome((territorio16.confini+5),"Urali",5);
	territorio territorio17;
	scriviNome(territorio17.nome,"Gran Bretagna",13);
	scriviNome(territorio17.continente,"Europa",6);
	territorio17.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio17.confini+0),"Islanda",7);
	scriviNome((territorio17.confini+1),"Scandinavia",11);
	scriviNome((territorio17.confini+2),"Europa Settentrionale",21);
	scriviNome((territorio17.confini+3),"Europa Occidentale",18);
	territorio territorio18;
	scriviNome(territorio18.nome,"Europa Settentrionale",21);
	scriviNome(territorio18.continente,"Europa",6);
	territorio18.confini = (char**) calloc(5,sizeof(char*));
	scriviNome((territorio18.confini+0),"Gran Bretagna",13);
	scriviNome((territorio18.confini+1),"Scandinavia",11);
	scriviNome((territorio18.confini+2),"Ucraina",7);
	scriviNome((territorio18.confini+3),"Europa Meridionale",18);
	scriviNome((territorio18.confini+4),"Europa Occidentale",18);
	territorio territorio19;
	scriviNome(territorio19.nome,"Europa Occidentale",18);
	scriviNome(territorio19.continente,"Europa",6);
	territorio19.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio19.confini+0),"Gran Bretagna",13);
	scriviNome((territorio19.confini+1),"Europa Settentrionale",21);
	scriviNome((territorio19.confini+2),"Europa Meridionale",18);
	scriviNome((territorio19.confini+3),"Africa del Nord",15);
	territorio territorio20;
	scriviNome(territorio20.nome,"Europa Meridionale",18);
	scriviNome(territorio20.continente,"Europa",6);
	territorio20.confini = (char**) calloc(6,sizeof(char*));
	scriviNome((territorio20.confini+0),"Europa Occidentale",18);
	scriviNome((territorio20.confini+1),"Europa Settentrionale",21);
	scriviNome((territorio20.confini+2),"Ucraina",7);
	scriviNome((territorio20.confini+3),"Medio Oriente",13);
	scriviNome((territorio20.confini+4),"Egitto",6);
	scriviNome((territorio20.confini+5),"Africa del Nord",15);
	territorio territorio21;
	scriviNome(territorio21.nome,"Africa del Nord",15);
	scriviNome(territorio21.continente,"Africa",6);
	territorio21.confini = (char**) calloc(5,sizeof(char*));
	scriviNome((territorio21.confini+0),"Europa Occidentale",18);
	scriviNome((territorio21.confini+1),"Europa Meridionale",18);
	scriviNome((territorio21.confini+2),"Egitto",6);
	scriviNome((territorio21.confini+3),"Africa Orientale",16);
	scriviNome((territorio21.confini+4),"Congo",5);
	territorio territorio22;
	scriviNome(territorio22.nome,"Egitto",6);
	scriviNome(territorio22.continente,"Africa",6);
	territorio22.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio22.confini+0),"Africa del Nord",15);
	scriviNome((territorio22.confini+1),"Europa Meridionale",18);
	scriviNome((territorio22.confini+2),"Medio Oriente",13);
	scriviNome((territorio22.confini+3),"Africa Orientale",16);
	territorio territorio23;
	scriviNome(territorio23.nome,"Congo",5);
	scriviNome(territorio23.continente,"Africa",6);
	territorio23.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio23.confini+0),"Africa del Nord",15);
	scriviNome((territorio23.confini+1),"Africa Orientale",16);
	scriviNome((territorio23.confini+2),"Africa del Sud",14);
	territorio territorio24;
	scriviNome(territorio24.nome,"Africa Orientale",16);
	scriviNome(territorio24.continente,"Africa",6);
	territorio24.confini = (char**) calloc(5,sizeof(char*));
	scriviNome((territorio24.confini+0),"Congo",5);
	scriviNome((territorio24.confini+1),"Africa del Nord",15);
	scriviNome((territorio24.confini+2),"Egitto",6);
	scriviNome((territorio24.confini+3),"Madagascar",10);
	scriviNome((territorio24.confini+4),"Africa del Sud",14);
	territorio territorio25;
	scriviNome(territorio25.nome,"Africa del Sud",14);
	scriviNome(territorio25.continente,"Africa",6);
	territorio25.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio25.confini+0),"Congo",5);
	scriviNome((territorio25.confini+1),"Africa Orientale",16);
	scriviNome((territorio25.confini+2),"Madagascar",10);
	territorio territorio26;
	scriviNome(territorio26.nome,"Madagascar",10);
	scriviNome(territorio26.continente,"Africa",6);
	territorio26.confini = (char**) calloc(2,sizeof(char*));
	scriviNome((territorio26.confini+0),"Africa Orientale",16);
	scriviNome((territorio26.confini+1),"Africa del Sud",14);
	territorio territorio27;
	scriviNome(territorio27.nome,"Urali",5);
	scriviNome(territorio27.continente,"Asia",4);
	territorio27.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio27.confini+0),"Ucraina",7);
	scriviNome((territorio27.confini+1),"Siberia",7);
	scriviNome((territorio27.confini+2),"Afghanistan",10);
	scriviNome((territorio27.confini+3),"Cina",4);
	territorio territorio28;
	scriviNome(territorio28.nome,"Siberia",7);
	scriviNome(territorio28.continente,"Asia",4);
	territorio28.confini = (char**) calloc(5,sizeof(char*));
	scriviNome((territorio28.confini+0),"Urali",5);
	scriviNome((territorio28.confini+1),"Cina",4);
	scriviNome((territorio28.confini+2),"Mongolia",8);
	scriviNome((territorio28.confini+3),"Cita",4);
	scriviNome((territorio28.confini+4),"Jacuzia",7);
	territorio territorio29;
	scriviNome(territorio29.nome,"Jacuzia",7);
	scriviNome(territorio29.continente,"Asia",4);
	territorio29.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio29.confini+0),"Siberia",7);
	scriviNome((territorio29.confini+1),"Cita",4);
	scriviNome((territorio29.confini+2),"Kamchatka",9);
	territorio territorio30;
	scriviNome(territorio30.nome,"Kamchatka",9);
	scriviNome(territorio30.continente,"Asia",4);
	territorio30.confini = (char**) calloc(5,sizeof(char*));
	scriviNome((territorio30.confini+0),"Jacuzia",7);
	scriviNome((territorio30.confini+1),"Cita",4);
	scriviNome((territorio30.confini+2),"Mongolia",8);
	scriviNome((territorio30.confini+3),"Giappone",7);
	scriviNome((territorio30.confini+4),"Alaska",6);
	territorio territorio31;
	scriviNome(territorio31.nome,"Giappone",7);
	scriviNome(territorio31.continente,"Asia",4);
	territorio31.confini = (char**) calloc(2,sizeof(char*));
	scriviNome((territorio31.confini+0),"Kamchatka",9);
	scriviNome((territorio31.confini+1),"Mongolia",8);
	territorio territorio32;
	scriviNome(territorio32.nome,"Cita",4);
	scriviNome(territorio32.continente,"Asia",4);
	territorio32.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio32.confini+0),"Siberia",7);
	scriviNome((territorio32.confini+1),"Jacuzia",7);
	scriviNome((territorio32.confini+2),"Mongolia",8);
	scriviNome((territorio32.confini+3),"Kamchatka",9);
	territorio territorio33;
	scriviNome(territorio33.nome,"Mongolia",8);
	scriviNome(territorio33.continente,"Asia",4);
	territorio33.confini = (char**) calloc(5,sizeof(char*));
	scriviNome((territorio33.confini+0),"Cina",4);
	scriviNome((territorio33.confini+1),"Cita",4);
	scriviNome((territorio33.confini+2),"Siberia",7);
	scriviNome((territorio33.confini+3),"Giappone",7);
	scriviNome((territorio33.confini+4),"Kamchatka",9);
	territorio territorio34;
	scriviNome(territorio34.nome,"Afghanistan",10);
	scriviNome(territorio34.continente,"Asia",4);
	territorio34.confini = (char**) calloc(4,sizeof(char*));
	scriviNome((territorio34.confini+0),"Ucraina",7);
	scriviNome((territorio34.confini+1),"Urali",5);
	scriviNome((territorio34.confini+2),"Cina",4);
	scriviNome((territorio34.confini+3),"Medio Oriente",13);
	territorio territorio35;
	scriviNome(territorio35.nome,"Cina",4);
	scriviNome(territorio35.continente,"Asia",4);
	territorio35.confini = (char**) calloc(7,sizeof(char*));
	scriviNome((territorio35.confini+0),"Mongolia",8);
	scriviNome((territorio35.confini+1),"Siberia",7);
	scriviNome((territorio35.confini+2),"Urali",5);
	scriviNome((territorio35.confini+3),"Afghanistan",10);
	scriviNome((territorio35.confini+4),"Medio Oriente",13);
	scriviNome((territorio35.confini+5),"India",5);
	scriviNome((territorio35.confini+6),"Siam",4);
	territorio territorio36;
	scriviNome(territorio36.nome,"Medio Oriente",13);
	scriviNome(territorio36.continente,"Asia",4);
	territorio36.confini = (char**) calloc(6,sizeof(char*));
	scriviNome((territorio36.confini+0),"Egitto",6);
	scriviNome((territorio36.confini+1),"Europa Meridionale",18);
	scriviNome((territorio36.confini+2),"Ucraina",7);
	scriviNome((territorio36.confini+3),"Afghanistan",10);
	scriviNome((territorio36.confini+4),"Cina",4);
	scriviNome((territorio36.confini+5),"India",5);
	territorio territorio37;
	scriviNome(territorio37.nome,"India",5);
	scriviNome(territorio37.continente,"Asia",4);
	territorio37.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio37.confini+0),"Medio Oriente",13);
	scriviNome((territorio37.confini+1),"Cina",4);
	scriviNome((territorio37.confini+2),"Siam",4);
	territorio territorio38;
	scriviNome(territorio38.nome,"Siam",4);
	scriviNome(territorio38.continente,"Asia",4);
	territorio38.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio38.confini+0),"India",5);
	scriviNome((territorio38.confini+1),"Cina",4);
	scriviNome((territorio38.confini+2),"Indonesia",9);
	territorio territorio39;
	scriviNome(territorio39.nome,"Indonesia",9);
	scriviNome(territorio39.continente,"Oceania",7);
	territorio39.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio39.confini+0),"Siam",4);
	scriviNome((territorio39.confini+1),"Australia Occidentale",21);
	scriviNome((territorio39.confini+2),"Nuova Guinea",12);
	territorio territorio40;
	scriviNome(territorio40.nome,"Nuova Guinea",12);
	scriviNome(territorio40.continente,"Oceania",7);
	territorio40.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio40.confini+0),"Indonesia",9);
	scriviNome((territorio40.confini+1),"Australia Occidentale",21);
	scriviNome((territorio40.confini+2),"Australia Orientale",19);
	territorio territorio41;
	scriviNome(territorio41.nome,"Australia Occidentale",21);
	scriviNome(territorio41.continente,"Oceania",7);
	territorio41.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio41.confini+0),"Indonesia",9);
	scriviNome((territorio41.confini+1),"Australia Orientale",19);
	scriviNome((territorio41.confini+2),"Nuova Guinea",12);
	territorio territorio42;
	scriviNome(territorio42.nome,"Australia Orientale",19);
	scriviNome(territorio42.continente,"Oceania",7);
	territorio42.confini = (char**) calloc(3,sizeof(char*));
	scriviNome((territorio42.confini+0),"Australia Occidentale",21);
	scriviNome((territorio42.confini+1),"Nuova Guinea",12);
	territorio territori[42];
	territori[0]=territorio1;
	territori[1]=territorio2;
	territori[2]=territorio3;
	territori[3]=territorio4;
	territori[4]=territorio5;
	territori[5]=territorio6;
	territori[6]=territorio7;
	territori[7]=territorio8;
	territori[8]=territorio9;
	territori[9]=territorio10;
	territori[10]=territorio11;
	territori[11]=territorio12;
	territori[12]=territorio13;
	territori[13]=territorio14;
	territori[14]=territorio15;
	territori[15]=territorio16;
	territori[16]=territorio17;
	territori[17]=territorio18;
	territori[18]=territorio19;
	territori[19]=territorio20;
	territori[20]=territorio21;
	territori[21]=territorio22;
	territori[22]=territorio23;
	territori[23]=territorio24;
	territori[24]=territorio25;
	territori[25]=territorio26;
	territori[26]=territorio27;
	territori[27]=territorio28;
	territori[28]=territorio29;
	territori[29]=territorio30;
	territori[30]=territorio31;
	territori[31]=territorio32;
	territori[32]=territorio33;
	territori[33]=territorio34;
	territori[34]=territorio35;
	territori[35]=territorio36;
	territori[36]=territorio37;
	territori[37]=territorio38;
	territori[38]=territorio39;
	territori[39]=territorio40;
	territori[40]=territorio41;
	territori[41]=territorio42;
	int n=numeroGiocatori();
	assegnazioneColore(giocatori,n);
	assegnazioneObiettivi(giocatori,n,mazzoObiettivi);
	stampaObiettivo(giocatori,n);
	int vittoria=0;
	int vincitore=-1;
	int i=0;
	while(vittoria==0){
		if(vittoria==1){
			vincitore=i;
		}
		if(i==n-1){
			i=0;
		}else{
			i=i+1;
		}
	}
	return EXIT_SUCCESS;
}

void scriviNome(char* nome,char* str, int n){
	int i=0;
	nome=(char*)calloc(n+1,sizeof(char));
	while(i<n){
		*(nome+i)=*(str+i);
		i=i+1;
	}
	*(nome+i)='\0';
}

int numeroGiocatori(){
	int n;
	do{
		printf("Quanti giocatori ci sono?\n[Inserire un numero compreso tra 3 e 6] ");
		scanf("%d",&n);
	}
	while(n!=3 && n!=4 && n!=5 && n!=6);
	return n;
}

void assegnazioneColore(giocatore giocatori[MAXGIOCATORI],int n){
	int i=0;
	while(i<n){
		char c;
		do{
			printf("\n\nGiocatore%d",i+1);
			printf("\nQuale colore scegli?");
			printf("\n[Inserire n(nero),g(giallo),r(rosso),b(blu),v(viola),y(verde)] ");
			scanf("%c",&c);
		}
		while(c!='n' && c!='g' && c!='r' && c!='b' && c!='v' && c!='y');
		giocatori[i].colore=c;
		i=i+1;
	}
}

void assegnazioneObiettivi(giocatore giocatori[MAXGIOCATORI],int n,obiettivo mazzoObiettivi[MAXOBIETTIVI]){
	int i=0;
	while(i<n){
		giocatori[i].obiettivo=pescareCartaObiettivo(mazzoObiettivi,numeroRandom(14-i));
		i=i+1;
	}
}

void stampaObiettivo(giocatore giocatori[MAXGIOCATORI],int n){
	int i=0;
	while(i<n){
		printf("\nObiettivi del giocatore %d",i+1);
		if(giocatori[i].obiettivo.distruggereGiallo==0){
			printf("\nDistruggere le armate gialle");
		}
		if(giocatori[i].obiettivo.distruggereRosso==0){
			printf("\nDistruggere le armate rosse");
		}
		if(giocatori[i].obiettivo.distruggereVerde==0){
			printf("\nDistruggere le armate verdi");
		}
		if(giocatori[i].obiettivo.distruggereBlu==0){
			printf("\nDistruggere le armate blu");
		}
		if(giocatori[i].obiettivo.distruggereViola==0){
			printf("\nDistruggere le armate viola");
		}
		if(giocatori[i].obiettivo.distruggereNero==0){
			printf("\nDistruggere le armate nere");
		}
		if(giocatori[i].obiettivo.ventiQuattroTerritori==0){
			printf("\nConquistare 24 territori");
		}
		if(giocatori[i].obiettivo.diciottoTerritoriDueArmate==0){
			printf("\nConquistare 18 territori e piazzarci almeno 2 armate");
		}
		if(giocatori[i].obiettivo.conquistareEuropaSudAmericaEScelta==0){
			printf("\nConquistare Europa, Sud America e un continente a scelta");
		}
		if(giocatori[i].obiettivo.conquistareAsiaESudAmerica==0){
			printf("\nConquistare Asia e Sud America");
		}
		if(giocatori[i].obiettivo.conquistareNordAmericaEOceania==0){
			printf("\nConquistare Nord America E Oceania");
		}
		if(giocatori[i].obiettivo.conquistareEuropaOceaniaEScelta==0){
			printf("\nConquistare Europa, Oceania e un continente a scelta");
		}
		if(giocatori[i].obiettivo.conquistareNordAmericaEAfrica==0){
			printf("\nConquistare Nord America e Africa");
		}
		if(giocatori[i].obiettivo.conquistareAsiaEAfrica==0){
			printf("\nConquistare Asia e Africa");
		}
		i=i+1;
	}
}

obiettivo pescareCartaObiettivo(obiettivo mazzoObiettivi[MAXOBIETTIVI],int i){
	obiettivo ob=mazzoObiettivi[i];
	return ob;
}

int numeroRandom(int max){
	 time_t t;
	 srand((unsigned) time(&t));
	 return rand()%max;
}

