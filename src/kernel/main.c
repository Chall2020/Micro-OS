#include <stdint.h>
#include "stdio.h"
#include "memory.h"
#include <hal/hal.h>

extern uint8_t __bss_start;
extern uint8_t __end;

char* a[] = {
  ".",
  "-"
};

char* b[] = {
  "-",
  ".",
  ".",
  "."
};

char* c[] =  {
  "-",
  ".",
  "-",
  "."
};

char* d[] =  {
  "-",
  ".",
  "."
};

char* e[] =  {
  "."
};

char* f[] =  {
  ".",
  ".",
  "-",
  "."
};

char* g[] =  {
  "-",
  "-",
  "."
};

char* h[] =  {
  ".",
  ".",
  ".",
  "."
};

char* l_i[] =  {
  ".",
  "."
};

char* j[] =  {
  ".",
  "-",
  "-",
  "-"
};

char* k[] =  {
  "-",
  ".",
  "-"
};

char* l[] =  {
  ".",
  "-",
  ".",
  "."
};

char* m[] =  {
  "-",
  "-"
};

char* n[] =  {
  "-",
  "."
};

char* o[] =  {
  "-",
  "-",
  "-"
};

char* p[] =  {
  ".",
  "-",
  "-",
  "."
};

char* q[] =  {
  "-",
  "-",
  ".",
  "-"
};

char* r[] =  {
  ".",
  "-",
  "."
};

char* s[] =  {
  ".",
  ".",
  "."
};

char* t[] =  {
  "-"
};

char* u[] =  {
  ".",
  ".",
  "-"
};

char* v[] =  {
  ".",
  ".",
  ".",
  "-"
};

char* w[] =  {
  ".",
  "-",
  "-"
};

char* x[] =  {
  "-",
  ".",
  ".",
  "-"
};

char* y[] =  {
  "-",
  ".",
  "-",
  "-"
};

char* z[] =  {
  "-",
  "-",
  ".",
  "."
};

char* string[] = {"h", "e", "l", "l", "o", " ", "w", "o", "r", "l", "d"};

void long_buzz()
{
  printf("-");
}

void short_buzz()
{
  printf(".");
}

void output()
{
  for(int i = 0; i < sizeof(string)/sizeof(string[0]); i++)
  {
    if (string[i] == " ")
    {
      printf("/");
    }

    if(string[i] == "a")
    {
      for(int x = 0; x < sizeof(a)/sizeof(a[0]); x++)
      {
        if(a[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "b")
    {
      for(int x = 0; x < sizeof(b)/sizeof(b[0]); x++)
      {
        if(b[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "c")
    {
      for(int x = 0; x < sizeof(c)/sizeof(c[0]); x++)
      {
        if(c[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "d")
    {
      for(int x = 0; x < sizeof(d)/sizeof(d[0]); x++)
      {
        if(d[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "e")
    {
      for(int x = 0; x < sizeof(e)/sizeof(e[0]); x++)
      {
        if(e[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "f")
    {
      for(int x = 0; x < sizeof(f)/sizeof(f[0]); x++)
      {
        if(f[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "g")
    {
      for(int x = 0; x < sizeof(g)/sizeof(g[0]); x++)
      {
        if(g[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "h")
    {
      for(int x = 0; x < sizeof(h)/sizeof(h[0]); x++)
      {
        if(h[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "i")
    {
      for(int x = 0; x < sizeof(l_i)/sizeof(l_i[0]); x++)
      {
        if(l_i[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "j")
    {
      for(int x = 0; x < sizeof(j)/sizeof(j[0]); x++)
      {
        if(j[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "k")
    {
      for(int x = 0; x < sizeof(k)/sizeof(k[0]); x++)
      {
        if(k[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "l")
    {
      for(int x = 0; x < sizeof(l)/sizeof(l[0]); x++)
      {
        if(l[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "m")
    {
      for(int x = 0; x < sizeof(m)/sizeof(m[0]); x++)
      {
        if(m[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "n")
    {
      for(int x = 0; x < sizeof(n)/sizeof(n[0]); x++)
      {
        if(n[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "o")
    {
      for(int x = 0; x < sizeof(o)/sizeof(o[0]); x++)
      {
        if(o[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "p")
    {
      for(int x = 0; x < sizeof(p)/sizeof(p[0]); x++)
      {
        if(p[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "q")
    {
      for(int x = 0; x < sizeof(q)/sizeof(q[0]); x++)
      {
        if(q[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "r")
    {
      for(int x = 0; x < sizeof(r)/sizeof(r[0]); x++)
      {
        if(r[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "s")
    {
      for(int x = 0; x < sizeof(s)/sizeof(s[0]); x++)
      {
        if(s[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "t")
    {
      for(int x = 0; x < sizeof(t)/sizeof(t[0]); x++)
      {
        if(t[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "u")
    {
      for(int x = 0; x < sizeof(u)/sizeof(u[0]); x++)
      {
        if(u[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "v")
    {
      for(int x = 0; x < sizeof(v)/sizeof(v[0]); x++)
      {
        if(v[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "w")
    {
      for(int x = 0; x < sizeof(w)/sizeof(w[0]); x++)
      {
        if(w[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "x")
    {
      for(int y = 0; y < sizeof(x)/sizeof(x[0]); y++)
      {
        if(a[y] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "y")
    {
      for(int x = 0; x < sizeof(y)/sizeof(y[0]); x++)
      {
        if(y[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    if(string[i] == "z")
    {
      for(int x = 0; x < sizeof(z)/sizeof(z[0]); x++)
      {
        if(z[x] == "-")
          long_buzz();

        else
          short_buzz();
      }
    }

    printf(" ");
    
  }

  printf("\n");
}

void __attribute__((section(".entry"))) start(uint16_t bootDrive)
{
    memset(&__bss_start, 0, (&__end) - (&__bss_start));

    HAL_Initialize();

    clrscr();

    printf("+----------+\n");
    printf("| Micro-OS |\n");
    printf("+----------+\n");
    printf("\nKernel Successfully loaded... in C!\n\n");

    output();

end:
    for (;;);
}
