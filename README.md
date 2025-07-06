# 🧪 orgChartTestGen – Unit Test Generator for C++ Apps using LLMs

This project is part of **Day 5 Assignment** to build a **Unit Test Generator Tool** for C++ applications using Large Language Models (LLMs) like Ollama, GitHub-hosted models, etc.

It automatically generates unit tests from C++ source files, improves them iteratively using YAML-based prompts, handles build errors, and calculates test coverage using GNU tools.

---

## 🔧 How It Works

This tool follows a multi-stage process, guided by YAML prompts and LLMs:

### ⚙️ Architecture Overview

![Architecture Diagram](./prompts/architecture.png)

### Breakdown:

1. **Initial Generation**:
   - Input: `main.cpp` or any logic `.cpp` file
   - LLM receives: test_main.cpp + `generate_tests.yaml`
   - Output: Initial test cases

2. **Test Refinement**:
   - Input: LLM receives previous tests + `refine_tests.yaml`
   - Output: Clean, formatted, non-duplicate tests

3. **Build & Fix Loop**:
   - Run tests via CMake + GoogleTest
   - If errors → send build logs + code to LLM with fix prompt
   - If success → use `gcovr` to calculate coverage

4. **Final Output**:
   - Refined, complete unit test files
   - `coverage.html` for test analysis

---

## 📁 Folder Structure

