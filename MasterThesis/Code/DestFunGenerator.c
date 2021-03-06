/* @brief Signature of a code generator for open OSR points
/*
/* A code generator for open OSR transitions takes four parameters: the
/* Function @F1 in which the OSR point was inserted, the instruction
/* @OSRSrc for which an OSR decision was taken, the address @extra
/* of the additional data structure created by the front-end for the
/* OSR point, and the run-time address @profDataAddr of the
/* (optional) profiled Value.
 */
typedef void* (*DestFunGenerator)(llvm::Function* F1, 
                            llvm::Instruction* OSRSrc,
                            void* extra, void* profDataAddr);