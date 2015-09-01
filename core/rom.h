#ifndef __ROM__H__
#define __ROM__H__


#ifdef __cplusplus
extern "C" {
#endif

struct ROMHeader{
	unsigned char magic[4];
	unsigned char PRGCount;
	unsigned char CHRCount;
	unsigned char Control1;
	unsigned char Control2;
	unsigned char RamCount;
	unsigned char Reserved[7];
};



struct ROM{
	struct ROMHeader header;
	unsigned char* data[0];
};


int Init_NesRom(const char* filepath);


#ifdef __cplusplus
}
#endif


#endif

