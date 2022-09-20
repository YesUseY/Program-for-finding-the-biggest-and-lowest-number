#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("data.txt");
    int a; //Mokiniu skaicius
    fin >> a;
    int p=0, b=0, z=0, r=0, k=0, v=0;
    int sp=0, sb=0, sz=0, sr=0, sk=0, sv=0;
    int maz = 1000;
    for (int i=0; i<a; i++) {
        fin >> p >> b >> z >> r >> k >> v;
        sp = sp + p;
        sb = sb + b;
        sz = sz + z;
        sr = sr + r;
        sk = sk + k;
        sv = sv + v;
    }
    sp = sp/8;
    sb = sb/2;
    sz = sz/2;
    sr = sr/2;

    if (sp<maz) {
        maz = sp;
    }
     if (sb<maz) {
        maz = sb;
    }
     if (sz<maz) {
        maz = sz;
    }
     if (sr<maz) {
        maz = sr;
    }
     if (sk<maz) {
        maz = sk;
    }
      if (sv<maz) {
        maz = sv;
    }
    cout << maz;
    //cout << sp << " " << sb << " " << sz << " " << sr << " " << sk << " " << sv;
    return 0;
}
