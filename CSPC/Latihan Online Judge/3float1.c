#include <math.h>
#include <stdio.h>

int main() {
    // Variabels.
    float a, b, c, d, e, f;         // Sebuah angka berupa float.
    int aa, ab, ac, ad, ae, af;     // Angka depan float.
    double ba, bb, bc, bd, be, bf;  // Angka belakang float.
    int ca, cb, cc, cd, ce, cf;     // Angka sementara belakang (integer).

    // INPUT (masukkan)
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    /*      Bilangan Float      */
    aa = a;              // Angka depan float a
    ba = (a - aa) * 10;  // Angka belakang float a
    ca = ba;             // menyimpan angka belakang a (integer)

    ab = b;              // Angka depan float b
    bb = (b - ab) * 10;  // Angka belakang float b
    cb = bb;             // menyimpan angka belakang b (integer)

    ac = c;              // Angka depan float c
    bc = (c - ac) * 10;  // Angka belakang float c
    cc = bc;             // menyimpan angka belakang c (integer)

    ad = d;              // Angka depan float d
    bd = (d - ad) * 10;  // Angka belakang float d
    cd = bd;             // menyimpan angka belakang d (integer)

    ae = e;              // Angka depan float e
    be = (e - ae) * 10;  // Angka belakang float e
    ce = be;             // menyimpan angka belakang e (integer)

    af = f;              // Angka depan float f
    bf = (f - af) * 10;  // Angka belakang float f
    cf = bf;             // menyimpan angka belakang f (integer)

    int kelipatan = 0;
    /*      Kondisi (IF)      */
    if (ca % 3 == 0)  // Kondisi bilangan belakang (integer) a
    {
        kelipatan++;
    }
    if (cb % 3 == 0)  // Kondisi bilangan belakang (integer) b
    {
        kelipatan++;
    }
    if (cc % 3 == 0)  // Kondisi bilangan belakang (integer) c
    {
        kelipatan++;
    }
    if (cd % 3 == 0)  // Kondisi bilangan belakang (integer) d
    {
        kelipatan++;
    }
    if (ce % 3 == 0)  // Kondisi bilangan belakang (integer) e
    {
        kelipatan++;
    }
    if (cf % 3 == 0)  // Kondisi bilangan belakang (integer) f
    {
        kelipatan++;
    }

    // OUTPUT
    if (kelipatan > 2) {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }

    return 0;
}