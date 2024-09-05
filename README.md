# OmniStatic

OmniStatic is a command-line tool designed to consolidate multiple static analysis utilities into one place. It's a tool primarily aimed at analyzing executables on Linux, with planned support for PDF and Office document analysis in the future. The goal is to streamline the use of various command-line tools and make static analysis easier for cybersecurity professionals.

## Features
- **Analyze Executables:** Use tools like `strings`, `objdump`, `file`, `readelf`, and more to analyze binary executables.
- **Analyze PDFs:** Utilize tools such as `pdfinfo` and `exiftool` for static PDF analysis.
- **User-Friendly CLI:** Simple, easy-to-navigate command-line interface.
- **Extensible:** Future support for static analysis of Office documents.

**Note**: OmniStatic is still in development and many features are yet to be implemented. As soon as my academic workload eases, I will continue to add new features and improvements. 

## Integrated Tools

OmniStatic integrates the following tools, which are either built into Ubuntu or require minimal installation.

### Executable Analysis Tools:
- **`strings`** – Extract printable strings from binaries. Part of the GNU Binutils package, maintained by the [GNU Project](https://www.gnu.org/software/binutils/).
- **`objdump`** – Display information from object files, also part of the [GNU Binutils](https://www.gnu.org/software/binutils/).
- **`file`** – Determine file type. Created by Ian Darwin, and now maintained by [Christos Zoulas](https://github.com/file/file).
- **`readelf`** – Display ELF file headers. Another tool from the [GNU Binutils](https://www.gnu.org/software/binutils/).
- **`nm`** – List symbols from object files, included in the GNU Binutils package by the [GNU Project](https://www.gnu.org/software/binutils/).
- **`xxd`** – Create a hex dump of a given file or convert a hex dump back to its binary form. Part of the `vim-common` package, maintained by the [Vim Project](https://www.vim.org/).


### PDF Analysis Tools:
- **`pdfinfo`** – Extract metadata and document structure information from PDFs. Part of the [Poppler PDF Utilities](https://poppler.freedesktop.org/).
- **`exiftool`** – Extract, modify, and analyze metadata from PDF files and many other file types. Created and maintained by [Phil Harvey](https://exiftool.org/).

### Prerequisites

- **Executable Tools**: Most tools for executable analysis are typically available on a standard Linux installation. If any tools are missing, follow the on-screen instructions during execution or install them manually.
- **PDF Tools**: Before using the PDF section of OmniStatic, execute the script `dep.sh` located in the `omnistatic/` directory to install the necessary tools.

### Compiling OmniStatic

To compile OmniStatic, use the `compile.sh` script located in `omnistatic/src` directory. This script is configured for the Clang compiler but can be modified to suit your preferred compiler.

1. **Navigate to the `src` Directory**:

   ```bash
   cd yourpath/omnistatic/src
2. **Run script** using 
   ```bash
   bash compile.sh
3. **Run Omnistatic**: now you can run omnistatic with:
   ```bash
   ./omnistatic
### Adding OmniStatic to Your PATH

To use `omnistatic` from any directory, add the directory containing the `yourpath/omnistatic/src` executable to your `PATH` environment variable. Follow these steps:
1. **Edit `.bashrc`** (or `.zshrc` if you use Zsh):

   ```bash
   nano ~/.bashrc
2. *Add* your path: 

    ```bash
    export PATH=$PATH:yourpath/omnistatic/src
3. **Save and Close** If using nano, press CTRL + O to save and CTRL + X to exit.
4. **Reload**
    ```bash
    source ~/.bashrc
5. Now you can run omnistatic from any directory in your terminal using:
    ```bash
    omnistatic