# Procedural Art Graphics Engine: "LORD" (C to Python Migration)

A mathematical graphics engine that generates complex procedural art pixel-by-pixel. This project highlights a timeline evolution from legacy **Turbo C++ BGI graphics** (written in 2020) to a modern, high-performance **Python/OpenCV** implementation (migrated in 2026 for cross-platform convenience and execution efficiency).

The engine uses implicit mathematical functions, shape-layered boundaries, and sequential rendering logic trees to paint high-fidelity character geometry directly onto a pixel buffer canvas.

## 🚀 Live Interactive Demo

Run, experiment with, and test the modern rendering pipeline directly in your browser:
👉 **[Open in Google Colab](https://colab.research.google.com/drive/1SedmtNOENEFtVsBCy9qg4vzRCygxQl0j#scrollTo=uj3-3EDn4xn5)**

---

## ⏳ Version Breakdown & Hardware Evolution

### 1. The Legacy C Version (Written in 2020)
* **The Hardware:** Developed entirely on a retro **Intel Pentium Dual-Core machine with just 2 GB of RAM**.
* **Environment:** Built inside **Turbo C++ 3.0** running under DOSBox emulation to access the antiquated Borland Graphics Interface (`graphics.h`).
* **Execution Model:** Relies on nested CPU `for` loops that iterate over every pixel coordinate $(i, j)$ sequentially across a restricted $650 \times 452$ viewport. 
* **Pixel Manipulation:** Directly interfaces with legacy video memory blocks using the classic `putpixel()` routine. Every mathematical calculation (`pow`, `abs`) had to be incredibly lean to run smoothly on constrained local hardware.

### 2. The Modern Python Version (Migrated in 2026)
* **The Hardware:** Runs on a **Google Colab cloud infrastructure**, instantly leveraging high-end remote server chips and high-capacity RAM straight from a web browser.
* **Motivation:** Migrated in 2026 to eliminate the hassle of legacy emulation, making it easy for anyone to run, modify, and study the core mathematical geometry without specialized hardware setups.
* **Execution Model:** Preserves the literal logic-tree format of the original 2020 C software using explicit loop-style code syntax. 
* **Just-In-Time Acceleration:** Uses **Numba** (`@njit`) compilation to bypass typical Python interpreter loop bottlenecks. This translates nested Python pixel operations directly into raw machine code at runtime, mirroring the execution speed of bare-metal C.
* **Image Buffer Handling:** Powered by **NumPy matrices** and **OpenCV (`cv2`)** for modern, accelerated canvas management, rendering outputs using alpha-sampled anti-aliasing vectors (`cv2.LINE_AA`).

---

## 📊 Core Architecture Comparison

| Attribute | C Implementation (2020) | Python Implementation (2026) |
| :--- | :--- | :--- |
| **Development Environment** | Local Pentium Dual-Core (2 GB RAM) | Cloud-hosted Google Colab Environment |
| **Graphics Library** | `graphics.h` (Turbo C BGI) | `opencv-python` (`cv2`) |
| **Loop Speed** | Fast (Native Compiled) | Blazing Fast (Numba JIT Machine Compiled) |
| **Portability** | Requires DOSBox / Emulation | Fully Cross-Platform (Zero-Setup Cloud/Local) |
| **Memory Layout** | Display Memory Addressing | 3-Channel NumPy Array Matrix `[Rows, Cols, BGR]` |

---

## 📁 Installation & Setup

### Running the Python Version (Local Environment)
Ensure you have the required computer vision, array management, and JIT compilation libraries installed:

```bash
pip install numpy opencv-python numba
