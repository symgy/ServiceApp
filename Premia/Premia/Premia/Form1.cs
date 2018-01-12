using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using iTextSharp.text;
using iTextSharp.text.pdf;
using  MySql.Data.MySqlClient;




namespace Premia
{

    public partial class Form1 : Form
    {
        //String konfiguracja = "datasource=localhost; port=3306; username=root;password=password;database=serwis";
        String konfiguracja = "datasource=mn26.webd.pl; port=3306; username=symygy_test;password=Pass1234;database=symygy_test";
        public Form1()
        {
            InitializeComponent();
            
            aktualna_data();
            wyswietl_zakres();
            oblicz();

        }


        private void oblicz()
        {
            double suma = 0;
            double premia = 0;
            double premia_netto = 0;

            for (int i = 0; i < dgPremia.Rows.Count; i++)
            {
                suma += Convert.ToDouble(dgPremia.Rows[i].Cells[2].Value); // oblicza sume kolumny z kwotą
            }
            lblSumaNetto.Text = Convert.ToString(suma); //suma kwot

            premia = suma * ((Convert.ToDouble(tbProcent.Text) / 100)); // premia brutto
            premia = Math.Round(premia, 2);
            lblPremiaBrutto.Text = Convert.ToString(premia); //zapis do odpowiedniego pola premii brutto

            premia_netto = premia * 0.7;
            premia_netto = Math.Round(premia_netto, 2);
            lblPremiaNetto.Text = Convert.ToString(premia_netto);
        }

        private void aktualna_data()
        {
            System.DateTime aktualna_data = System.DateTime.Now;

            if (aktualna_data.Month == 1) { miesiac = 1; cbMiesiac.SelectedIndex = 0; }
            if (aktualna_data.Month == 2) { miesiac = 2; cbMiesiac.SelectedIndex = 1; }
            if (aktualna_data.Month == 3) { miesiac = 3; cbMiesiac.SelectedIndex = 2; }
            if (aktualna_data.Month == 4) { miesiac = 4; cbMiesiac.SelectedIndex = 3; }
            if (aktualna_data.Month == 5) { miesiac = 5; cbMiesiac.SelectedIndex = 4; }
            if (aktualna_data.Month == 6) { miesiac = 6; cbMiesiac.SelectedIndex = 5; }
            if (aktualna_data.Month == 7) { miesiac = 7; cbMiesiac.SelectedIndex = 6; }
            if (aktualna_data.Month == 8) { miesiac = 8; cbMiesiac.SelectedIndex = 7; }
            if (aktualna_data.Month == 9) { miesiac = 9; cbMiesiac.SelectedIndex = 8; }
            if (aktualna_data.Month == 10) { miesiac = 10; cbMiesiac.SelectedIndex = 9; }
            if (aktualna_data.Month == 11) { miesiac = 11; cbMiesiac.SelectedIndex = 10; }
            if (aktualna_data.Month == 12) { miesiac = 12; cbMiesiac.SelectedIndex = 11; }


        }
        
        private void btnSzukaj_Click(object sender, EventArgs e)
        {
            MySqlConnection laczBaze = new MySqlConnection(konfiguracja);
            MySqlCommand wyszukiwanie = new MySqlCommand("SELECT * FROM symygy_test.tabelaPremia WHERE CONCAT (numerFV, kwota, opis,' ', data) LIKE '%" + tbSzukaj.Text + "%' ORDER BY wpis_id;", laczBaze);

            try
            {
                MySqlDataAdapter polaczenie = new MySqlDataAdapter();
                polaczenie.SelectCommand = wyszukiwanie;
                DataTable tabela = new DataTable();
                polaczenie.Fill(tabela);

                BindingSource zrodlo = new BindingSource();
                zrodlo.DataSource = tabela;
                dgPremia.DataSource = zrodlo;
                laczBaze.Close();
            }
            catch (Exception komunikat)
            {
                MessageBox.Show(komunikat.Message);
            }
            oblicz();
        }

        private void dgPremia_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            if (e.RowIndex >= 0)
            {
                id_rekordu = Convert.ToInt32(dgPremia.Rows[e.RowIndex].Cells[0].Value);
                tbNumerFV.Text = dgPremia.Rows[e.RowIndex].Cells[1].Value.ToString();
                tbKwotaFV.Text = dgPremia.Rows[e.RowIndex].Cells[2].Value.ToString();
                tbOpis.Text = dgPremia.Rows[e.RowIndex].Cells[3].Value.ToString();
                dpData.Text = dgPremia.Rows[e.RowIndex].Cells[4].Value.ToString();

                btnModyfikuj.Enabled = true;
                btnUsun.Enabled = true;

            }
        }

        private void btnDodaj_Click(object sender, EventArgs e)
        {
            if (tbKwotaFV.Text.Length < 2) MessageBox.Show("Data i kwota to pola obowiązkowe !");
            else
            {
                MessageBox.Show("Wpis został pomyślnie dodany");

                MySqlConnection laczBaze = new MySqlConnection(konfiguracja);
                MySqlCommand polaczenie = laczBaze.CreateCommand();
                MySqlTransaction transakcja;
                laczBaze.Open();

                transakcja = laczBaze.BeginTransaction(IsolationLevel.ReadCommitted);

                polaczenie.Connection = laczBaze;
                polaczenie.Transaction = transakcja;

                try
                {
                    polaczenie.CommandText = "INSERT INTO symygy_test.tabelaPremia SET numerFV='" + tbNumerFV.Text + "', kwota='" + tbKwotaFV.Text + "', opis='" + tbOpis.Text + "', data='" + dpData.Text + "'   ;";
                    polaczenie.ExecuteNonQuery();
                    transakcja.Commit();
                }
                catch (Exception komunikat)
                {
                    MessageBox.Show(komunikat.Message);
                }

                wyswietl_zakres(); 
                wyczysc_pola();
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            oblicz();
        }



        private void pictureBox1_Click(object sender, EventArgs e)
        {
            try
            {
                Document pdf = new Document(iTextSharp.text.PageSize.LETTER, 10, 10, 42, 35);
                PdfWriter write = PdfWriter.GetInstance(pdf, new FileStream("Podsumowanie.pdf", FileMode.Create));
                pdf.Open();

                // ustawienia czcionki
                var paragraf16 = FontFactory.GetFont(BaseFont.TIMES_BOLD, BaseFont.CP1257, true, 16);
                var paragraf14 = FontFactory.GetFont(BaseFont.TIMES_ROMAN, BaseFont.CP1257, 14);

                //Dodawanie tekstu
                pdf.Add(new Paragraph("Podsumowanie premii wypracowanej w miesiącu: " + miesiace[miesiac - 1],paragraf16));
                pdf.Add(new Paragraph(" "));

                PdfPTable tabela = new PdfPTable(dgPremia.Columns.Count);

                //Dodawanie nagłówków tabeli
                for (int i = 0; i < dgPremia.Columns.Count; i++)
                {
                    tabela.AddCell(new Phrase(dgPremia.Columns[i].HeaderText));
                }

                //Oznaczenie pierwszego wiersza jako nagłówek
                tabela.HeaderRows = 1;

                //Dodawanie wartości z komórek DGV do tabeli
                for (int i = 0; i < dgPremia.Rows.Count; i++)
                {
                    for (int j = 0; j < dgPremia.Columns.Count; j++)
                    {
                        if (dgPremia[j, i].Value != null)
                        {
                            tabela.AddCell(new Phrase(dgPremia[j, i].Value.ToString()));
                        }
                    }
                }

                pdf.Add(tabela);
                pdf.Add(new Paragraph(" "));
                pdf.Add(new Paragraph("Podsumowanie:", paragraf16));
                pdf.Add(new Paragraph("Premia brutto wynosi: " + lblPremiaBrutto.Text.ToString() + " zł.", paragraf14));
                pdf.Add(new Paragraph("Premia netto wynosi: " + lblPremiaNetto.Text.ToString() + " zł.", paragraf14));
                pdf.Close();

                MessageBox.Show("Pomyślnie utworzono plik o nazwie: Podsumowanie.pdf");
            }

            catch (Exception komunikat)
            {
                MessageBox.Show(komunikat.Message);
            }
        }

        private void wyczysc_pola()
        {
            tbKwotaFV.Text = "";
            tbNumerFV.Text = "";
            tbOpis.Text = "";
        }

        private void btnUsun_Click(object sender, EventArgs e)
        {
            MySqlConnection laczBaze = new MySqlConnection(konfiguracja);
            MySqlCommand usuwanie = laczBaze.CreateCommand();
            MySqlTransaction transakcja;
            laczBaze.Open();
            transakcja = laczBaze.BeginTransaction(IsolationLevel.ReadCommitted);
            usuwanie.Connection = laczBaze;
            usuwanie.Transaction = transakcja;

            try
            {
                if (MessageBox.Show("Czy na pewno chcesz usunąć dany rekord ?", "UWAGA!", MessageBoxButtons.YesNo) == System.Windows.Forms.DialogResult.Yes)
                {
                    usuwanie.CommandText = "DELETE FROM symygy_test.tabelaPremia WHERE wpis_id = " + id_rekordu + ";";
                    usuwanie.ExecuteNonQuery();

                    transakcja.Commit();
                    MessageBox.Show("Rekord został usunięty");
                }
            }
            catch (Exception komunikat)
            {
                MessageBox.Show(komunikat.Message);
                transakcja.Rollback();
            }
            laczBaze.Close();
            wyczysc_pola();
            wyswietl_zakres();

        }

        private void wyswietl_zakres()
        {
            MySqlConnection laczBaze = new MySqlConnection(konfiguracja);
            MySqlCommand szukanie = laczBaze.CreateCommand();

            try
            {
                MySqlDataAdapter polaczenie = new MySqlDataAdapter();
                if (cbMiesiac.SelectedIndex != 12) szukanie.CommandText = "SELECT * FROM symygy_test.tabelaPremia WHERE CONCAT (data) LIKE '%" + miesiace_szukaj[cbMiesiac.SelectedIndex] + "%' ORDER BY wpis_id;";
                else szukanie.CommandText = "SELECT * FROM symygy_test.tabelaPremia ORDER BY wpis_id;";

                polaczenie.SelectCommand = szukanie;
                DataTable tabela = new DataTable();
                polaczenie.Fill(tabela);

                BindingSource zrodlo = new BindingSource();
                zrodlo.DataSource = tabela;
                dgPremia.DataSource = zrodlo;
                laczBaze.Close();

            }
            catch (Exception komunikat)
            {
                MessageBox.Show(komunikat.Message);
            }
            oblicz();
            dgPremia.Columns[0].HeaderText = "ID rekordu";
            dgPremia.Columns[1].HeaderText = "Numer FV";
            dgPremia.Columns[2].HeaderText = "Kwota";
            dgPremia.Columns[3].HeaderText = "Opis";
            dgPremia.Columns[4].HeaderText = "Data";
        }

        private void btnZatwierdz_Click(object sender, EventArgs e)
        {
            wyswietl_zakres();  
        }

        private void btnModyfikuj_Click(object sender, EventArgs e)
        {
            MySqlConnection laczBaze = new MySqlConnection(konfiguracja);
            MySqlCommand modyfikuj = laczBaze.CreateCommand();
            MySqlTransaction transakcja;
            laczBaze.Open();
            transakcja = laczBaze.BeginTransaction(IsolationLevel.ReadCommitted);  //odczyt zatwierdzonych danych
            modyfikuj.Connection = laczBaze;
            modyfikuj.Transaction = transakcja;

            try
            {
                modyfikuj.CommandText = "UPDATE symygy_test.tabelaPremia SET numerFV='" + tbNumerFV.Text + "', kwota='" + tbKwotaFV.Text + "', opis='" + tbOpis.Text + "', data='" + dpData.Text + "' WHERE wpis_id=" + id_rekordu + " ";
                modyfikuj.ExecuteNonQuery();
                transakcja.Commit();
            }
            catch (Exception komunikat)
            {
                MessageBox.Show(komunikat.Message);
            }
            laczBaze.Close();
            wyswietl_zakres();
            wyczysc_pola();
            
        }

        private void pictureBox2_Click(object sender, EventArgs e)
        {

        }
    }
}
