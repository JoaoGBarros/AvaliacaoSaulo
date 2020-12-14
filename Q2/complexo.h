#ifdef TYPE
#ifdef TYPED

typedef struct TYPED(complexo){
    TYPE a;
    TYPE b;
}TYPED(complexo_t);

void TYPED(CrieNumeroComplexo) (TYPED(complexo_t) **pointer);
void TYPED(PreencheComplexoDeReais) (TYPED(complexo_t) *pointer, TYPE a, TYPE b);
TYPED(complexo_t) TYPED(SomaComplexos)(TYPED(complexo_t) *p, TYPED(complexo_t) *q);
TYPED(complexo_t) TYPED(ProdutoComplexos)(TYPED(complexo_t) *p, TYPED(complexo_t) *q);
TYPED(complexo_t) TYPED(SubtracaoComplexos)(TYPED(complexo_t) *p, TYPED(complexo_t) *q);
TYPED(complexo_t) TYPED(DivisaoComplexos)(TYPED(complexo_t) *p, TYPED(complexo_t) *q);
void TYPED(Amostra)(TYPED(complexo_t) operacao);
void TYPED(Libera)(TYPED(complexo_t) * pointer);

#endif
#endif
