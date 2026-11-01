for (int turn = 0; turn < n * n; ++turn) {

    while (true) {
        cout << "Ход игрока " << gamer1 << ". Введите строку и столбец (0..2): ";
        cin >> moveRow1 >> moveCol1;

        if (moveRow1 < 0 || moveRow1 >= n || moveCol1 < 0 || moveCol1 >= n) {
            cout << "Координаты вне поля! Вводи от 0 до 2.\n";
            continue;
        }

        if (a[moveRow1][moveCol1] != '-') {
            cout << "Клетка уже занята! Выбери другую.\n";
            continue;
        }

        

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

