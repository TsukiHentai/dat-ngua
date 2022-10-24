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
       int a,b,c,d;
       public int Tuso()
       {
           return (a * b) + (c * d);
       }
       public int Mauso()
       {
           return b * d;
       }
        public int UCLN(int a,int b)
        {
            if (b == 0)
            {
                return a;
            }
            else
                return UCLN(b, a % b);
        }

        
        private void button1_Click(object sender, EventArgs e)
        {

            if(txtb.Text=="0" || txtd.Text=="0")
            {
                MessageBox.Show("Nhập sai mẫu", "Thông báo", MessageBoxButtons.OK);
            }
            else if (txtb.Text == "" && txtd.Text == "" && txta.Text == "" && txtc.Text == "")
            {
                a = 1;
                b = 1;
                c = 1;
                d = 1;
                txtb.Text = "1";
                txtd.Text = "1";
                txta.Text = "1";
                txtc.Text = "1";
                txtt.Text = Tuso().ToString();
                txtm.Text = Mauso().ToString();
            }

            else
            {
                    a = Int32.Parse(txta.Text);
                    b = Int32.Parse(txtb.Text);
                    c = Int32.Parse(txtc.Text);
                    d = Int32.Parse(txtd.Text);
                    txtt.Text = Tuso().ToString();
                    txtm.Text = Mauso().ToString();
            }

        }

        private void button2_Click(object sender, EventArgs e)
        {
            
            int rgtu = Tuso() / UCLN(Tuso(), Mauso());
            int rgmau = Mauso() / UCLN(Tuso(), Mauso());
            int rga = a / UCLN(a, b);
            int rgb = b / UCLN(a, b);
            int rgc = c / UCLN(c, d);
            int rgd = d / UCLN(c, d);
            txtaa.Text = rga.ToString();
            txtbb.Text = rgb.ToString();
            txtcc.Text = rgc.ToString();
            txtdd.Text = rgd.ToString();
            txttt.Text = rgtu.ToString();
            txtmm.Text = rgmau.ToString();
        }

        private void txta_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
            }
        }

        private void txtc_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
            }
        }

        private void txtb_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
            }
        }

        private void txtd_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar))
            {
                e.Handled = true;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }




    }
}
