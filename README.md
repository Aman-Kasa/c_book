# C Programming Book - Learning Journey

A comprehensive collection of C programming exercises and examples, organized by chapters as I progress through my C programming studies.

## 📚 Repository Structure

```
c-book/
├── 2nd-chap/          # Chapter 2: C Fundamentals
├── 3rd-chap/          # Chapter 3: Formatted Input/Output
└── README.md
```

## 📖 Chapter 2: C Fundamentals

This chapter covers basic C programming concepts including variables, arithmetic operations, and user input.

### Core Examples

- **[pun.c](2nd-chap/pun.c)** - Basic "Hello World" style program with formatted output
- **[volume.c](2nd-chap/volume.c)** - Simple volume calculation using variables
- **[dimensional_weight.c](2nd-chap/dimensional_weight.c)** - Calculates dimensional weight for shipping
- **[user_dimensional_weight.c](2nd-chap/user_dimensional_weight.c)** - Interactive version with user input

### Programming Exercises

1. **[1stquestion.c](2nd-chap/prog_exercises/1stquestion.c)** - ASCII art pattern using `printf`
2. **[2ndquestion.c](2nd-chap/prog_exercises/2ndquestion.c)** - Calculate sphere volume (with bug - integer division issue)
3. **[3rdquestion.c](2nd-chap/prog_exercises/3rdquestion.c)** - Interactive sphere volume calculator (corrected version)
4. **[4thquestion.c](2nd-chap/prog_exercises/4thquestion.c)** - Tax calculation (5% tax adder)
5. **[5thquestion.c](2nd-chap/prog_exercises/5thquestion.c)** - Polynomial evaluation: `3x⁵ + 2x⁴ - 5x³ - 2x² + 7x - 6`
6. **[6th-question.c](2nd-chap/prog_exercises/6th-question.c)** - Horner's method for polynomial evaluation (optimized)
7. **[7th-question.c](2nd-chap/prog_exercises/7th-question.c)** - Dollar bill denominator (breaks amount into $20, $10, $5, $1 bills)
8. **[8th-question.c](2nd-chap/prog_exercises/8th-question.c)** - Loan balance calculator with interest rates

**Key Concepts Learned:**
- Variable declarations and initialization
- Arithmetic operations and operator precedence
- `scanf()` for user input
- `printf()` for formatted output
- Integer vs floating-point arithmetic
- Modulo operator for remainder calculations

## 📖 Chapter 3: Formatted Input/Output

This chapter focuses on format specifiers, precision control, and proper output formatting.

### Core Examples

- **[format.c](3rd-chap/format.c)** - Demonstrates various format specifiers (`%d`, `%f`)
- **[wrong.c](3rd-chap/wrong.c)** - Example of format specifier mismatches (debugging example)

### Programming Exercises

1. **[1q.c](3rd-chap/exercises/1q.c)** - Format specifier practice with width, precision, and alignment

**Key Concepts Learned:**
- Format specifiers: `%d`, `%f`, `%e`, `%g`
- Width and precision control: `%6d`, `%.2f`, `%12.5e`
- Left alignment with `-` flag: `%-6.2g`
- Scientific notation formatting

## 🔧 Compilation

All programs can be compiled using GCC:

```bash
gcc filename.c -o outputname
./outputname
```

Example:
```bash
gcc 2nd-chap/prog_exercises/8th-question.c -o loan_calculator
./loan_calculator
```

## 🎯 Learning Highlights

- **Chapter 2**: Mastered basic I/O, arithmetic operations, and learned the importance of proper data types (especially the difference between integer and floating-point division)
- **Chapter 3**: Understanding format specifiers and output formatting for clean, professional-looking console output

## 📝 Notes

- Some early exercises contain intentional bugs or suboptimal solutions that were later corrected in subsequent exercises
- The progression shows learning from mistakes (e.g., [2ndquestion.c](2nd-chap/prog_exercises/2ndquestion.c) vs [3rdquestion.c](2nd-chap/prog_exercises/3rdquestion.c))

## 🚀 Progress

- [x] Chapter 2: C Fundamentals
- [ ] Chapter 3: Formatted Input/Output (In Progress)
- [ ] Additional chapters to come...

---

*This repository documents my journey learning C programming. Each program represents a step forward in understanding fundamental programming concepts.*
