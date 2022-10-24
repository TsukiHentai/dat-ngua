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


        private void btndt_Click(object sender, EventArgs e)
        {
            
            if (String.IsNullOrEmpty(txtcd.Text)||String.IsNullOrEmpty(txtcc.Text) || String.IsNullOrEmpty(txtcr.Text) )
            {
                MessageBox.Show("Chưa điền đủ thông tin", "Thông báo", MessageBoxButtons.OK);
               
            }
            else
            {
                double cd = double.Parse(txtcd.Text);
                double cr = double.Parse(txtcr.Text);
                double cc = double.Parse(txtcc.Text);
                double dientich = cd * cr;
                txtdt.Text = dientich.ToString();
            }
        }

        private void btntt_Click(object sender, EventArgs e)
        {
            if (String.IsNullOrEmpty(txtcd.Text) || String.IsNullOrEmpty(txtcc.Text) || String.IsNullOrEmpty(txtcr.Text))
            {
                MessageBox.Show("Chưa điền đủ thông tin", "Thông báo", MessageBoxButtons.OK);

            }
            else
            {
                double cd = double.Parse(txtcd.Text);
                double cr = double.Parse(txtcr.Text);
                double cc = double.Parse(txtcc.Text);
                double thetich = cd * cr*cc;
                txttt.Text = thetich.ToString();
            }
        }

        private void btnthoat_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("Bạn có muốn thoát không ?", "Thông báo", MessageBoxButtons.YesNo) == DialogResult.Yes)
            {
                this.Close();
            }
        }

    }
}
