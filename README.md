# libft

An educational C static library implementing character, string, memory, conversion, and file-descriptor output helpers as part of the 42 curriculum.

The project develops familiarity with pointers, allocation, null-terminated strings, and small reusable C interfaces. It is a subset of common library functionality, not a complete replacement for libc.

## Build

Requires a C compiler, Make, and `ar`.

```bash
git clone https://github.com/ahmedaitelaaoud/libft.git
cd libft
make
```

The Makefile produces `libft.a`. Public declarations are in `libft.h`; source files live at the repository root.

## Usage

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello from libft", 1);
    return (0);
}
```

Save this as `example.c`, then compile and run:

```bash
cc -Wall -Wextra -Werror -I. example.c libft.a -o example
./example
```

## Implemented areas

| Area | Examples |
| --- | --- |
| Character checks and case conversion | `ft_isalpha`, `ft_isdigit`, `ft_tolower` |
| Memory operations | `ft_memcpy`, `ft_memmove`, `ft_calloc` |
| String operations | `ft_strlen`, `ft_strlcpy`, `ft_strjoin`, `ft_split` |
| Conversion | `ft_atoi`, `ft_itoa` |
| Callbacks over strings | `ft_strmapi`, `ft_striteri` |
| File-descriptor output | `ft_putchar_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |

See `libft.h` for the complete API. Functions returning allocated storage require the caller to manage its lifetime; split results require freeing each allocated string and the pointer array.

## Scope and next steps

This checkout does not contain linked-list bonus functions, a `make bonus` target, or the nested source folders described in earlier documentation. No automated test suite is committed. Priorities are comparison tests against standard functions where contracts match, allocation-failure cases, and memory checking.

```bash
make clean
make fclean
make re
```

## License

No repository-level license is currently included. Earlier MIT badges did not correspond to a LICENSE file.
