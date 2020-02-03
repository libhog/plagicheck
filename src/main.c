#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <padd.h>
#include <padd_api.h>
#include <tidx.h>
#include <idxio.h>
#include <iofunc.h>
#include <tdk/dbgmem.h>
#include <tdk/log.h>
#include <tdk/perf.h>

#define MAX_TERMLEN 100

int main(int argc, char** argv)
{
	int ret = 0;
	int* stat = NULL;
	long pos = 0;
	int len = 0;
	int i = 0;

	PADDConfig conf;
	TermIndex tidx;
	TermInfo ti;

	padd_uint32_t next = 0;

	if(argc < 2)
	{
		//printf("[Usage] %s idx_config.ini\n", argv[0]);
		printf("[Usage] idx_config.ini\n");
		return -1;
	}

	ret = padd_parseConfig(&conf, argv[1]);
	if(ret < 0)
		return -1;

	ret = padd_idx_termInit(&conf, &tidx);
	if(ret < 0)
	{
		TdkLogError("term index open error.");
		return -1;
	}

/*
	MALLOC(int*, stat, sizeof(int) * MAX_TERMLEN);

	for(i = 0; i < MAX_TERMLEN; i++)
	{
		stat[i] = 0;
	}

	for(i = 0; i < PADD_MKEY; i++)
	{
		if((tidx).header.hashInfo[i].addr == 0)
			continue;

		padd_iof_pos((tidx).fileHandle, (tidx).header.hashInfo[i].addr);
		padd_idx_ioTermInfoR((tidx).fileHandle, &ti);
		
		++stat[PADD_MIN(ti.termLength, MAX_TERMLEN - 1)];
		
		while(ti.skipNext)
		{
			next = ti.skipNext;

			padd_idx_termGetInfoFree(&ti);

			padd_iof_pos((tidx).fileHandle, next);
			padd_idx_ioTermInfoR((tidx).fileHandle, &ti);

			++stat[PADD_MIN(ti.termLength, MAX_TERMLEN - 1)];
		}

		padd_idx_termGetInfoFree(&ti);
	}
	
	for(i = 0; i < MAX_TERMLEN; i++)
	{
		printf("%d : %d\n", i, stat[i]);
	}

	padd_idx_termInitFree(&tidx);
	FREE(stat);
*/

	return 0;
}
