
a[moveRow2][moveCol2] = gamer2;
bool win2 = false;

if (a[0][0] == gamer2 && a[0][1] == gamer2 && a[0][2] == gamer2) win2 = true;
if (a[1][0] == gamer2 && a[1][1] == gamer2 && a[1][2] == gamer2) win2 = true;
if (a[2][0] == gamer2 && a[2][1] == gamer2 && a[2][2] == gamer2) win2 = true;

if (a[0][0] == gamer2 && a[1][0] == gamer2 && a[2][0] == gamer2) win2 = true;
if (a[0][1] == gamer2 && a[1][1] == gamer2 && a[2][1] == gamer2) win2 = true;
if (a[0][2] == gamer2 && a[1][2] == gamer2 && a[2][2] == gamer2) win2 = true;

if (a[0][0] == gamer2 && a[1][1] == gamer2 && a[2][2] == gamer2) win2 = true;
if (a[0][2] == gamer2 && a[1][1] == gamer2 && a[2][0] == gamer2) win2 = true;

if (win2) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Игрок " << gamer2 << " победил!\n";
    return 0;
}
break;
}