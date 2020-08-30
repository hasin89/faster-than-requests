/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
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
typedef struct tyObject_Deque__NuwIXbomwb0PtcywOgXRnA tyObject_Deque__NuwIXbomwb0PtcywOgXRnA;
typedef struct tySequence__aNpJjaoUowCQc7fBn3wtDQ tySequence__aNpJjaoUowCQc7fBn3wtDQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;

/* section: NIM_merge_TYPES */
struct tyObject_Deque__NuwIXbomwb0PtcywOgXRnA {
tySequence__aNpJjaoUowCQc7fBn3wtDQ* data;
NI head;
NI tail;
NI count;
NI mask;
};
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
struct TGenericSeq {
NI len;
NI reserved;
};
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (void* ClE_0);
void* ClE_0;
} tyProc__HzVCwACFYM9cx9aV62PdjtuA;

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__aNpJjaoUowCQc7fBn3wtDQ {
  TGenericSeq Sup;
  tyProc__HzVCwACFYM9cx9aV62PdjtuA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__NuwIXbomwb0PtcywOgXRnA_;
extern TNimType NTI__aNpJjaoUowCQc7fBn3wtDQ_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
N_LIB_PRIVATE N_NIMCALL(void, stdlib_dequesDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__NdgYN5HU2ty0qMI5oazWyg_2_5[5];
static TNimNode TM__NdgYN5HU2ty0qMI5oazWyg_0[6];

/* section: NIM_merge_TYPE_INIT3 */
NTI__NuwIXbomwb0PtcywOgXRnA_.size = sizeof(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA);
NTI__NuwIXbomwb0PtcywOgXRnA_.align = NIM_ALIGNOF(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA);
NTI__NuwIXbomwb0PtcywOgXRnA_.kind = 18;
NTI__NuwIXbomwb0PtcywOgXRnA_.base = 0;
TM__NdgYN5HU2ty0qMI5oazWyg_2_5[0] = &TM__NdgYN5HU2ty0qMI5oazWyg_0[1];
TM__NdgYN5HU2ty0qMI5oazWyg_0[1].kind = 1;
TM__NdgYN5HU2ty0qMI5oazWyg_0[1].offset = offsetof(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA, data);
TM__NdgYN5HU2ty0qMI5oazWyg_0[1].typ = (&NTI__aNpJjaoUowCQc7fBn3wtDQ_);
TM__NdgYN5HU2ty0qMI5oazWyg_0[1].name = "data";
TM__NdgYN5HU2ty0qMI5oazWyg_2_5[1] = &TM__NdgYN5HU2ty0qMI5oazWyg_0[2];
TM__NdgYN5HU2ty0qMI5oazWyg_0[2].kind = 1;
TM__NdgYN5HU2ty0qMI5oazWyg_0[2].offset = offsetof(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA, head);
TM__NdgYN5HU2ty0qMI5oazWyg_0[2].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__NdgYN5HU2ty0qMI5oazWyg_0[2].name = "head";
TM__NdgYN5HU2ty0qMI5oazWyg_2_5[2] = &TM__NdgYN5HU2ty0qMI5oazWyg_0[3];
TM__NdgYN5HU2ty0qMI5oazWyg_0[3].kind = 1;
TM__NdgYN5HU2ty0qMI5oazWyg_0[3].offset = offsetof(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA, tail);
TM__NdgYN5HU2ty0qMI5oazWyg_0[3].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__NdgYN5HU2ty0qMI5oazWyg_0[3].name = "tail";
TM__NdgYN5HU2ty0qMI5oazWyg_2_5[3] = &TM__NdgYN5HU2ty0qMI5oazWyg_0[4];
TM__NdgYN5HU2ty0qMI5oazWyg_0[4].kind = 1;
TM__NdgYN5HU2ty0qMI5oazWyg_0[4].offset = offsetof(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA, count);
TM__NdgYN5HU2ty0qMI5oazWyg_0[4].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__NdgYN5HU2ty0qMI5oazWyg_0[4].name = "count";
TM__NdgYN5HU2ty0qMI5oazWyg_2_5[4] = &TM__NdgYN5HU2ty0qMI5oazWyg_0[5];
TM__NdgYN5HU2ty0qMI5oazWyg_0[5].kind = 1;
TM__NdgYN5HU2ty0qMI5oazWyg_0[5].offset = offsetof(tyObject_Deque__NuwIXbomwb0PtcywOgXRnA, mask);
TM__NdgYN5HU2ty0qMI5oazWyg_0[5].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__NdgYN5HU2ty0qMI5oazWyg_0[5].name = "mask";
TM__NdgYN5HU2ty0qMI5oazWyg_0[0].len = 5; TM__NdgYN5HU2ty0qMI5oazWyg_0[0].kind = 2; TM__NdgYN5HU2ty0qMI5oazWyg_0[0].sons = &TM__NdgYN5HU2ty0qMI5oazWyg_2_5[0];
NTI__NuwIXbomwb0PtcywOgXRnA_.node = &TM__NdgYN5HU2ty0qMI5oazWyg_0[0];
}
