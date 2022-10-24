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
        
        int loaiphong;
        double giaphong;
        public double tinhgiaphong()
        {
            if (loaiphong == 1)
            {
                return giaphong;

            }
            else if (loaiphong == 2)
            {
                return (giaphong * 1.5);

            }
            else if (loaiphong == 3)
            {
                return (giaphong * 2);

            }
            return 0;
        }

        private void btngiap_Click(object sender, EventArgs e)
        {

            if (string.IsNullOrEmpty(txtsop.Text) || string.IsNullOrEmpty(txtloaip.Text) || string.IsNullOrEmpty(txtgiap.Text))
            {
                MessageBox.Show("Bạn chưa nhập đủ thông tin", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                giaphong = double.Parse(txtgiap.Text);
                loaiphong = Int32.Parse(txtloaip.Text);
                txttinhgiap.Text = tinhgiaphong().ToString();
            }
        }

        private void btngiadv_Click(object sender, EventArgs e)
        {
            double tiendv =(giaphong*10)/100;
            txtgiadv.Text = tiendv.ToString();
        }
        
    }
}
