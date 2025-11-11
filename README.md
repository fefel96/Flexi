# C++ Version Control & Game Engine Exercises

## Exercise 1

### What is the difference between Git and GitHub?

**Git** is a version control system to control and manage source code and changes locally.  
**GitHub** is an online cloud service to store Git repositories and allows developers to share and manage code.

### Name 3 benefits of a version control system:

1. Changes can be saved (committed) and reverted if necessary. Every contributor has insights on who has changed what and when. *(Traceability/History)*  
2. Multiple people can work on the same project at the same time without disturbing each other. Conflicts will be recognized and can be solved individually. *(Collaboration/Teamwork)*  
3. In case of bugs or deletions, it’s possible to switch to a previous version. You don’t lose the whole project. *(Safety)*

### Name 3 alternatives to Git:

- **SVN**: A centralized version control system. Contributors work against a central repository.  
- **Mercurial**: A distributed version control system similar to Git.  
- **Perforce (Helix Core)**: A commercial version control system for large-scale game development environments.

### Name 2 differences between Git and other version control systems:

1. Git is a distributed version control system where every developer has the full copy of the repository (including history) locally. Other systems like SVN are centralized and do not include the full history.  
2. Git allows local changes (commits, branches, merges) without an internet connection. Changes can be pushed later to a remote server. SVN requires an internet connection for every commit.

### Name known issues related to game engines (Unreal, Unity) and version control systems:

- Game asset files are often very large and take up a lot of storage space.  
- Git is primarily optimized for text-based files, while binary files (images, models, audio) cannot be merged. Team members must coordinate who works on specific assets to avoid conflicts.  
- Game engines automatically generate many files that should not be committed. Including them increases the risk of merge conflicts.

---

## Exercise 2

### Describe a logging system in your own words:

A logging system records information about a program’s state, events, and errors while it’s running. It is used to support debugging, monitoring, and analyzing the behavior and performance of the program.

### What is the difference between Git submodules and Git subtrees?

- **Git Submodule**: A separate Git repository linked inside another repository. The main repository stores only a reference to the submodule’s commit. Changes to the submodule must be committed and pushed independently.  
- **Git Subtree**: Fully integrates an external repository into the main repository. All files are included directly, and changes can be committed as part of the main repository without separate synchronization.

### What is a build system in C++? Name 3 build systems:

A build system automates the compilation process of a C++ project. It compiles source code, links required libraries, manages dependencies, and supports platform-independent builds. Without a build system, developers would need to manually write and execute each compilation command.

- **CMake**: Platform-independent, generates makefiles or project files.  
- **GNU Make**: The Unix/Linux build system.  
- **Premake**: Also generates project files, using Lua scripts.

### What is a package manager in C++? Name 3 package managers:

A package manager automates the process of installing and configuring external libraries and dependencies. Without it, developers must manually download, compile, and link libraries.

- **vcpkg**: Cross-platform package manager (Microsoft).  
- **Conan**: Cross-platform package manager for large and complex projects.  
- **Hunter**: CMake-driven package manager.
