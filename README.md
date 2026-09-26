# Lab 5 · Eligibility check

**Week 05 · Conditionals**  
**Theme:** The program chooses  
**Type:** Lesson week


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

In the video: run the four combinations (20 / 3.8, 20 / 3.0, 16 / 3.8, 16 / 3.0), then the edge values 17 and 18, and 3.4 and 3.5. Say which branch will fire before you press Enter.

**Your demo:** https://drive.google.com/file/d/1--csSXtIlpwsRBrkDiQH72mpc1CFekNW/view?usp=sharing


## Scenario
Every program so far ran the same lines every time. This one reads two answers and picks a path. Ask for an age and a GPA, name two `bool` answers, and print one of three messages depending on which requirements are met. Then prove the thresholds by running the edge values.

## Goals
- Two inputs into typed boxes, prompt before each `cin`
- Two named `bool` variables built from comparison operators
- A three-branch chain: `if (a && b)`, `else if (a || b)`, `else`
- Braces on every branch, a message in every branch
- Edge values run on camera: 17 and 18, 3.4 and 3.5

## Starter
Use `main.cpp`. Put your name in the file-top comment. Write your two thresholds in a comment above the chain.

## Environment
VSCode · **g++** · home PC

## Procedure
1. Declare `int age = 0;` and `double gpa = 0.0;`
2. `cout` a question, then `cin` into the box — twice
3. `bool adult = age >= 18;` and `bool honors = gpa >= 3.5;` (or your own thresholds, written in a comment)
4. `if (adult && honors) { ... }` — the best case first
5. `else if (adult || honors) { ... }` — exactly one requirement met
6. `else { ... }` — neither. The program always answers
7. Run 20 / 3.8, 20 / 3.0, 16 / 3.8, 16 / 3.0. Say which branch before you press Enter
8. Run the edges: 17 then 18 with a 3.8; 3.4 then 3.5 with age 20
9. Commit, push, short demo, Canvas

## Sample output
```
Age? 20
GPA? 3.8
Eligible for the honors program.
```

A second run:
```
Age? 16
GPA? 3.8
Halfway there. One requirement met.
```

A third run:
```
Age? 16
GPA? 3.0
Not eligible yet.
```

## Definition of done
- Compiles with zero errors
- Two named bools, one `&&`, one `||`, three branches with braces
- Four combinations plus the four edge values run (show at least three in the demo)
- Repo + short demo + Canvas

## Rubric (100)
| Criterion | Pts |
|-----------|----:|
| Runs correctly on a supported path | 40 |
| Meets prompt requirements | 30 |
| Clear outcome messages | 15 |
| GitHub + short demo video | 15 |

## Scope fence
No loops, no functions, no `switch`. No `if` nested inside an `if` — the chain does it. Braces on every branch is a requirement, not a style.

## Tips
- `=` stores. `==` compares. Read `==` aloud as "is equal to"
- Highest bar first. If the `||` branch comes before the `&&` branch, the best case never prints
- A named `bool` makes the chain read like a sentence. Prefer it over a long test inside the parentheses
- If a branch never fires, print the two bools (`cout << adult << honors`) and look at the 1s and 0s

## Help (`/ring`)
After a real try, include: goal · what you tried · exact error · screenshot/repo · OS + tool.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, the four combinations, and the edge values.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
