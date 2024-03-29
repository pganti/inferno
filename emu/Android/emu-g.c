#include "dat.h"
#include "fns.h"
#include "error.h"
#include "interp.h"


#include "emu-g.root.h"

ulong ndevs = 28;

extern Dev rootdevtab;
extern Dev consdevtab;
extern Dev envdevtab;
extern Dev mntdevtab;
extern Dev pipedevtab;
extern Dev progdevtab;
extern Dev profdevtab;
extern Dev srvdevtab;
extern Dev dupdevtab;
extern Dev ssldevtab;
extern Dev capdevtab;
extern Dev fsdevtab;
extern Dev cmddevtab;
extern Dev indirdevtab;
extern Dev drawdevtab;
extern Dev pointerdevtab;
extern Dev ipdevtab;
extern Dev eiadevtab;
extern Dev memdevtab;
extern Dev phonedevtab;
Dev* devtab[]={
	&rootdevtab,
	&consdevtab,
	&envdevtab,
	&mntdevtab,
	&pipedevtab,
	&progdevtab,
	&profdevtab,
	&srvdevtab,
	&dupdevtab,
	&ssldevtab,
	&capdevtab,
	&fsdevtab,
	&cmddevtab,
	&indirdevtab,
	&drawdevtab,
	&pointerdevtab,
	&ipdevtab,
	&eiadevtab,
	&memdevtab,
	&phonedevtab,
	nil,
	nil,
	nil,
	nil,
	nil,
	nil,
	nil,
	nil,
	nil,
};

void links(void){
}

extern void sysmodinit(void);
extern void drawmodinit(void);
extern void tkmodinit(void);
extern void mathmodinit(void);
extern void srvmodinit(void);
extern void keyringmodinit(void);
extern void cryptmodinit(void);
extern void ipintsmodinit(void);
extern void loadermodinit(void);
extern void freetypemodinit(void);
void modinit(void){
	sysmodinit();
	drawmodinit();
	tkmodinit();
	mathmodinit();
	srvmodinit();
	keyringmodinit();
	cryptmodinit();
	ipintsmodinit();
	loadermodinit();
	freetypemodinit();
}

	int dontcompile = 1;
char* conffile = "emu-g";
ulong kerndate = KERNDATE;
