<div align="center">

<!-- HEADER BANNER -->
<img width="100%" src="https://capsule-render.vercel.app/api?type=venom&color=0:0d0d0d,50:1a1a2e,100:0f3460&height=300&section=header&text=C%20LANGUAGE&fontSize=90&fontColor=00fff5&animation=twinkling&fontAlignY=50&desc=⚡%20The%20Foundation%20of%20Modern%20Computing%20⚡&descSize=20&descAlignY=70&descColor=e94560" />

</div>

---

<div align="center">

<!-- TYPING ANIMATION -->
[![Typing SVG](https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=700&size=22&pause=1000&color=00FFF5&center=true&vCenter=true&width=700&lines=Systems+Programmer+%7C+Low-Level+Engineer;Memory+Architect+%7C+Performance+Optimizer;Compiler+Craftsman+%7C+Kernel+Developer;Pointer+Whisperer+%7C+Bit+Manipulator)](https://git.io/typing-svg)

</div>

---

<div align="center">

<pre>
██████╗     ██╗      █████╗  ███╗   ██╗  ██████╗ ██╗   ██╗  █████╗   ██████╗ ███████╗
██╔════╝    ██║     ██╔══██╗ ████╗  ██║ ██╔════╝ ██║   ██║ ██╔══██╗ ██╔════╝ ██╔════╝
██║         ██║     ███████║ ██╔██╗ ██║ ██║  ███╗██║   ██║ ███████║ ██║  ███╗█████╗
██║         ██║     ██╔══██║ ██║╚██╗██║ ██║   ██║██║   ██║ ██╔══██║ ██║   ██║██╔══╝
╚██████╗    ███████╗██║  ██║ ██║ ╚████║ ╚██████╔╝╚██████╔╝ ██║  ██║ ╚██████╔╝███████╗
 ╚═════╝    ╚══════╝╚═╝  ╚═╝ ╚═╝  ╚═══╝  ╚═════╝  ╚═════╝  ╚═╝  ╚═╝  ╚═════╝ ╚══════╝
</pre>

</div>

---

<!-- STATS BADGES ROW -->
<div align="center">

![C](https://img.shields.io/badge/Language-C-00fff5?style=for-the-badge&logo=c&logoColor=00fff5&labelColor=0d0d0d)
![Year](https://img.shields.io/badge/Born-1972-e94560?style=for-the-badge&labelColor=0d0d0d)
![Standard](https://img.shields.io/badge/Standard-C17%20%7C%20C23-00fff5?style=for-the-badge&labelColor=0d0d0d)
![Level](https://img.shields.io/badge/Level-Systems%20Core-e94560?style=for-the-badge&labelColor=0d0d0d)
![Type](https://img.shields.io/badge/Paradigm-Procedural-00fff5?style=for-the-badge&labelColor=0d0d0d)

</div>

---

## ⚡ SYSTEM OVERVIEW

> *"C is not a big language, and it is not well served by a big book."*
> — **Brian Kernighan & Dennis Ritchie**, The C Programming Language

C is the **mother of all modern languages** — a compiled, statically-typed, procedural systems programming language developed by **Dennis Ritchie** at Bell Labs between **1969 and 1973**. Nearly every OS kernel, embedded system, and high-performance runtime has C at its core. When you need raw speed, fine-grained memory control, and zero-overhead abstractions — **C is the weapon of choice**.

---

## 🗺️ TABLE OF CONTENTS

<details>
<summary>📋 <strong>Click to Expand Full Index</strong></summary>

- [⚡ System Overview](#-system-overview)
- [🔩 Core Architecture](#-core-architecture)
- [💡 Data Types & Variables](#-data-types--variables)
- [🎛️ Operators](#️-operators)
- [🔀 Control Flow](#-control-flow)
- [🔧 Functions](#-functions)
- [🧠 Pointers & Memory](#-pointers--memory)
- [📦 Arrays & Strings](#-arrays--strings)
- [🏗️ Structures & Unions](#️-structures--unions)
- [📂 File I/O](#-file-io)
- [⚙️ Preprocessor Directives](#️-preprocessor-directives)
- [📚 Standard Library Headers](#-standard-library-headers)
- [🛡️ Memory Management](#️-memory-management)
- [🔬 Bitwise Operations](#-bitwise-operations)
- [🧩 Storage Classes](#-storage-classes)
- [📐 Type Qualifiers](#-type-qualifiers)
- [🏎️ Compilation Pipeline](#️-compilation-pipeline)
- [🧪 Debugging & Tools](#-debugging--tools)
- [🚀 Performance Engineering](#-performance-engineering)
- [📖 Standards Timeline](#-standards-timeline)

</details>

---

## 🔩 CORE ARCHITECTURE

```c
/*
 * ┌─────────────────────────────────────────────────────────┐
 * │               C PROGRAM ANATOMY                         │
 * ├─────────────────────────────────────────────────────────┤
 * │  Preprocessor Directives  →  #include, #define, #if    │
 * │  Global Declarations      →  Types, Globals, Prototypes │
 * │  main() Entry Point       →  Program Execution Starts   │
 * │  Functions                →  Modular Logic Units        │
 * └─────────────────────────────────────────────────────────┘
 */

#include <stdio.h>   // Standard I/O — printf, scanf, fgets
#include <stdlib.h>  // Memory — malloc, free, exit
#include <string.h>  // Strings — strcpy, strcmp, strlen
#include <stdint.h>  // Fixed-width integers — int32_t, uint64_t

#define VERSION     "1.0.0"
#define MAX_BUFFER  1024

int main(int argc, char *argv[]) {
    printf("⚡ C Engine v%s — Initialized\n", VERSION);
    return EXIT_SUCCESS;   // Always return status codes
}
```

---

## 💡 DATA TYPES & VARIABLES

### Primitive Types

| Type | Size | Range | Use Case |
|------|------|-------|----------|
| `char` | 1 byte | -128 to 127 | Characters, small integers |
| `unsigned char` | 1 byte | 0 to 255 | Byte buffers, pixel data |
| `short` | 2 bytes | -32,768 to 32,767 | Compact integer storage |
| `int` | 4 bytes | -2.1B to 2.1B | General-purpose integer |
| `long` | 4/8 bytes | Platform-dependent | Large integers |
| `long long` | 8 bytes | ±9.2 quintillion | 64-bit integers |
| `float` | 4 bytes | ~7 decimal digits | Single-precision float |
| `double` | 8 bytes | ~15 decimal digits | Double-precision float |
| `long double` | 12/16 bytes | ~18-19 digits | Extended precision |
| `_Bool` | 1 byte | 0 or 1 | Boolean (C99+) |

### Fixed-Width Types (Recommended in Production)

```c
#include <stdint.h>

int8_t   a = -128;       // Exactly 8-bit signed
uint8_t  b = 255;        // Exactly 8-bit unsigned
int16_t  c = 32767;      // Exactly 16-bit signed
uint32_t d = 4294967295; // Exactly 32-bit unsigned
int64_t  e = -1LL;       // Exactly 64-bit signed
size_t   f = sizeof(int);// Platform pointer-sized unsigned
ptrdiff_t g = ptr2 - ptr1; // Pointer difference type
```

### Variable Declaration Patterns

```c
// ── UNINITIALIZED (undefined behavior if read before write) ──
int raw_counter;

// ── INITIALIZED ──
int score       = 0;
float pi        = 3.14159265f;   // 'f' suffix → float literal
double gravity  = 9.80665;
char grade      = 'A';
char name[]     = "Engineer";    // String literal

// ── CONST (compiler-enforced read-only) ──
const int MAX_PLAYERS = 8;
const char *GAME_TITLE = "Shadow Protocol";

// ── MULTIPLE DECLARATIONS ──
int x = 0, y = 0, z = 0;        // Initialization inline
```

---

## 🎛️ OPERATORS

### Operator Precedence Table (High → Low)

```
┌──────────────────────────────────────────────────────┐
│  Precedence │ Operators                    │ Assoc.  │
├──────────────────────────────────────────────────────┤
│  15 (High)  │ ()  []  ->  .  (postfix)++-- │  L→R   │
│  14         │ (prefix)++--  +  -  !  ~     │  R→L   │
│             │ (type)  *  &  sizeof         │        │
│  13         │ *  /  %                      │  L→R   │
│  12         │ +  -                         │  L→R   │
│  11         │ <<  >>                       │  L→R   │
│  10         │ <  <=  >  >=                 │  L→R   │
│   9         │ ==  !=                       │  L→R   │
│   8         │ & (bitwise AND)              │  L→R   │
│   7         │ ^ (bitwise XOR)              │  L→R   │
│   6         │ | (bitwise OR)               │  L→R   │
│   5         │ && (logical AND)             │  L→R   │
│   4         │ || (logical OR)              │  L→R   │
│   3         │ ?: (ternary)                 │  R→L   │
│   2         │ = += -= *= /= %= &= |= ^=   │  R→L   │
│             │ <<= >>=                      │        │
│   1 (Low)   │ , (comma)                    │  L→R   │
└──────────────────────────────────────────────────────┘
```

```c
// Arithmetic
int sum  = 10 + 3;   // 13
int diff = 10 - 3;   // 7
int prod = 10 * 3;   // 30
int quot = 10 / 3;   // 3 (integer division — truncates)
int rem  = 10 % 3;   // 1

// Relational
_Bool eq  = (5 == 5); // 1
_Bool neq = (5 != 3); // 1
_Bool gt  = (7 > 3);  // 1

// Logical
_Bool both = (1 && 0); // 0  — short-circuit evaluation
_Bool either = (1 || 0); // 1

// Ternary (inline conditional)
int max = (a > b) ? a : b;

// Compound Assignment
score += 10;   // score = score + 10
score -= 5;    // score = score - 5
score *= 2;    // score = score * 2
score /= 4;    // score = score / 4

// Increment / Decrement
i++;   // Post-increment (use value, then increment)
++i;   // Pre-increment  (increment, then use value)
i--;   // Post-decrement
--i;   // Pre-decrement
```

---

## 🔀 CONTROL FLOW

### Conditionals

```c
// ── IF / ELSE IF / ELSE ──
if (health <= 0) {
    printf("GAME OVER\n");
} else if (health <= 25) {
    printf("⚠️  CRITICAL — Find health pack\n");
} else {
    printf("✅  OPERATIONAL\n");
}

// ── SWITCH (for discrete values) ──
switch (difficulty) {
    case 1:  printf("Easy\n");     break;
    case 2:  printf("Normal\n");   break;
    case 3:  printf("Hard\n");     break;
    case 4:  /* fall-through intentional */
    case 5:  printf("Nightmare\n"); break;
    default: printf("Unknown\n");  break;
}
```

### Loops

```c
// ── FOR — known iteration count ──
for (int i = 0; i < 100; i++) {
    process(i);
}

// ── WHILE — condition-driven ──
while (connection_alive()) {
    receive_packet();
}

// ── DO-WHILE — execute at least once ──
do {
    input = get_user_input();
} while (!valid(input));

// ── INFINITE LOOP (server/kernel pattern) ──
for (;;) {
    handle_event(poll());
}

// ── LOOP CONTROL ──
for (int i = 0; i < 10; i++) {
    if (i == 3) continue;   // Skip iteration 3
    if (i == 7) break;      // Exit loop at 7
    printf("%d ", i);       // Prints: 0 1 2 4 5 6
}

// ── goto (used in error-handling in kernel code) ──
if (alloc_fail) goto cleanup;
cleanup:
    free(buffer);
```

---

## 🔧 FUNCTIONS

```c
// ── FUNCTION PROTOTYPE (declare before use) ──
int  compute_damage(int base, float multiplier);
void log_event(const char *msg);
int *allocate_grid(int rows, int cols);

// ── FUNCTION DEFINITION ──
int compute_damage(int base, float multiplier) {
    return (int)(base * multiplier);
}

// ── PASSING BY VALUE vs POINTER ──
void scale_by_value(int x) { x *= 2; }         // Caller unaffected
void scale_by_pointer(int *x) { *x *= 2; }     // Caller's value mutated

// ── VARIADIC FUNCTIONS ──
#include <stdarg.h>
void log_format(const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);
    vprintf(fmt, args);
    va_end(args);
}

// ── INLINE (optimization hint) ──
static inline int clamp(int val, int lo, int hi) {
    return val < lo ? lo : (val > hi ? hi : val);
}

// ── FUNCTION POINTERS ──
typedef int (*CompareFn)(const void *, const void *);

int cmp_int(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Usage: qsort(arr, n, sizeof(int), cmp_int);
```

### Recursion

```c
// ── RECURSIVE FUNCTION ──
unsigned long long factorial(int n) {
    if (n <= 1) return 1;               // Base case
    return (unsigned long long)n * factorial(n - 1); // Recursive case
}

// ── TAIL-RECURSIVE VERSION (compiler may optimize) ──
unsigned long long fact_tail(int n, unsigned long long acc) {
    if (n <= 1) return acc;
    return fact_tail(n - 1, n * acc);
}
```

---

## 🧠 POINTERS & MEMORY

> *"Pointers are the soul of C. Master them and you master the machine."*

```c
// ── POINTER FUNDAMENTALS ──
int  value  = 42;
int *ptr    = &value;   // & → address-of operator

printf("Value  : %d\n",  value);   // 42
printf("Address: %p\n",  ptr);     // 0x7ffd... (memory address)
printf("Deref  : %d\n",  *ptr);    // 42  (* → dereference operator)

// ── POINTER ARITHMETIC ──
int arr[5] = {10, 20, 30, 40, 50};
int *p = arr;           // Points to arr[0]

printf("%d\n", *p);       // 10
printf("%d\n", *(p + 2)); // 30 — advances by sizeof(int)*2 bytes
p++;                      // Now points to arr[1]

// ── POINTER TO POINTER ──
int **pp = &ptr;
printf("%d\n", **pp);   // 42

// ── CONST POINTER VARIANTS ──
const int *cp  = &value; // Pointer to const — can't modify *cp
int *const pc  = &value; // Const pointer    — can't change pc itself
const int *const cpc = &value; // Both immutable

// ── NULL POINTER (always check before deref!) ──
int *safe = NULL;
if (safe != NULL) {
    *safe = 10;  // Safe
}

// ── VOID POINTER (generic pointer) ──
void *generic = malloc(64);
int  *typed   = (int *)generic;  // Must cast before dereferencing

// ── FUNCTION POINTER ──
int (*operation)(int, int);
operation = &add;
int result = operation(5, 3);   // Calls add(5, 3)
```

---

## 🛡️ MEMORY MANAGEMENT

```c
#include <stdlib.h>

// ── STACK MEMORY (automatic, fast, limited size ~1-8MB) ──
void stack_demo(void) {
    int local_arr[1024];   // Lives on stack, freed automatically
}

// ── HEAP MEMORY (manual, large, slower) ──

// malloc — allocate uninitialized block
int *heap_arr = (int *)malloc(100 * sizeof(int));
if (heap_arr == NULL) {
    fprintf(stderr, "❌ Allocation failed\n");
    exit(EXIT_FAILURE);
}

// calloc — allocate zero-initialized block
int *zero_arr = (int *)calloc(100, sizeof(int));

// realloc — resize existing allocation
heap_arr = (int *)realloc(heap_arr, 200 * sizeof(int));
if (heap_arr == NULL) { /* handle error */ }

// free — release heap memory (ALWAYS pair with malloc/calloc)
free(heap_arr);
heap_arr = NULL;  // Nullify to prevent dangling pointer access

// ── MEMORY OPERATIONS ──
#include <string.h>

char src[16] = "Hello, World!";
char dst[16];

memcpy(dst, src, sizeof(src));          // Copy n bytes (no overlap)
memmove(dst, src, sizeof(src));         // Copy n bytes (safe overlap)
memset(dst, 0, sizeof(dst));            // Fill with byte value
int cmp = memcmp(src, dst, sizeof(src)); // Compare n bytes
```

### Common Memory Pitfalls

```c
// ❌ HEAP OVERFLOW — writing past allocated bounds
int *p = malloc(5 * sizeof(int));
p[5] = 99;   // Undefined behavior — buffer overflow!

// ❌ DOUBLE FREE
free(p);
free(p);     // Undefined behavior — heap corruption!

// ❌ DANGLING POINTER
int *dangling = malloc(sizeof(int));
free(dangling);
*dangling = 42;  // UB — accessing freed memory!

// ❌ MEMORY LEAK
void leaky(void) {
    int *lost = malloc(100);
    return;   // Pointer lost — memory never freed!
}

// ✅ CLEAN PATTERN
void clean(void) {
    int *buf = malloc(100 * sizeof(int));
    if (!buf) return;
    // ... use buf ...
    free(buf);
    buf = NULL;
}
```

---

## 📦 ARRAYS & STRINGS

```c
// ── 1D ARRAY ──
int scores[5] = {100, 85, 92, 78, 95};
int n = sizeof(scores) / sizeof(scores[0]);  // Length = 5

// ── 2D ARRAY ──
int matrix[3][3] = {
    {1, 0, 0},
    {0, 1, 0},
    {0, 0, 1}
};

// Access: matrix[row][col]
printf("%d\n", matrix[1][2]);  // 0

// ── STRINGS (null-terminated char arrays) ──
char greeting[32] = "Shadow Protocol";
char *msg         = "Immutable string literal";

// String operations
#include <string.h>
size_t len = strlen(greeting);          // Length (excludes '\0')
strcpy(dst, greeting);                  // Copy (ensure dst is large enough)
strncpy(dst, greeting, sizeof(dst)-1);  // Safe copy with bound
strcat(dst, " v2.0");                   // Concatenate
int cmp = strcmp("abc", "abc");         // 0 if equal
char *found = strstr(greeting, "Proto"); // Find substring

// ── DYNAMIC STRING FORMATTING ──
char buffer[128];
snprintf(buffer, sizeof(buffer), "Player %s scored %d pts", name, score);

// ── VLA — Variable Length Array (C99, stack) ──
int n = get_size();
int vla[n];   // Size determined at runtime
```

---

## 🏗️ STRUCTURES & UNIONS

```c
// ── STRUCT — aggregate of named fields ──
typedef struct {
    char     name[64];
    int      health;
    int      ammo;
    float    x, y, z;   // Position
    uint32_t flags;      // Bitfield status
} Player;

// Initialization
Player p1 = {
    .name   = "Ghost",
    .health = 100,
    .ammo   = 30,
    .x = 0.0f, .y = 1.8f, .z = 0.0f,
    .flags  = 0x00
};

// Access via dot or arrow
p1.health -= 25;
Player *ptr = &p1;
ptr->ammo--;          // Arrow operator for pointer-to-struct

// ── NESTED STRUCT ──
typedef struct {
    float x, y;
} Vec2;

typedef struct {
    Vec2  position;
    Vec2  velocity;
    float mass;
} RigidBody;

// ── UNION — shared memory for multiple types ──
typedef union {
    uint32_t i32;
    float    f32;
    uint8_t  bytes[4];
} DataWord;

DataWord dw;
dw.f32 = 3.14f;
printf("Bits: 0x%08X\n", dw.i32);  // Inspect float bits as hex

// ── BIT FIELDS ──
typedef struct {
    unsigned int active  : 1;   // 1 bit
    unsigned int visible : 1;   // 1 bit
    unsigned int team    : 4;   // 4 bits → values 0-15
    unsigned int level   : 10;  // 10 bits → values 0-1023
} EntityFlags;

// ── ENUM ──
typedef enum {
    STATE_IDLE = 0,
    STATE_RUNNING,
    STATE_ATTACKING,
    STATE_DEAD
} EntityState;
```

---

## 📂 FILE I/O

```c
#include <stdio.h>

// ── TEXT FILE — WRITE ──
FILE *fp = fopen("data.log", "w");  // Modes: r, w, a, r+, w+, a+
if (fp == NULL) {
    perror("fopen failed");         // Prints system error message
    exit(EXIT_FAILURE);
}
fprintf(fp, "Session: %d\n", session_id);
fputs("Systems nominal.\n", fp);
fclose(fp);                         // Always close!

// ── TEXT FILE — READ ──
FILE *in = fopen("data.log", "r");
char line[256];
while (fgets(line, sizeof(line), in) != NULL) {
    printf(">> %s", line);
}
fclose(in);

// ── BINARY FILE ──
Player player_data;
FILE *save = fopen("save.bin", "wb");
fwrite(&player_data, sizeof(Player), 1, save);
fclose(save);

FILE *load = fopen("save.bin", "rb");
fread(&player_data, sizeof(Player), 1, load);
fclose(load);

// ── FILE POSITIONING ──
fseek(fp, 0, SEEK_SET);   // Beginning
fseek(fp, 0, SEEK_END);   // End
long pos = ftell(fp);      // Current position
rewind(fp);                // Reset to start
```

---

## ⚙️ PREPROCESSOR DIRECTIVES

```c
// ── FILE INCLUSION ──
#include <stdio.h>     // System header (search system paths)
#include "mylib.h"     // Local header  (search current directory first)

// ── MACRO CONSTANTS ──
#define PI          3.14159265358979
#define MAX_HEALTH  100
#define GAME_TITLE  "Shadow Protocol"

// ── FUNCTION-LIKE MACROS (use parentheses defensively!) ──
#define MAX(a, b)   ((a) > (b) ? (a) : (b))
#define MIN(a, b)   ((a) < (b) ? (a) : (b))
#define ABS(x)      ((x) < 0 ? -(x) : (x))
#define ARRAY_LEN(a) (sizeof(a) / sizeof((a)[0]))

// ── CONDITIONAL COMPILATION ──
#ifdef DEBUG
    #define LOG(msg) fprintf(stderr, "[DBG] %s:%d — %s\n", __FILE__, __LINE__, msg)
#else
    #define LOG(msg) ((void)0)   // No-op in release builds
#endif

// ── INCLUDE GUARD (prevent double inclusion) ──
#ifndef ENGINE_H
#define ENGINE_H

// ... header content ...

#endif  /* ENGINE_H */

// ── PRAGMA ──
#pragma once          // Modern include guard (non-standard but universal)
#pragma pack(1)       // Disable struct padding
#pragma GCC optimize  ("O3")  // GCC-specific optimization hint

// ── PREDEFINED MACROS ──
printf("File : %s\n",  __FILE__);
printf("Line : %d\n",  __LINE__);
printf("Date : %s\n",  __DATE__);
printf("Time : %s\n",  __TIME__);
printf("Func : %s\n",  __func__);   // C99+
```

---

## 📚 STANDARD LIBRARY HEADERS

| Header | Purpose | Key Functions |
|--------|---------|---------------|
| `<stdio.h>` | I/O operations | `printf`, `scanf`, `fopen`, `fread`, `fwrite` |
| `<stdlib.h>` | General utilities | `malloc`, `free`, `exit`, `atoi`, `rand`, `qsort` |
| `<string.h>` | String/memory ops | `strlen`, `strcpy`, `strcmp`, `memcpy`, `memset` |
| `<math.h>` | Math functions | `sqrt`, `pow`, `sin`, `cos`, `floor`, `ceil` |
| `<stdint.h>` | Fixed-width types | `int8_t`, `uint64_t`, `INT32_MAX` |
| `<stdbool.h>` | Boolean type | `bool`, `true`, `false` |
| `<stdarg.h>` | Variadic args | `va_list`, `va_start`, `va_arg`, `va_end` |
| `<limits.h>` | Type limits | `INT_MAX`, `UINT_MAX`, `CHAR_MIN` |
| `<float.h>` | Float limits | `FLT_MAX`, `DBL_EPSILON` |
| `<errno.h>` | Error codes | `errno`, `ENOMEM`, `EINVAL` |
| `<assert.h>` | Debug assertions | `assert(condition)` |
| `<time.h>` | Time utilities | `time`, `clock`, `difftime`, `strftime` |
| `<signal.h>` | Signal handling | `signal`, `raise`, `SIGINT`, `SIGSEGV` |
| `<setjmp.h>` | Non-local jumps | `setjmp`, `longjmp` |
| `<ctype.h>` | Char classification | `isalpha`, `isdigit`, `toupper`, `tolower` |

---

## 🔬 BITWISE OPERATIONS

```c
// ── BITWISE OPERATORS ──
//  &   AND     |   OR     ^   XOR     ~   NOT     <<  SHL     >>  SHR

uint8_t a = 0b10110100;   // 0xB4
uint8_t b = 0b11001010;   // 0xCA

uint8_t and_r = a & b;    // 0b10000000 → 0x80
uint8_t or_r  = a | b;    // 0b11111110 → 0xFE
uint8_t xor_r = a ^ b;    // 0b01111110 → 0x7E
uint8_t not_r = ~a;       // 0b01001011 → 0x4B

uint8_t shl = a << 2;     // Multiply by 4  (left shift)
uint8_t shr = a >> 1;     // Divide by 2    (right shift)

// ── FLAG MANIPULATION (packed bool fields) ──
#define FLAG_ACTIVE   (1U << 0)   // 0x01
#define FLAG_VISIBLE  (1U << 1)   // 0x02
#define FLAG_INVULN   (1U << 2)   // 0x04
#define FLAG_BOSS     (1U << 7)   // 0x80

uint32_t flags = 0;

flags |=  FLAG_ACTIVE;              // Set bit
flags |=  FLAG_VISIBLE | FLAG_BOSS; // Set multiple
flags &= ~FLAG_INVULN;              // Clear bit
flags ^=  FLAG_VISIBLE;             // Toggle bit
_Bool is_active = !!(flags & FLAG_ACTIVE); // Test bit

// ── BITMASK TRICKS ──
int is_power_of_two = (n > 0) && !(n & (n - 1));
int lsb = n & (-n);                // Isolate lowest set bit
int round_up = (n + 3) & ~3;      // Round up to multiple of 4
int swap_no_tmp = a ^= b ^= a ^= b; // XOR swap (no temp variable)
```

---

## 🧩 STORAGE CLASSES

```c
// auto — default for local variables (stack lifetime)
auto int local = 5;   // Rarely written explicitly

// register — hint to store in CPU register (compiler may ignore)
register int fast_counter = 0;

// static — persists across function calls
void increment_counter(void) {
    static int count = 0;   // Initialized once; retains value
    printf("Call #%d\n", ++count);
}

// static at file scope — internal linkage (file-private)
static int module_state = 0;
static void internal_helper(void) { /* not visible outside TU */ }

// extern — reference to symbol defined in another translation unit
extern int global_config;
extern void engine_init(void);

// __thread / _Thread_local (C11) — thread-local storage
_Thread_local int thread_id = 0;
```

---

## 📐 TYPE QUALIFIERS

```c
// const — value cannot be modified after initialization
const double G = 6.67430e-11;

// volatile — prevents compiler from caching (for hardware registers/ISRs)
volatile uint32_t *MMIO_STATUS = (volatile uint32_t *)0x40020000;
while (!(*MMIO_STATUS & 0x1)) { }  // Polls hardware register

// restrict (C99) — pointer aliasing hint for optimization
void fast_memcopy(int *restrict dst, const int *restrict src, size_t n) {
    for (size_t i = 0; i < n; i++) dst[i] = src[i];
}

// _Atomic (C11) — atomic access for lock-free programming
#include <stdatomic.h>
_Atomic int ref_count = ATOMIC_VAR_INIT(0);
atomic_fetch_add(&ref_count, 1);   // Thread-safe increment
```

---

## 🏎️ COMPILATION PIPELINE

```
┌─────────────┐    ┌────────────┐    ┌───────────┐    ┌──────────┐
│  Source File│ →  │Preprocessor│ →  │  Compiler │ →  │Assembler │
│   main.c    │    │  (cpp)     │    │  (cc1)    │    │  (as)    │
└─────────────┘    └────────────┘    └───────────┘    └──────────┘
                        ↓                  ↓                ↓
                   Expand macros      Translate to      Translate to
                   Include headers    Assembly (.s)     Object code (.o)
                                                             ↓
                                                      ┌──────────────┐
                                                      │    Linker    │
                                                      │   (ld/gcc)   │
                                                      └──────────────┘
                                                             ↓
                                                      Executable binary
```

### GCC / Clang Compilation Commands

```bash
# ── BASIC COMPILATION ──
gcc main.c -o output                  # Compile and link
gcc -c main.c -o main.o               # Compile only → object file
gcc main.o utils.o -o output          # Link object files

# ── STANDARDS ──
gcc -std=c99  main.c -o output        # C99 standard
gcc -std=c11  main.c -o output        # C11 standard
gcc -std=c17  main.c -o output        # C17 standard (latest stable)
gcc -std=c2x  main.c -o output        # C23 (next standard)

# ── WARNING FLAGS (always use in development) ──
gcc -Wall -Wextra -Wpedantic -Werror main.c -o output

# ── OPTIMIZATION LEVELS ──
gcc -O0 main.c -o output    # No optimization (debug)
gcc -O1 main.c -o output    # Basic optimization
gcc -O2 main.c -o output    # Recommended for production
gcc -O3 main.c -o output    # Aggressive (may change behavior)
gcc -Os main.c -o output    # Optimize for size

# ── DEBUG BUILD ──
gcc -g -O0 -fsanitize=address,undefined main.c -o output

# ── INCLUDE PATHS & LIBRARIES ──
gcc main.c -I./include -L./lib -lm -o output
#           ↑ header path  ↑ lib path  ↑ link libm (math)

# ── PREPROCESSOR FLAGS ──
gcc -DDEBUG -DVERSION=2 main.c -o output

# ── GENERATE ASSEMBLY ──
gcc -S -O2 main.c          # Produces main.s
```

---

## 🧪 DEBUGGING & TOOLS

### GDB — GNU Debugger

```bash
gcc -g -O0 main.c -o debug_build   # Compile with debug symbols
gdb ./debug_build                  # Launch GDB

# ── GDB COMMANDS ──
(gdb) run                    # Start execution
(gdb) break main             # Set breakpoint at main()
(gdb) break utils.c:42       # Set breakpoint at line 42 in file
(gdb) next                   # Step over (execute line)
(gdb) step                   # Step into (enter function)
(gdb) finish                 # Run until current function returns
(gdb) continue               # Resume until next breakpoint
(gdb) print variable         # Print variable value
(gdb) x/8xw 0x400...         # Examine 8 words at address (hex)
(gdb) backtrace              # Show call stack
(gdb) info registers         # Show CPU registers
(gdb) watch *ptr             # Break when memory address changes
(gdb) quit                   # Exit GDB
```

### Sanitizers & Static Analysis

```bash
# AddressSanitizer — detects buffer overflows, use-after-free
gcc -fsanitize=address -g main.c && ./a.out

# UndefinedBehaviorSanitizer — detects UB at runtime
gcc -fsanitize=undefined -g main.c && ./a.out

# Valgrind — memory leak detector and profiler
valgrind --leak-check=full --track-origins=yes ./output

# cppcheck — static analysis
cppcheck --enable=all --std=c17 src/

# clang-tidy — linter and static analyzer
clang-tidy main.c -- -std=c17

# scan-build — Clang static analyzer
scan-build gcc main.c -o output
```

---

## 🚀 PERFORMANCE ENGINEERING

```c
// ── CACHE-FRIENDLY ACCESS PATTERNS ──
// Row-major traversal (matches C array layout in memory)
for (int r = 0; r < ROWS; r++)
    for (int c = 0; c < COLS; c++)
        sum += matrix[r][c];   // ✅ Sequential cache lines

// NOT: matrix[c][r] — cache thrashing!

// ── BRANCH PREDICTION HINTS (GCC/Clang) ──
#define LIKELY(x)   __builtin_expect(!!(x), 1)
#define UNLIKELY(x) __builtin_expect(!!(x), 0)

if (LIKELY(ptr != NULL)) {
    process(ptr);   // This branch predicted true
}

// ── ALIGNMENT ──
#include <stdalign.h>
alignas(64) float simd_data[16];   // 64-byte aligned (cache line)

// ── RESTRICT FOR AUTO-VECTORIZATION ──
void vector_add(float *restrict a,
                const float *restrict b,
                const float *restrict c,
                int n) {
    for (int i = 0; i < n; i++)
        a[i] = b[i] + c[i];   // Compiler can auto-vectorize (SIMD)
}

// ── PROFILING WITH CLOCK ──
#include <time.h>
clock_t start = clock();
heavy_computation();
clock_t end = clock();
double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
printf("⏱  Elapsed: %.6f seconds\n", elapsed);
```

---

## 📖 STANDARDS TIMELINE

```
1969 ──── BCPL developed (precursor to B)
1970 ──── B language created at Bell Labs (Ken Thompson)
1972 ──── C created by Dennis Ritchie at Bell Labs ⚡
1978 ──── "K&R C" — The C Programming Language published (1st Ed)
1989 ──── C89 / ANSI C — First official standard (ANSI X3.159-1989)
1990 ──── C90 — ISO adoption of C89 (ISO/IEC 9899:1990)
1994 ──── C94 — Amendment 1: wide chars & digest trigraphs
1995 ──── C95 — Minor update to C90
1999 ──── C99 ★ — Major update: VLAs, _Bool, inline, // comments
           →  Designated initializers, flexible array members
           →  restrict, variadic macros, <stdint.h>, <stdbool.h>
2011 ──── C11 ★ — Threads (_Thread_local), atomics (_Atomic)
           →  Static assertions, anonymous structs/unions
           →  Aligned_alloc, <stdnoreturn.h>
2017 ──── C17 / C18 — Bug-fix release (current stable recommended)
2023 ──── C23 ★ — (Finalized) typeof, nullptr, [[attributes]]
           →  Binary literals (0b101), #embed directive
           →  Enhanced type generics, improved Unicode support
```

---

## 🔗 ECOSYSTEM & TOOLCHAIN

<div align="center">

![GCC](https://img.shields.io/badge/Compiler-GCC-e94560?style=for-the-badge&logo=gnu&logoColor=white&labelColor=0d0d0d)
![Clang](https://img.shields.io/badge/Compiler-Clang%2FLLVM-00fff5?style=for-the-badge&logo=llvm&logoColor=00fff5&labelColor=0d0d0d)
![Make](https://img.shields.io/badge/Build-Make-e94560?style=for-the-badge&labelColor=0d0d0d)
![CMake](https://img.shields.io/badge/Build-CMake-00fff5?style=for-the-badge&logo=cmake&logoColor=00fff5&labelColor=0d0d0d)
![GDB](https://img.shields.io/badge/Debugger-GDB-e94560?style=for-the-badge&labelColor=0d0d0d)
![Valgrind](https://img.shields.io/badge/Profiler-Valgrind-00fff5?style=for-the-badge&labelColor=0d0d0d)
![VS Code](https://img.shields.io/badge/Editor-VS%20Code-e94560?style=for-the-badge&logo=visualstudiocode&logoColor=white&labelColor=0d0d0d)
![Linux](https://img.shields.io/badge/Platform-Linux-00fff5?style=for-the-badge&logo=linux&logoColor=00fff5&labelColor=0d0d0d)

</div>

---

## 📜 ESSENTIAL READING

- 📗 **The C Programming Language** — Kernighan & Ritchie *(the definitive bible)*
- 📘 **C Programming: A Modern Approach** — K.N. King *(best for learning)*
- 📙 **Expert C Programming** — Peter van der Linden *(deep secrets)*
- 📕 **C Interfaces and Implementations** — David R. Hanson *(production patterns)*
- 📓 **Hacking: The Art of Exploitation** — Jon Erickson *(low-level security)*
- 🔗 [cppreference.com/c](https://en.cppreference.com/w/c) — Online reference
- 🔗 [ISO C Standard Draft](https://www.open-std.org/jtc1/sc22/wg14/) — Official spec

---

<div align="center">

```
╔══════════════════════════════════════════════════════════════════╗
║   "Programs must be written for people to read, and only        ║
║    incidentally for machines to execute."                       ║
║                                       — Harold Abelson          ║
╚══════════════════════════════════════════════════════════════════╝
```

<img width="100%" src="https://capsule-render.vercel.app/api?type=waving&color=0:e94560,100:00fff5&height=120&section=footer&text=Keep%20Shipping%20%7C%20Stay%20Low-Level&fontSize=24&fontColor=ffffff&animation=twinkling&fontAlignY=70" />

</div>

---

<div align="center">

**Built with ⚡ for Systems Engineers, Kernel Developers & Low-Level Craftsmen**

![Views](https://komarev.com/ghpvc/?username=c-language-readme&color=00fff5&style=for-the-badge&label=PROFILE+VIEWS&labelColor=0d0d0d)

</div>
