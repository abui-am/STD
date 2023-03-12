#include <iostream>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    int student_count = 0;
    float total = 0, max_mark = 0, min_mark = 0, mark = 0;

    while (mark != -1) {
        cin >> mark;
        if (mark >= 0) {
            total+=mark;
            if (mark > max_mark) {
                max_mark = mark;
            }
            if (mark < min_mark) {
                min_mark = mark;
            }
            student_count++;
        }
    }

    cout << "Banyak nilai : " << student_count << endl;
    cout << "Nilai rata-rata : " << setprecision(2) << fixed << total / student_count << endl;
    cout << "Nilai maksimum: " << max_mark << endl;
    cout << "Nilai minimum: " << min_mark << endl;
    return 0;
}
