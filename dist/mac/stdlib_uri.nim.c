/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ {
NimStringDesc* scheme;
NimStringDesc* username;
NimStringDesc* password;
NimStringDesc* hostname;
NimStringDesc* port;
NimStringDesc* path;
NimStringDesc* query;
NimStringDesc* anchor;
NIM_BOOL opaque;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void, initUri__zcwd3ynrfDQcP9c8k9cEeg9aQ)(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* Result);
static N_INLINE(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void, parseUri__2Afz5k9c4YIkP0o0kpbe9cvQ)(NimStringDesc* uri, tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* result);
N_LIB_PRIVATE N_NIMCALL(void, resetUri__6wZ9cdrNwSrw8xkgtsNgsVQ)(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* uri);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, parsePath__0TsSB8FdgpD9cp7XiVe8wdA)(NimStringDesc* uri, NI* i, tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* result);
static N_INLINE(NI, parseUntil__yxs3WjxMSDtXEyiLC9aqFCAparseutils)(NimStringDesc* s, NimStringDesc** token, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw until, NI start);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__2yh9cer0ymNRHlOOg8P7IuA)(NimStringDesc* s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(void, parseAuthority__zi1fIQvZNRFlvZX648raeA)(NimStringDesc* authority, tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* result);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NI, parseWhile__aIOGZyeHx2rHC71Dcc2SCwparseutils)(NimStringDesc* s, NimStringDesc** token, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw validChars, NI start);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
static N_INLINE(NIM_BOOL, endsWith__IC89a6ZhQ52RmT4pzQl6YbAstrutils)(NimStringDesc* s, NIM_CHAR suffix);
static N_INLINE(NimStringDesc*, X5BX5D___ogYTOKbgqbjPfyC123US1gsystem)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, decodePercent__I8Ti83DSsbSvJZ4IQG1oUA)(NimStringDesc* s, NI* i);
static N_INLINE(void, handleHexChar__27mfgxjd88HDH8VCsPeLNguri)(NIM_CHAR c, NI* x, NIM_BOOL* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, encodeUrl__hfOKCSlSHEBA7MAnVFj2bA)(NimStringDesc* s, NIM_BOOL usePlus);

/* section: NIM_merge_DATA */
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__VzbRQH9cb1xm1tSKH4PwBSw_2 = {
0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM__VzbRQH9cb1xm1tSKH4PwBSw_3, "mailto", 6);
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__VzbRQH9cb1xm1tSKH4PwBSw_4 = {
0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__VzbRQH9cb1xm1tSKH4PwBSw_5 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__VzbRQH9cb1xm1tSKH4PwBSw_6 = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0xff, 0x03,
0xfe, 0xff, 0xff, 0x07, 0xfe, 0xff, 0xff, 0x07,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__VzbRQH9cb1xm1tSKH4PwBSw_7 = {
0x00, 0x00, 0x00, 0x00, 0x08, 0x80, 0x00, 0x80,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
N_LIB_PRIVATE TNimType NTI__j49bukNPrq747O1GRd4Ng9bQ_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI__VaVACK0bpYmqIQ0mKcHfQQ_;
STRING_LITERAL(TM__VzbRQH9cb1xm1tSKH4PwBSw_9, ":", 1);
STRING_LITERAL(TM__VzbRQH9cb1xm1tSKH4PwBSw_10, "://", 3);
STRING_LITERAL(TM__VzbRQH9cb1xm1tSKH4PwBSw_11, "@", 1);
STRING_LITERAL(TM__VzbRQH9cb1xm1tSKH4PwBSw_12, "\?", 1);
STRING_LITERAL(TM__VzbRQH9cb1xm1tSKH4PwBSw_13, "#", 1);
STRING_LITERAL(TM__VzbRQH9cb1xm1tSKH4PwBSw_14, "+", 1);
STRING_LITERAL(TM__VzbRQH9cb1xm1tSKH4PwBSw_15, "%20", 3);

/* section: NIM_merge_VARS */
extern NIM_THREADVAR NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
static N_INLINE(void, unsureAsgnRef)(void** dest, void* src) {
	(*dest) = src;
}
N_LIB_PRIVATE N_NIMCALL(void, initUri__zcwd3ynrfDQcP9c8k9cEeg9aQ)(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* Result) {
	unsureAsgnRef((void**)&(*Result).scheme, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).username, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).password, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).hostname, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).port, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).path, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).query, NIM_NIL);
	unsureAsgnRef((void**)&(*Result).anchor, NIM_NIL);
	(*Result).opaque = 0;
	(*Result).scheme = ((NimStringDesc*) NIM_NIL);
	(*Result).username = ((NimStringDesc*) NIM_NIL);
	(*Result).password = ((NimStringDesc*) NIM_NIL);
	(*Result).hostname = ((NimStringDesc*) NIM_NIL);
	(*Result).port = ((NimStringDesc*) NIM_NIL);
	(*Result).path = ((NimStringDesc*) NIM_NIL);
	(*Result).query = ((NimStringDesc*) NIM_NIL);
	(*Result).anchor = ((NimStringDesc*) NIM_NIL);
}
N_LIB_PRIVATE N_NIMCALL(void, resetUri__6wZ9cdrNwSrw8xkgtsNgsVQ)(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* uri) {
	(*uri).scheme = setLengthStr((*uri).scheme, ((NI) 0));
	(*uri).username = setLengthStr((*uri).username, ((NI) 0));
	(*uri).password = setLengthStr((*uri).password, ((NI) 0));
	(*uri).hostname = setLengthStr((*uri).hostname, ((NI) 0));
	(*uri).port = setLengthStr((*uri).port, ((NI) 0));
	(*uri).path = setLengthStr((*uri).path, ((NI) 0));
	(*uri).query = setLengthStr((*uri).query, ((NI) 0));
	(*uri).anchor = setLengthStr((*uri).anchor, ((NI) 0));
	(*uri).opaque = NIM_FALSE;
}
static N_INLINE(NI, parseUntil__yxs3WjxMSDtXEyiLC9aqFCAparseutils)(NimStringDesc* s, NimStringDesc** token, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw until, NI start) {
	NI result;
	NI i;
	result = (NI)0;
	i = start;
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = (i < (s ? s->Sup.len : 0));
			if (!(T3_)) goto LA4_;
			T3_ = !(((until[(NU)(((NU8)(s->data[i])))>>3] &(1U<<((NU)(((NU8)(s->data[i])))&7U)))!=0));
			LA4_: ;
			if (!T3_) goto LA2;
			i += ((NI) 1);
		} LA2: ;
	}
	result = (NI)(i - start);
	(*token) = substr__2yh9cer0ymNRHlOOg8P7IuA(s, start, (NI)(i - ((NI) 1)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, parseAuthority__zi1fIQvZNRFlvZX648raeA)(NimStringDesc* authority, tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* result) {
	NI i;
	NIM_BOOL inPort;
	NIM_BOOL inIPv6;
	i = ((NI) 0);
	inPort = NIM_FALSE;
	inIPv6 = NIM_FALSE;
	{
		while (1) {
			if (!(i < (authority ? authority->Sup.len : 0))) goto LA2;
			switch (((NU8)(authority->data[i]))) {
			case 64:
			{
				NimStringDesc* T4_;
				NimStringDesc* T5_;
				T4_ = (NimStringDesc*)0;
				T4_ = (*result).password;
				(*result).password = (*result).port;
				(*result).port = T4_;
				(*result).port = setLengthStr((*result).port, ((NI) 0));
				T5_ = (NimStringDesc*)0;
				T5_ = (*result).username;
				(*result).username = (*result).hostname;
				(*result).hostname = T5_;
				(*result).hostname = setLengthStr((*result).hostname, ((NI) 0));
				inPort = NIM_FALSE;
			}
			break;
			case 58:
			{
				{
					if (!inIPv6) goto LA9_;
					(*result).hostname = addChar((*result).hostname, authority->data[i]);
				}
				goto LA7_;
				LA9_: ;
				{
					inPort = NIM_TRUE;
				}
				LA7_: ;
			}
			break;
			case 91:
			{
				inIPv6 = NIM_TRUE;
			}
			break;
			case 93:
			{
				inIPv6 = NIM_FALSE;
			}
			break;
			default:
			{
				{
					if (!inPort) goto LA17_;
					(*result).port = addChar((*result).port, authority->data[i]);
				}
				goto LA15_;
				LA17_: ;
				{
					(*result).hostname = addChar((*result).hostname, authority->data[i]);
				}
				LA15_: ;
			}
			break;
			}
			i += ((NI) 1);
		} LA2: ;
	}
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, parsePath__0TsSB8FdgpD9cp7XiVe8wdA)(NimStringDesc* uri, NI* i, tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* result) {
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (NI)0;
	T1_ = parseUntil__yxs3WjxMSDtXEyiLC9aqFCAparseutils(uri, (&(*result).path), TM__VzbRQH9cb1xm1tSKH4PwBSw_2, (*i));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*i) += T1_;
	{
		NI T4_;
		T4_ = (NI)0;
		T4_ = nsuCmpIgnoreCase((*result).scheme, ((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_3));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!(T4_ == ((NI) 0))) goto LA5_;
		parseAuthority__zi1fIQvZNRFlvZX648raeA((*result).path, result);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*result).path = setLengthStr((*result).path, ((NI) 0));
	}
	LA5_: ;
	{
		NIM_BOOL T9_;
		NI T13_;
		T9_ = (NIM_BOOL)0;
		T9_ = ((*i) < (uri ? uri->Sup.len : 0));
		if (!(T9_)) goto LA10_;
		T9_ = ((NU8)(uri->data[(*i)]) == (NU8)(63));
		LA10_: ;
		if (!T9_) goto LA11_;
		(*i) += ((NI) 1);
		T13_ = (NI)0;
		T13_ = parseUntil__yxs3WjxMSDtXEyiLC9aqFCAparseutils(uri, (&(*result).query), TM__VzbRQH9cb1xm1tSKH4PwBSw_4, (*i));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*i) += T13_;
	}
	LA11_: ;
	{
		NIM_BOOL T16_;
		NI T20_;
		T16_ = (NIM_BOOL)0;
		T16_ = ((*i) < (uri ? uri->Sup.len : 0));
		if (!(T16_)) goto LA17_;
		T16_ = ((NU8)(uri->data[(*i)]) == (NU8)(35));
		LA17_: ;
		if (!T16_) goto LA18_;
		(*i) += ((NI) 1);
		T20_ = (NI)0;
		T20_ = parseUntil__yxs3WjxMSDtXEyiLC9aqFCAparseutils(uri, (&(*result).anchor), TM__VzbRQH9cb1xm1tSKH4PwBSw_5, (*i));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*i) += T20_;
	}
	LA18_: ;
	}BeforeRet_: ;
}
static N_INLINE(NI, parseWhile__aIOGZyeHx2rHC71Dcc2SCwparseutils)(NimStringDesc* s, NimStringDesc** token, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw validChars, NI start) {
	NI result;
	NI i;
	result = (NI)0;
	i = start;
	{
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = (i < (s ? s->Sup.len : 0));
			if (!(T3_)) goto LA4_;
			T3_ = ((validChars[(NU)(((NU8)(s->data[i])))>>3] &(1U<<((NU)(((NU8)(s->data[i])))&7U)))!=0);
			LA4_: ;
			if (!T3_) goto LA2;
			i += ((NI) 1);
		} LA2: ;
	}
	result = (NI)(i - start);
	(*token) = substr__2yh9cer0ymNRHlOOg8P7IuA(s, start, (NI)(i - ((NI) 1)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, parseUri__2Afz5k9c4YIkP0o0kpbe9cvQ)(NimStringDesc* uri, tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* result) {
	NI i;
	NIM_BOOL doubleSlash;
	NIM_BOOL T1_;
	NI T13_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	resetUri__6wZ9cdrNwSrw8xkgtsNgsVQ(result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	i = ((NI) 0);
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI) 1) < (uri ? uri->Sup.len : 0));
	if (!(T1_)) goto LA2_;
	T1_ = ((NU8)(uri->data[((NI) 1)]) == (NU8)(47));
	LA2_: ;
	doubleSlash = T1_;
	{
		NIM_BOOL T5_;
		T5_ = (NIM_BOOL)0;
		T5_ = (i < (uri ? uri->Sup.len : 0));
		if (!(T5_)) goto LA6_;
		T5_ = ((NU8)(uri->data[i]) == (NU8)(47));
		LA6_: ;
		if (!T5_) goto LA7_;
		{
			if (!!(doubleSlash)) goto LA11_;
			parsePath__0TsSB8FdgpD9cp7XiVe8wdA(uri, (&i), result);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			goto BeforeRet_;
		}
		LA11_: ;
	}
	LA7_: ;
	T13_ = (NI)0;
	T13_ = parseWhile__aIOGZyeHx2rHC71Dcc2SCwparseutils(uri, (&(*result).scheme), TM__VzbRQH9cb1xm1tSKH4PwBSw_6, i);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	i += T13_;
	{
		NIM_BOOL T16_;
		NIM_BOOL T17_;
		T16_ = (NIM_BOOL)0;
		T17_ = (NIM_BOOL)0;
		T17_ = ((uri ? uri->Sup.len : 0) <= i);
		if (T17_) goto LA18_;
		T17_ = !(((NU8)(uri->data[i]) == (NU8)(58)));
		LA18_: ;
		T16_ = T17_;
		if (!(T16_)) goto LA19_;
		T16_ = !(doubleSlash);
		LA19_: ;
		if (!T16_) goto LA20_;
		i = ((NI) 0);
		(*result).scheme = setLengthStr((*result).scheme, ((NI) 0));
		parsePath__0TsSB8FdgpD9cp7XiVe8wdA(uri, (&i), result);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA20_: ;
	{
		if (!!(doubleSlash)) goto LA24_;
		i += ((NI) 1);
	}
	LA24_: ;
	{
		NIM_BOOL T28_;
		NIM_BOOL T29_;
		NimStringDesc* authority;
		NI T34_;
		T28_ = (NIM_BOOL)0;
		T29_ = (NIM_BOOL)0;
		T29_ = ((NI)(i + ((NI) 1)) < (uri ? uri->Sup.len : 0));
		if (!(T29_)) goto LA30_;
		T29_ = ((NU8)(uri->data[i]) == (NU8)(47));
		LA30_: ;
		T28_ = T29_;
		if (!(T28_)) goto LA31_;
		T28_ = ((NU8)(uri->data[(NI)(i + ((NI) 1))]) == (NU8)(47));
		LA31_: ;
		if (!T28_) goto LA32_;
		i += ((NI) 2);
		authority = ((NimStringDesc*) NIM_NIL);
		T34_ = (NI)0;
		T34_ = parseUntil__yxs3WjxMSDtXEyiLC9aqFCAparseutils(uri, (&authority), TM__VzbRQH9cb1xm1tSKH4PwBSw_7, i);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		i += T34_;
		{
			if (!(((NI) 0) < (authority ? authority->Sup.len : 0))) goto LA37_;
			parseAuthority__zi1fIQvZNRFlvZX648raeA(authority, result);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA37_: ;
	}
	goto LA26_;
	LA32_: ;
	{
		(*result).opaque = NIM_TRUE;
	}
	LA26_: ;
	parsePath__0TsSB8FdgpD9cp7XiVe8wdA(uri, (&i), result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, parseUri__rbZTAh57otUDsvMlWgTQog)(NimStringDesc* uri, tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* Result) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	initUri__zcwd3ynrfDQcP9c8k9cEeg9aQ(Result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	parseUri__2Afz5k9c4YIkP0o0kpbe9cvQ(uri, Result);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
static N_INLINE(NIM_BOOL, endsWith__IC89a6ZhQ52RmT4pzQl6YbAstrutils)(NimStringDesc* s, NIM_CHAR suffix) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (((NI) 0) < (s ? s->Sup.len : 0));
	if (!(T1_)) goto LA2_;
	T1_ = ((NU8)(s->data[((s ? s->Sup.len : 0)-1)]) == (NU8)(suffix));
	LA2_: ;
	result = T1_;
	return result;
}
static N_INLINE(NimStringDesc*, X5BX5D___ogYTOKbgqbjPfyC123US1gsystem)(NimStringDesc* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x) {
	NimStringDesc* result;
	NI a;
	NI L;
	result = (NimStringDesc*)0;
	a = x.a;
	L = (NI)((NI)((NI)((s ? s->Sup.len : 0) - x.b) - a) + ((NI) 1));
	result = mnewString(((NI) (L)));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < L)) goto LA3;
				i = i_2;
				result->data[i] = s->data[(NI)(i + a)];
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___9aI7qw5xvHD3Zb9b9cJik76iw)(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ* u) {
	NimStringDesc* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	{
		if (!(((NI) 0) < ((*u).scheme ? (*u).scheme->Sup.len : 0))) goto LA3_;
		result = resizeString(result, ((*u).scheme ? (*u).scheme->Sup.len : 0) + 0);
appendString(result, (*u).scheme);
		{
			if (!(*u).opaque) goto LA7_;
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_9));
		}
		goto LA5_;
		LA7_: ;
		{
			result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_10));
		}
		LA5_: ;
	}
	LA3_: ;
	{
		if (!(((NI) 0) < ((*u).username ? (*u).username->Sup.len : 0))) goto LA12_;
		result = resizeString(result, ((*u).username ? (*u).username->Sup.len : 0) + 0);
appendString(result, (*u).username);
		{
			if (!(((NI) 0) < ((*u).password ? (*u).password->Sup.len : 0))) goto LA16_;
			result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_9));
			result = resizeString(result, ((*u).password ? (*u).password->Sup.len : 0) + 0);
appendString(result, (*u).password);
		}
		LA16_: ;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_11));
	}
	LA12_: ;
	{
		NIM_BOOL T20_;
		tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T23_;
		NimStringDesc* T24_;
		T20_ = (NIM_BOOL)0;
		T20_ = endsWith__IC89a6ZhQ52RmT4pzQl6YbAstrutils((*u).hostname, 47);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T20_) goto LA21_;
		T23_ = dotdot___xNR8BVBMWzS9bXXNMikmyLgsystem(((NI) 0), ((NI) 2));
		T24_ = (NimStringDesc*)0;
		T24_ = X5BX5D___ogYTOKbgqbjPfyC123US1gsystem((*u).hostname, T23_);
		result = resizeString(result, (T24_ ? T24_->Sup.len : 0) + 0);
appendString(result, T24_);
	}
	goto LA18_;
	LA21_: ;
	{
		result = resizeString(result, ((*u).hostname ? (*u).hostname->Sup.len : 0) + 0);
appendString(result, (*u).hostname);
	}
	LA18_: ;
	{
		if (!(((NI) 0) < ((*u).port ? (*u).port->Sup.len : 0))) goto LA28_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_9));
		result = resizeString(result, ((*u).port ? (*u).port->Sup.len : 0) + 0);
appendString(result, (*u).port);
	}
	LA28_: ;
	{
		if (!(((NI) 0) < ((*u).path ? (*u).path->Sup.len : 0))) goto LA32_;
		{
			NIM_BOOL T36_;
			T36_ = (NIM_BOOL)0;
			T36_ = (((NI) 0) < ((*u).hostname ? (*u).hostname->Sup.len : 0));
			if (!(T36_)) goto LA37_;
			T36_ = !(((NU8)((*u).path->data[((NI) 0)]) == (NU8)(47)));
			LA37_: ;
			if (!T36_) goto LA38_;
			result = addChar(result, 47);
		}
		LA38_: ;
		result = resizeString(result, ((*u).path ? (*u).path->Sup.len : 0) + 0);
appendString(result, (*u).path);
	}
	LA32_: ;
	{
		if (!(((NI) 0) < ((*u).query ? (*u).query->Sup.len : 0))) goto LA42_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_12));
		result = resizeString(result, ((*u).query ? (*u).query->Sup.len : 0) + 0);
appendString(result, (*u).query);
	}
	LA42_: ;
	{
		if (!(((NI) 0) < ((*u).anchor ? (*u).anchor->Sup.len : 0))) goto LA46_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_13));
		result = resizeString(result, ((*u).anchor ? (*u).anchor->Sup.len : 0) + 0);
appendString(result, (*u).anchor);
	}
	LA46_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, encodeUrl__hfOKCSlSHEBA7MAnVFj2bA)(NimStringDesc* s, NIM_BOOL usePlus) {
	NimStringDesc* result;
	NimStringDesc* fromSpace;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((NI)((s ? s->Sup.len : 0) + (NI)((NI64)((s ? s->Sup.len : 0)) >> (NU64)(((NI) 2)))))));
	{
		if (!usePlus) goto LA3_;
		fromSpace = copyString(((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_14));
	}
	goto LA1_;
	LA3_: ;
	{
		fromSpace = copyString(((NimStringDesc*) &TM__VzbRQH9cb1xm1tSKH4PwBSw_15));
	}
	LA1_: ;
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA8;
				c = s->data[i];
				switch (((NU8)(c))) {
				case 97 ... 122:
				case 65 ... 90:
				case 48 ... 57:
				case 45:
				case 46:
				case 95:
				case 126:
				{
					result = addChar(result, c);
				}
				break;
				case 32:
				{
					result = resizeString(result, (fromSpace ? fromSpace->Sup.len : 0) + 0);
appendString(result, fromSpace);
				}
				break;
				default:
				{
					NimStringDesc* T12_;
					result = addChar(result, 37);
					T12_ = (NimStringDesc*)0;
					T12_ = nsuToHex(((NI64) (((NU8)(c)))), ((NI) 2));
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					result = resizeString(result, (T12_ ? T12_->Sup.len : 0) + 0);
appendString(result, T12_);
				}
				break;
				}
				i += ((NI) 1);
			} LA8: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
static N_INLINE(void, handleHexChar__27mfgxjd88HDH8VCsPeLNguri)(NIM_CHAR c, NI* x, NIM_BOOL* f) {
	switch (((NU8)(c))) {
	case 48 ... 57:
	{
		(*x) = (NI)((NI)((NU64)((*x)) << (NU64)(((NI) 4))) | (NI)(((NU8)(c)) - ((NI) 48)));
	}
	break;
	case 97 ... 102:
	{
		(*x) = (NI)((NI)((NU64)((*x)) << (NU64)(((NI) 4))) | (NI)((NI)(((NU8)(c)) - ((NI) 97)) + ((NI) 10)));
	}
	break;
	case 65 ... 70:
	{
		(*x) = (NI)((NI)((NU64)((*x)) << (NU64)(((NI) 4))) | (NI)((NI)(((NU8)(c)) - ((NI) 65)) + ((NI) 10)));
	}
	break;
	default:
	{
		(*f) = NIM_TRUE;
	}
	break;
	}
}
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, decodePercent__I8Ti83DSsbSvJZ4IQG1oUA)(NimStringDesc* s, NI* i) {
	NIM_CHAR result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_CHAR)0;
	result = 37;
	{
		NI x;
		NIM_BOOL failed;
		if (!((NI)((*i) + ((NI) 2)) < (s ? s->Sup.len : 0))) goto LA3_;
		x = ((NI) 0);
		failed = NIM_FALSE;
		handleHexChar__27mfgxjd88HDH8VCsPeLNguri(s->data[(NI)((*i) + ((NI) 1))], (&x), (&failed));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		handleHexChar__27mfgxjd88HDH8VCsPeLNguri(s->data[(NI)((*i) + ((NI) 2))], (&x), (&failed));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		{
			if (!!(failed)) goto LA7_;
			result = ((NIM_CHAR) (((NI) (x))));
			(*i) += ((NI) 2);
		}
		LA7_: ;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, decodeUrl__9cPBNtWiowkZCuaXjqpF5DQ)(NimStringDesc* s, NIM_BOOL decodePlus) {
	NimStringDesc* result;
	NI i;
	NI j;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	result = mnewString(((NI) ((s ? s->Sup.len : 0))));
	i = ((NI) 0);
	j = ((NI) 0);
	{
		while (1) {
			if (!(i < (s ? s->Sup.len : 0))) goto LA2;
			switch (((NU8)(s->data[i]))) {
			case 37:
			{
				NIM_CHAR T4_;
				T4_ = (NIM_CHAR)0;
				T4_ = decodePercent__I8Ti83DSsbSvJZ4IQG1oUA(s, (&i));
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				result->data[j] = T4_;
			}
			break;
			case 43:
			{
				{
					if (!decodePlus) goto LA8_;
					result->data[j] = 32;
				}
				goto LA6_;
				LA8_: ;
				{
					result->data[j] = s->data[i];
				}
				LA6_: ;
			}
			break;
			default:
			{
				result->data[j] = s->data[i];
			}
			break;
			}
			i += ((NI) 1);
			j += ((NI) 1);
		} LA2: ;
	}
	result = setLengthStr(result, ((NI) (j)));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, encodeQuery__fVjSx9cfmtqIhdWjSt7tSFg)(tyTuple__UV3llMMYFckfui8YMBuUZA* query, NI queryLen_0, NIM_BOOL usePlus, NIM_BOOL omitEq) {
	NimStringDesc* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	{
		tyTuple__UV3llMMYFckfui8YMBuUZA* elem;
		NI i;
		elem = (tyTuple__UV3llMMYFckfui8YMBuUZA*)0;
		i = ((NI) 0);
		{
			while (1) {
				NimStringDesc* key;
				NimStringDesc* val;
				NimStringDesc* T8_;
				if (!(i < queryLen_0)) goto LA3;
				elem = (&query[i]);
				{
					if (!(((NI) 0) < (result ? result->Sup.len : 0))) goto LA6_;
					result = addChar(result, 38);
				}
				LA6_: ;
				key = (NimStringDesc*)0;
				key = (*elem).Field0;
				val = (NimStringDesc*)0;
				val = (*elem).Field1;
				T8_ = (NimStringDesc*)0;
				T8_ = encodeUrl__hfOKCSlSHEBA7MAnVFj2bA(key, usePlus);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				result = resizeString(result, (T8_ ? T8_->Sup.len : 0) + 0);
appendString(result, T8_);
				{
					NIM_BOOL T11_;
					NimStringDesc* T15_;
					T11_ = (NIM_BOOL)0;
					T11_ = !(omitEq);
					if (T11_) goto LA12_;
					T11_ = (((NI) 0) < (val ? val->Sup.len : 0));
					LA12_: ;
					if (!T11_) goto LA13_;
					result = addChar(result, 61);
					T15_ = (NimStringDesc*)0;
					T15_ = encodeUrl__hfOKCSlSHEBA7MAnVFj2bA(val, usePlus);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					result = resizeString(result, (T15_ ? T15_->Sup.len : 0) + 0);
appendString(result, T15_);
				}
				LA13_: ;
				i += ((NI) 1);
			} LA3: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_uriDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[9];
static TNimNode TM__VzbRQH9cb1xm1tSKH4PwBSw_0[10];

/* section: NIM_merge_TYPE_INIT3 */
NTI__j49bukNPrq747O1GRd4Ng9bQ_.size = sizeof(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ);
NTI__j49bukNPrq747O1GRd4Ng9bQ_.align = NIM_ALIGNOF(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ);
NTI__j49bukNPrq747O1GRd4Ng9bQ_.kind = 18;
NTI__j49bukNPrq747O1GRd4Ng9bQ_.base = 0;
NTI__j49bukNPrq747O1GRd4Ng9bQ_.flags = 2;
TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[0] = &TM__VzbRQH9cb1xm1tSKH4PwBSw_0[1];
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[1].kind = 1;
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[1].offset = offsetof(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ, scheme);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[1].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[1].name = "scheme";
TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[1] = &TM__VzbRQH9cb1xm1tSKH4PwBSw_0[2];
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[2].kind = 1;
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[2].offset = offsetof(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ, username);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[2].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[2].name = "username";
TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[2] = &TM__VzbRQH9cb1xm1tSKH4PwBSw_0[3];
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[3].kind = 1;
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[3].offset = offsetof(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ, password);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[3].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[3].name = "password";
TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[3] = &TM__VzbRQH9cb1xm1tSKH4PwBSw_0[4];
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[4].kind = 1;
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[4].offset = offsetof(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ, hostname);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[4].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[4].name = "hostname";
TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[4] = &TM__VzbRQH9cb1xm1tSKH4PwBSw_0[5];
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[5].kind = 1;
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[5].offset = offsetof(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ, port);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[5].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[5].name = "port";
TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[5] = &TM__VzbRQH9cb1xm1tSKH4PwBSw_0[6];
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[6].kind = 1;
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[6].offset = offsetof(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ, path);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[6].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[6].name = "path";
TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[6] = &TM__VzbRQH9cb1xm1tSKH4PwBSw_0[7];
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[7].kind = 1;
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[7].offset = offsetof(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ, query);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[7].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[7].name = "query";
TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[7] = &TM__VzbRQH9cb1xm1tSKH4PwBSw_0[8];
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[8].kind = 1;
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[8].offset = offsetof(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ, anchor);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[8].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[8].name = "anchor";
TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[8] = &TM__VzbRQH9cb1xm1tSKH4PwBSw_0[9];
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[9].kind = 1;
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[9].offset = offsetof(tyObject_Uri__j49bukNPrq747O1GRd4Ng9bQ, opaque);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[9].typ = (&NTI__VaVACK0bpYmqIQ0mKcHfQQ_);
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[9].name = "opaque";
TM__VzbRQH9cb1xm1tSKH4PwBSw_0[0].len = 9; TM__VzbRQH9cb1xm1tSKH4PwBSw_0[0].kind = 2; TM__VzbRQH9cb1xm1tSKH4PwBSw_0[0].sons = &TM__VzbRQH9cb1xm1tSKH4PwBSw_8_9[0];
NTI__j49bukNPrq747O1GRd4Ng9bQ_.node = &TM__VzbRQH9cb1xm1tSKH4PwBSw_0[0];
}

