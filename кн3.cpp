
while (true) {
    cout << "Ход игрока " << gamer2 << ". Введите строку и столбец (0..2): ";
    cin >> moveRow2 >> moveCol2;

    if (moveRow2 < 0 || moveRow2 >= n || moveCol2 < 0 || moveCol2 >= n) {
        cout << "Координаты вне поля! Вводи от 0 до 2.\n";
        continue;
    }

    if (a[moveRow2][moveCol2] != '-') {
        cout << "Клетка уже занята! Выбери другую.\n";
        continue;
    }


for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
        cout << a[i][j] << "\t";
    }
    cout << "\n";
}
}
return 0;
}
