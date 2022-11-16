            A
      A     B     C
A     B     C     D     E
      A     B     C
            A

- Upper triangle: 
  - 1st line -> 1 element
  - 2nd line -> 3 element
  - 3rd line -> 5 element
  -> For ith line, there are [2(i) + 1] elements

- Spaces are there before printing the character
  - 1st line -> 2 spaces
  - 2nd line -> 1 spaces
  - 3rd line -> 0 spaces
  -> Spaces to be printed = (3 - line_no)

- Lower triangle:
  - 4th line -> 1 spaces
  - 5th line -> 2 spaces
  - Here the value of n(no. to which the pattern should be fully printed) is 3
  - Conclusion: There is (n - 3) no. of spaces
    - (4 - 3) -> 1 space
    - (5 - 3) -> 2 spaces