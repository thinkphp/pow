# Modular Exponentiation Algorithm

base^exp Power in O ln N time.

Here's a `README.md` file for the provided algorithm:

```markdown
# Modular Exponentiation Algorithm

This project implements a modular exponentiation algorithm using Python, which efficiently calculates \( \text{base}^\text{exp} \mod \text{const} \). The algorithm is used to solve a specific problem where the input values are read from a file, and the result is written to another file.

## How It Works

1. **Constant Function**:  
   The function `const()` returns a large prime number \( 1999999973 \) used as the modulus.

2. **Modular Exponentiation**:  
   The function `pow(base, exp)` calculates \( \text{base}^\text{exp} \mod \text{const} \) using the method of exponentiation by squaring, which is efficient for large exponents.

3. **Input and Output**:  
   - Reads two integers (base and exponent) from the input file `lgput.in`.
   - Writes the result of the modular exponentiation to the output file `lgput.out`.

## Functions

### `def const():`
Returns the constant value \( 1999999973 \), which is a large prime number used as the modulus.

### `def pow(base, exp):`
Performs modular exponentiation:
- Parameters:
  - `base`: The base of the exponentiation.
  - `exp`: The exponent.
- Returns:
  - Result of \( \text{base}^\text{exp} \mod \text{const} \).

### `def solve():`
Main function that:
1. Opens the input file `lgput.in` to read the base and exponent values.
2. Computes the modular exponentiation using `pow()`.
3. Writes the result to the output file `lgput.out`.

## Input Format

The input file `lgput.in` should contain a single line with two integers separated by a space:
```
<base> <exponent>
```

Example:
```
3 5
```

## Output Format

The output file `lgput.out` will contain the result of \( \text{base}^\text{exp} \mod \text{const} \) as a single integer.

Example:
```
243
```

## Usage

1. Create an input file `lgput.in` in the same directory as the script and add the base and exponent values.
2. Run the script.
3. Check the output in the file `lgput.out`.

## Example

### Input (`lgput.in`):
```
2 10
```

### Output (`lgput.out`):
```
1024
```

## Notes

- This implementation uses file-based input and output for compatibility with competitive programming platforms.
- The modulus \( 1999999973 \) ensures results are within the range of a 32-bit signed integer.

## License

MIT

### Examples:

https://ideone.com/zyRzD1 in Python
