a[moveRow1][moveCol1] = gamer1;
bool win1 = false;

if (a[0][0] == gamer1 && a[0][1] == gamer1 && a[0][2] == gamer1) win1 = true;
if (a[1][0] == gamer1 && a[1][1] == gamer1 && a[1][2] == gamer1) win1 = true;
if (a[2][0] == gamer1 && a[2][1] == gamer1 && a[2][2] == gamer1) win1 = true;

if (a[0][0] == gamer1 && a[1][0] == gamer1 && a[2][0] == gamer1) win1 = true;
if (a[0][1] == gamer1 && a[1][1] == gamer1 && a[2][1] == gamer1) win1 = true;
if (a[0][2] == gamer1 && a[1][2] == gamer1 && a[2][2] == gamer1) win1 = true;

if (a[0][0] == gamer1 && a[1][1] == gamer1 && a[2][2] == gamer1) win1 = true;
if (a[0][2] == gamer1 && a[1][1] == gamer1 && a[2][0] == gamer1) win1 = true;

if (win1) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "Игрок " << gamer1 << " победил!\n";
    return 0;
}
break;
    }
