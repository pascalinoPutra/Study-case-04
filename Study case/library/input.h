using namespace std;
class Input
{
public:
    void cetak()
    {
        for (int i = 0; i < 76; i++)
        {
            cout << "-";
        }

        cout << "\n|program menampilkan pengeluaran,total pengeluaran dan jumlah uang tabungan|\n";
        for (int i = 0; i < 76; i++)
        {
            cout << "-";
        }
        cout << "\nMasukan jumlah uang jajan/bulan = ";
        cin >> uangJajan;
        cout << "Masukan pengeluaran = ";
        cin >> pengeluaran;
    }

    void toFile()
    {
        input_data.open("../pra_data/input.txt");
        input_data << uangJajan << endl;
        input_data << pengeluaran;
        input_data.close();
    }

private:
    ofstream input_data;
    int uangJajan, pengeluaran;
};