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
        int gio, phut, giay;
        public void thoigian(int n)
        {
            giay = giay + n;
            while (giay >= 60)
            {
                phut++;
                giay = giay - 60;
            }
            while (phut >= 60)
            {
                gio++;
                phut = phut - 60;
            }
        }
        private void btnTinh_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(txtGio.Text) || string.IsNullOrEmpty(txtPhut.Text) || string.IsNullOrEmpty(txtGiay.Text))
            {
                MessageBox.Show("Bạn chưa nhập đủ dữ liệu", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                gio = int.Parse(txtGio.Text);
                phut = int.Parse(txtPhut.Text);
                giay = int.Parse(txtGiay.Text);
                thoigian(int.Parse(txtN.Text));
                textBox3.Text = gio.ToString();
                textBox2.Text = phut.ToString();
                textBox1.Text = giay.ToString();
            }

        }

        private void btnThoat_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Bạn muốn thoát không ?", "Thông báo", MessageBoxButtons.YesNo) == DialogResult.Yes)
            {
                Application.Exit();
            }
        }
    }
}
