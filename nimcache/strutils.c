/* Generated by Nimrod Compiler v0.9.4 */
/*   (c) 2014 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   "C:\Program Files (x86)\Nimrod\dist\mingw\bin\gcc.exe" -c  -w  -I"C:\Program Files (x86)\Nimrod\lib" -o c:\users\androiddev\documents\github\nimrod_testing\nimcache\strutils.o c:\users\androiddev\documents\github\nimrod_testing\nimcache\strutils.c */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct einvalidvalue2453 einvalidvalue2453;
typedef struct esynch2429 esynch2429;
typedef struct E_Base E_Base;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell41088 tcell41088;
typedef struct tcellseq41104 tcellseq41104;
typedef struct tgcheap43016 tgcheap43016;
typedef struct tcellset41100 tcellset41100;
typedef struct tpagedesc41096 tpagedesc41096;
typedef struct tmemregion23410 tmemregion23410;
typedef struct tsmallchunk22638 tsmallchunk22638;
typedef struct tllchunk23404 tllchunk23404;
typedef struct tbigchunk22640 tbigchunk22640;
typedef struct tintset22615 tintset22615;
typedef struct ttrunk22611 ttrunk22611;
typedef struct tavlnode23408 tavlnode23408;
typedef struct tgcstat43014 tgcstat43014;
typedef struct tbasechunk22636 tbasechunk22636;
typedef struct tfreecell22628 tfreecell22628;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_NIMCALL_PTR(void, TY2289) (void* p, NI op);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY2289 marker;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  E_Base  {
  TNimObject Sup;
E_Base* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  esynch2429  {
  E_Base Sup;
};
struct  einvalidvalue2453  {
  esynch2429 Sup;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell41088  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq41104  {
NI Len;
NI Cap;
tcell41088** D;
};
struct  tcellset41100  {
NI Counter;
NI Max;
tpagedesc41096* Head;
tpagedesc41096** Data;
};
typedef tsmallchunk22638* TY23422[512];
typedef ttrunk22611* ttrunkbuckets22613[256];
struct  tintset22615  {
ttrunkbuckets22613 Data;
};
struct  tmemregion23410  {
NI Minlargeobj;
NI Maxlargeobj;
TY23422 Freesmallchunks;
tllchunk23404* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk22640* Freechunkslist;
tintset22615 Chunkstarts;
tavlnode23408* Root;
tavlnode23408* Deleted;
tavlnode23408* Last;
tavlnode23408* Freeavlnodes;
};
struct  tgcstat43014  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap43016  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq41104 Zct;
tcellseq41104 Decstack;
tcellset41100 Cycleroots;
tcellseq41104 Tempstack;
NI Recgclock;
tmemregion23410 Region;
tgcstat43014 Stat;
};
typedef NI TY22618[8];
struct  tpagedesc41096  {
tpagedesc41096* Next;
NI Key;
TY22618 Bits;
};
struct  tbasechunk22636  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk22638  {
  tbasechunk22636 Sup;
tsmallchunk22638* Next;
tsmallchunk22638* Prev;
tfreecell22628* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk23404  {
NI Size;
NI Acc;
tllchunk23404* Next;
};
struct  tbigchunk22640  {
  tbasechunk22636 Sup;
tbigchunk22640* Next;
tbigchunk22640* Prev;
NI Align;
NF Data;
};
struct  ttrunk22611  {
ttrunk22611* Next;
NI Key;
TY22618 Bits;
};
typedef tavlnode23408* TY23414[2];
struct  tavlnode23408  {
TY23414 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell22628  {
tfreecell22628* Next;
NI Zerofield;
};
N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell41088*, usrtocell_44443)(void* usr);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(void, rtladdzct_46002)(tcell41088* c);
N_NOINLINE(void, addzct_44418)(tcellseq41104* s, tcell41088* c);
N_NIMCALL(void, raiseException)(E_Base* e, NCSTRING ename);
STRING_LITERAL(TMP136, "invalid integer: ", 17);
extern TNimType NTI18001; /* ref EInvalidValue */
extern TNimType NTI2453; /* EInvalidValue */
extern TFrame* frameptr_13038;
extern tgcheap43016 gch_43044;

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_13038;
	frameptr_13038 = s;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_13038 = (*frameptr_13038).prev;
}

static N_INLINE(tcell41088*, usrtocell_44443)(void* usr) {
	tcell41088* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	nimln(118, "gc.nim");
	result = ((tcell41088*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell41088))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtladdzct_46002)(tcell41088* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(199, "gc.nim");
	addzct_44418(&gch_43044.Zct, c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(251, "gc.nim");
	{
		tcell41088* c;
		nimln(251, "gc.nim");
		nimln(251, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(252, "gc.nim");
		c = usrtocell_44443(src);
		nimln(169, "gc.nim");
		(*c).Refcount += 8;
	}
	LA3: ;
	nimln(254, "gc.nim");
	{
		tcell41088* c;
		nimln(254, "gc.nim");
		nimln(254, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(255, "gc.nim");
		c = usrtocell_44443((*dest));
		nimln(256, "gc.nim");
		{
			nimln(167, "gc.nim");
			(*c).Refcount -= 8;
			nimln(168, "gc.nim");
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			nimln(257, "gc.nim");
			rtladdzct_46002(c);
		}
		LA11: ;
	}
	LA7: ;
	nimln(258, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s) {
	NI result;
	NI l;
	nimfr("parseInt", "strutils.nim")
	result = 0;
	nimln(381, "strutils.nim");
	l = npuParseInt(s, &result, 0);
	nimln(382, "strutils.nim");
	{
		NIM_BOOL LOC3;
		einvalidvalue2453* e_89133;
		NimStringDesc* LOC7;
		nimln(382, "strutils.nim");
		LOC3 = 0;
		nimln(382, "strutils.nim");
		nimln(382, "strutils.nim");
		nimln(382, "strutils.nim");
		LOC3 = !((l == s->Sup.len));
		if (LOC3) goto LA4;
		nimln(382, "strutils.nim");
		LOC3 = (l == 0);
		LA4: ;
		if (!LOC3) goto LA5;
		e_89133 = 0;
		nimln(1991, "system.nim");
		e_89133 = (einvalidvalue2453*) newObj((&NTI18001), sizeof(einvalidvalue2453));
		(*e_89133).Sup.Sup.Sup.m_type = (&NTI2453);
		nimln(1992, "system.nim");
		nimln(383, "strutils.nim");
		LOC7 = 0;
		LOC7 = rawNewString(s->Sup.len + 17);
appendString(LOC7, ((NimStringDesc*) &TMP136));
appendString(LOC7, s);
		asgnRefNoCycle((void**) &(*e_89133).Sup.Sup.message, LOC7);
		nimln(383, "strutils.nim");
		raiseException((E_Base*)e_89133, "EInvalidValue");
	}
	LA5: ;
	popFrame();
	return result;
}
N_NOINLINE(void, strutilsInit)(void) {
	nimfr("strutils", "strutils.nim")
	popFrame();
}

N_NOINLINE(void, strutilsDatInit)(void) {
}

