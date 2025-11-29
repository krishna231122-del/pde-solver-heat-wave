#include <pybind11/pybind11.h>

int add(int a, int b) {
    return a + b;
}

PYBIND11_MODULE(pdemodule, m) {
    m.doc() = "PDE Solver Module";
    m.def("add", &add, "A simple add function");
}

