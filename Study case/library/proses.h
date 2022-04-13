using namespace std;

class Proses
{
public:
    void ambilData()
    {
        ambil_data.open("../dummy/out_input.txt");
        bool uang_saku = true;
        while (!ambil_data.eof())
        {
            if (uang_saku)
            {
                ambil_data >> uang_saku;
                uang_saku = false;
            }
            else
            {
                ambil_data >> uang_saku;
            }
        }
        ambil_data.close();
        cout << uang_saku << endl;
        cout << pembelanjaan;
    }
    void toFile()
    {
        int bulan = 12;
        int totalUangBln = bulan * uang_saku;
        int totalKeluarUang = bulan * pembelanjaan;
        int jumlah_tabungan = totalUangBln - totalKeluarUang;

        tulis_data.open("../pra_data/proses.txt");
        tulis_data << bulan << endl;
        tulis_data << uang_saku << endl;
        tulis_data << pembelanjaan << endl;
        tulis_data << totalUangBln << endl;
        tulis_data << totalKeluarUang << endl;
        tulis_data << jumlah_tabungan;
        tulis_data.close();
    }

private:
    ifstream ambil_data;
    ofstream tulis_data;
    int uang_saku;
    int pembelanjaan;
};