#ifndef _FENV_H
#include <math/fenv.h>

#ifndef _ISOMAC
# include <stdbool.h>
/* Now define the internal interfaces.  */

extern int __feclearexcept (int __excepts);
extern int __fegetexcept (void);
extern int __fegetexceptflag (fexcept_t *__flagp, int __excepts);
extern int __feraiseexcept (int __excepts);
extern int __fesetexceptflag (const fexcept_t *__flagp, int __excepts);
extern int __fegetenv (fenv_t *__envp);
extern int __fesetenv (const fenv_t *__envp);
extern int __feupdateenv (const fenv_t *__envp);

libm_hidden_proto (feraiseexcept)
libm_hidden_proto (fegetenv)
libm_hidden_proto (fesetenv)
libm_hidden_proto (fesetround)
libm_hidden_proto (feholdexcept)
libm_hidden_proto (feupdateenv)
libm_hidden_proto (fetestexcept)
libm_hidden_proto (feclearexcept)

/* Rounding mode context.  This allows functions to set/restore rounding mode
   only when the desired rounding mode is different from the current rounding
   mode.  */
struct rm_ctx
{
  fenv_t env;
  bool updated_status;
};
#endif

#endif
