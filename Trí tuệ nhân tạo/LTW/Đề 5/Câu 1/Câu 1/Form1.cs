using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Câu_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }
        int Chisocu, Chisomoi, Dongia;
        public int Sodien()
        {
            return Chisomoi - Chisocu;
        }
        public int TienDien()
        {
            return Dongia * Sodien();
        }

        private void btn_Tinhsodien_Click(object sender, EventArgs e)
        {

            if (string.IsNullOrEmpty(txt_Tenchuho.Text) || string.IsNullOrEmpty(txt_Macongto.Text) || string.IsNullOrEmpty(txt_Chisocu.Text) || string.IsNullOrEmpty(txt_Chisomoi.Text) || string.IsNullOrEmpty(txt_Dongia.Text))
            {
                MessageBox.Show("Bạn chưa nhập đủ thông tin", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                Chisomoi = Int32.Parse(txt_Chisomoi.Text);
                Chisocu = Int32.Parse(txt_Chisocu.Text);
                txt_Sodien.Text = Sodien().ToString();
            }
        }

        private void btn_Tinhtiendien_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(txt_Tenchuho.Text) || string.IsNullOrEmpty(txt_Macongto.Text) || string.IsNullOrEmpty(txt_Chisocu.Text) || string.IsNullOrEmpty(txt_Chisomoi.Text) || string.IsNullOrEmpty(txt_Dongia.Text))
            {
                MessageBox.Show("Bạn chưa nhập đủ thông tin", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                Dongia = Int32.Parse(txt_Dongia.Text);
                txt_Tiendien.Text = TienDien().ToString();

            }
        }

        private void btn_Thoat_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Bạn muốn thoát không ?", "Thông báo", MessageBoxButtons.YesNo) == DialogResult.Yes)
            {
                this.Close();
            }
        }

    }
}
