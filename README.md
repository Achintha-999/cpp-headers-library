# cpp-headers-library

[![GitHub](https://img.shields.io/badge/GitHub-Repo-blue?logo=github)](https://github.com/Achintha-999/cpp-headers-library)

## Overview

**cpp-headers-library** is a collection of reusable C++ header files designed to simplify and accelerate C++ development. The library is compatible with C++14 and later standards, providing lightweight, modular headers for common tasks such as logging, utilities, and foundational components.

## Features

- **Header-only:** No need for separate compilation or linking.
- **C++14 Compatible:** Designed to work seamlessly with C++14 and newer.
- **Reusable Components:** Easily integrate into your projects.
- **Modular Design:** Use only the headers you need.

## Included Headers

### Log.h

A simple logging interface for initializing and writing log messages.

#pragma once
void InitLog(); void Log(const char* message);

- `InitLog()`: Initializes the logging system.
- `Log(const char* message)`: Logs a message.

## Getting Started

1. **Clone the repository:**
   git clone https://github.com/Achintha-999/cpp-headers-library.git

2. **Add the desired header(s) to your project.**

3. **Include the header in your source file:**
#include "Log.h"

4. **Use the provided functions:**
   InitLog(); Log("Hello, world!");

   
## Contributing

Contributions are welcome! Please open issues or submit pull requests for new headers, improvements, or bug fixes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---
**Repository:** [cpp-headers-library](https://github.com/Achintha-999/cpp-headers-library)
   
