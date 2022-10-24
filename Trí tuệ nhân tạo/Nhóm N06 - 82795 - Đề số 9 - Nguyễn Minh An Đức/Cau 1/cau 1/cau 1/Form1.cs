using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace cau_1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnDoihecoso_Click(object sender, EventArgs e)
        {
            if(txtHebandau.Text==string.Empty)
            {
                MessageBox.Show("Bạn chưa nhập số", "Thông báo");

            }   
            else
            {
                int a = int.Parse(txtHebandau.Text);
                if(rdbHe2.Checked)
                {
                    txtketqua.Text = Convert.ToInt32(a.ToString(), 2).ToString();
                }
                if(rdbHe10.Checked)
                {
                    txtketqua.Text = Convert.ToString(a, 2);
                }    
            }    
        }

        private void rdbHe2_CheckedChanged(object sender, EventArgs e)
        {
            if(rdbHe2.Checked)
            {
                label1.Text = "Nhập một số hệ 2";
                label2.Text = "Kết quả hệ 10 là: ";
            }   
            else
            {
                label1.Text = "Nhập một số hệ 10";
                label2.Text = "Kết quả hệ 2 là: ";
            }    
        }

        private void txtHebandau_TextChanged(object sender, EventArgs e)
        {
            if(rdbHe2.Checked==true)
            {
                txtHebandau.MaxLength = 8;
            } 
            else
            {
                int a = int.Parse(txtHebandau.Text);
                if(a>256)
                {
                    MessageBox.Show("Số hệ 10 phải nhập nhỏ hơn hoặc bằng 256");
                    txtHebandau.Text = "256";
                }    
            }    
        }

        private void txtHebandau_KeyPress(object sender, KeyPressEventArgs e)
        {
            if(rdbHe2.Checked==true)
            {
                if(e.KeyChar!='1'&&e.KeyChar!='0'&&!char.IsControl(e.KeyChar))
                {
                    MessageBox.Show("Chỉ được nhập 0 và 1 với số hệ 2", "thông báo");
                    e.Handled = true;
                }
                  
            }    
        }
    }
}
