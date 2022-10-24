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
        int cd, cr, cc;

        public int dientich()
        {
            return cd * cr;
        }

        public int thetich()
        {
            return cd * cr * cc;
        }

        private void btndt_Click(object sender, EventArgs e)
        {
            
            int cd = Convert.ToInt32(txtcd.Text);
            int cr = Convert.ToInt32(txtcr.Text);
            if (cd == cr)
            {
                txtdt.Text = dientich().ToString();
            }
            else 
            {
                MessageBox.Show("Đây không phải hình vuông", "Thông báo", MessageBoxButtons.OK);
            }
        }

        private void btntt_Click(object sender, EventArgs e)
        {
            int cd = Convert.ToInt32(txtcd.Text);
            int cr = Convert.ToInt32(txtcr.Text);
            int cc = Convert.ToInt32(txtcc.Text);
            if (cd == cr && (cd==cc || cr==cc))
            {
                txttt.Text = thetich().ToString();
            }
            else
            {
                MessageBox.Show("Đây không phải hình vuông", "Thông báo", MessageBoxButtons.OK);
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
