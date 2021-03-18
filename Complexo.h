#ifdef TYPE
#ifdef TYPED

typedef struct TYPED(complexo) {
    TYPE a;
    TYPE b;
} TYPED(complexo_t);

TYPED(complexo_t)* criaComplexo();

#endif
#endif