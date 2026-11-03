# Operating Systems Lab

## About the Repository

This repository contains the practical experiments performed as part of the **Operating Systems Laboratory** course. The experiments focus on understanding fundamental Linux operating system concepts through hands-on implementation using Bash Shell Scripting, C Programming, and Linux command-line utilities.

The primary objective of this laboratory course is to gain practical knowledge of how an operating system manages files, directories, processes, memory, CPU resources, and system-level operations.

Each experiment demonstrates a specific operating system concept and provides practical experience working in a Linux environment.

---

## Technologies and Tools Used

- **Operating System:** Linux
- **Programming Languages:** C, Bash Shell Scripting
- **Text Editors:** Vi / Vim, Nano
- **System Utilities:** `date`, `who`, `sed`, `grep`, `time`, `free`, `top`, `pmap`, `ps`
- **Development Tools:** GCC Compiler, Linux Terminal
- **Version Control:** Git and GitHub

---

## List of Experiments

### Experiment 1: Basic Linux Commands and Shell Operations

**Objective:**  
To understand and practice fundamental Linux commands and shell operations.

**Topics Covered:**
- Basic Bash commands.
- Input and output redirection.
- Pipes and command chaining.
- File and directory creation, deletion, and management.
- Searching files and directories.
- Process management.
- Editing files using Vi/Vim and Nano editors.

**Outcome:**  
Gained familiarity with the Linux command-line environment and learned how to perform essential file management, searching, redirection, and process-related operations.

### Experiment 2: Linux Commands and Stream Editing Using Sed

**Objective:**  
To understand command execution, output redirection, and text processing using the `sed` utility.

**Tasks Performed:**

1. Used the `date` and `who` commands in a single line, displaying the date on the terminal while redirecting the logged-in user information to a file.
2. Implemented a `sed` command to swap the first and second words in every line of a file.

**Outcome:**  
Understood standard output redirection and gained practical experience in text manipulation using stream editing commands.

### Experiment 3: Shell Scripting for File and Directory Operations

**Objective:**  
To develop shell scripts that accept command-line arguments and perform file-related operations.

**Tasks Performed:**

1. Created a shell script to identify whether the given command-line argument represents a file or a directory.
2. Developed a shell script to convert the names of multiple files supplied as arguments into uppercase.

**Outcome:**  
Learned how to accept command-line arguments, implement conditional statements, and perform file operations using Bash scripts.

### Experiment 4: User Activity and File Manipulation Using Shell Scripts

**Objective:**  
To implement shell scripts for monitoring user activity and manipulating file contents.

**Tasks Performed:**

1. Developed a script to determine how long a specified user has been logged into the system.
2. Created a script to display lines between specified starting and ending line numbers.
3. Implemented a script to delete all lines containing a specified word from one or more input files.

**Outcome:**  
Understood user session monitoring, positional parameters, loops, text processing, and file manipulation using shell scripting.

### Experiment 5: String Operations Using Shell Script and C

**Objective:**  
To perform basic string operations using both Bash Shell Scripting and C programming and compare their execution times.

**Tasks Performed:**

1. Extracted a substring from a given string.
2. Calculated the length of a given string.
3. Implemented the same operations using both Bash and C.
4. Compared execution times using the Linux `time` command.

**Outcome:**  
Understood string manipulation in two different programming environments and observed differences in execution time and computational overhead between shell scripts and compiled C programs.

### Experiment 6: Memory Allocation and Monitoring in C

**Objective:**  
To understand dynamic memory allocation and observe memory consumption during program execution.

**Implementation:**

- Developed a C program that accepts the required memory size in megabytes as a command-line argument.
- Allocated the specified amount of memory dynamically.
- Accessed the allocated memory to make its physical memory usage observable.
- Monitored system memory consumption using the `free` command.

**Outcome:**  
Gained practical knowledge of dynamic memory allocation, memory consumption, and Linux memory monitoring utilities.

### Experiment 7: CPU-Bound and I/O-Bound Processes

**Objective:**  
To understand the difference between CPU-bound and I/O-bound processes and observe their resource utilization.

**Tasks Performed:**

1. Developed a CPU-bound C program that performs continuous computational operations.
2. Developed an I/O-bound C program that performs repeated input/output operations.
3. Executed both programs and monitored their resource utilization using the `top` command and its variants.

**Outcome:**  
Understood the difference between CPU-intensive and I/O-intensive workloads and observed how Linux schedules processes and distributes CPU resources.

### Experiment 8: Process Memory Mapping Using Pmap

**Objective:**  
To examine the memory layout of processes using the Linux `pmap` command.

**Implementation:**

- Executed the CPU-bound and I/O-bound programs developed in Experiment 7.
- Identified their Process IDs (PIDs).
- Used the `pmap` command to inspect their virtual memory mappings.
- Observed memory regions and the overall virtual memory size of each process.

**Outcome:**  
Developed an understanding of process memory maps, virtual address spaces, and memory allocation at the process level.

### Experiment 9: Process Creation and Parent-Child Relationship

**Objective:**  
To understand process creation and synchronization using system calls in C.

**Implementation:**

- Developed a C program using the `fork()` system call to create a child process.
- Used the `wait()` system call to make the parent process wait for the child to terminate.
- Displayed the Process ID (PID) of the child process.

**Outcome:**  
Understood process creation, parent-child relationships, process synchronization, and termination handling using Linux system calls.

### Experiment 10: Process Address Space and Memory Isolation

**Objective:**  
To understand process memory isolation and virtual address spaces by observing variable addresses across multiple processes.

**Implementation:**

- Developed a C program that prints the memory address of a variable.
- Introduced an infinite loop to keep the process running.
- Executed three to four instances of the same program simultaneously.
- Compared the printed memory addresses across different processes.

**Outcome:**  
Observed that different processes can display the same virtual memory address for corresponding variables while maintaining separate virtual address spaces. This demonstrates the concept of process memory isolation.

---

## Overall Learning Outcomes

After completing these laboratory experiments, the following concepts and practical skills were developed:

1. **Linux Fundamentals:** Gained hands-on experience with Linux commands, file management, directory operations, pipes, and input/output redirection.

2. **Shell Programming:** Learned to develop Bash scripts using command-line arguments, conditional statements, loops, and text-processing utilities.

3. **File Handling:** Understood file manipulation, searching, editing, and processing using Linux commands and shell scripts.

4. **Process Management:** Learned how processes are created, executed, monitored, synchronized, and terminated using Linux commands and C system calls.

5. **Memory Management:** Understood dynamic memory allocation, virtual memory, process memory maps, and memory isolation.

6. **CPU Scheduling and Resource Utilization:** Observed CPU-bound and I/O-bound processes and analyzed their resource consumption using system monitoring tools.

7. **Performance Analysis:** Compared the execution time of shell scripts and C programs using the `time` command.

8. **System-Level Programming:** Gained practical experience with important Linux system calls such as `fork()` and `wait()`.

---

## Final Outcome of the Laboratory Course

The Operating Systems Laboratory provided practical exposure to the internal working of a Linux-based operating system.

Through these ten experiments, the theoretical concepts of operating systems were implemented and observed using Bash Shell Scripting, C Programming, and Linux system utilities.

The course helped develop a practical understanding of process management, memory management, CPU utilization, file systems, shell programming, and process synchronization.

**Overall, the laboratory strengthened programming skills, Linux command-line proficiency, system-level problem-solving abilities, and the ability to analyze how an operating system manages computer resources.**

---

## Repository Structure

The repository is organized experiment-wise for easy navigation.

```text
Operating-Systems-Lab/
│
├── Experiment-1/
├── Experiment-2/
├── Experiment-3/
├── Experiment-4/
├── Experiment-5/
├── Experiment-6/
├── Experiment-7/
├── Experiment-8/
├── Experiment-9/
├── Experiment-10/
│
└── README.md
```

*Note: The directory structure above is a suggested organization. Folder names can be adjusted according to the actual repository.*

---

## How to Compile and Execute C Programs

Compile a C program using GCC:

```bash
gcc program.c -o program
```

Execute:

```bash
./program
```

For shell scripts:

```bash
chmod +x script.sh
./script.sh
```

---

## Author

**Bumesh Koul**

Operating Systems Laboratory

---

*This repository is maintained for academic learning, practical implementation, and future reference.*
