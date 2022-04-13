using namespace std;

class Output
{
public:
    void cetak()
    {
        for (int i = 0; i < 10; i++)
        {
            cout << "=";
        }
        cout << " hasil perhitungan Program ..... ";
        for (int i = 0; i < 10; i++)
        {
            cout << "=";
        }
        cout << "\nbanyak bulan = " << data_file[0] << endl;
        cout << "uang jajan/bulan =" << data_file[1] << endl;
        cout << "total jajan = " << data_file[2] << endl;
        cout << "total pengeluaran = " << data_file[3] << endl;
        cout << "jumlah uang yang dapat ditabung = " << data_file[4];
    }
    void getData()
    {
        ambil_data.open("../dummy/out_proses.txt");
        while (!ambil_data.eof())
        {
            ambil_data >> data_file[index];
            index += 1;
        }
        ambil_data.close();
    }

private:
    ifstream ambil_data;
    string data_file[30];
    int index = 0;
};
