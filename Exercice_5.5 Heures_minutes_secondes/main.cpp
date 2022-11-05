#include <iostream>
using namespace std;

#include "Functions/Headers/Sec2hour.h"
#include "Functions/Headers/Sec2min.h"
#include "Functions/Headers/Sec2j_sec.h"

int main() {
    int s, m, h;

    cout << "Entrez un nombre de secondes : " << endl;
    cin >> s;

    h = sec_h(s);
    m = sec_min(s);
    s = sec_jsec(s);

    cout << h << "h " << m << "min " << s << "secondes" << endl;

    return 0;
}
