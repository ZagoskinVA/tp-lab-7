// Copyright 2021 Vlad
#include "Ocean.h"
#include "Object.h"
#include "Stone.h"
#include "Prey.h"
int main() {
    Ocean* oc = new Ocean(1, 100, 10, 3, 10);
    oc->run();
}