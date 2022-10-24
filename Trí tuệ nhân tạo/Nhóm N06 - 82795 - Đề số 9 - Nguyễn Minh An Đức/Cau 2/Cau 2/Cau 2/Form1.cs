using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Cau_2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnReset_Click(object sender, EventArgs e)
        {
            txtTenSinhVien.Text = string.Empty;
            txtCSDL.Text = string.Empty;
            txtCTDL.Text = string.Empty;
            txtLTW.Text = string.Empty;
            txtTinhocdaicuong.Text = string.Empty;
        }

        private void btnTinh_Click(object sender, EventArgs e)
        {
            double csdl = double.Parse(txtCSDL.Text);
            double ltw = double.Parse(txtLTW.Text);
            double ctdl = double.Parse(txtCTDL.Text);
            double tinhoc = double.Parse(txtTinhocdaicuong.Text);
            double dtb = (csdl + ltw + ctdl + tinhoc) / 4;
            string xeploai = string.Empty;
            if (dtb <= 5)
            {
                xeploai = "yếu";
            }else
            {
                if(dtb<6.5)
                {
                    xeploai = "trung bình";
                }else
                {
                    if(dtb<=8)
                    {
                        xeploai = "khá";
                    }else
                    {
                        xeploai = "giỏi";
                    }    
                }   
            }
            listBox1.Items.Add(txtTenSinhVien.Text);
            listBox1.Items.Add("Điểm trung bình: "+ dtb.ToString());
            listBox1.Items.Add("Xếp loại: " + xeploai.ToString());
        }

        private void txtCSDL_KeyPress(object sender, KeyPressEventArgs e)
        {
            if(!char.IsControl(e.KeyChar)&&!char.IsDigit(e.KeyChar)&&(e.KeyChar!=','))
            {
                e.Handled = true;
                MessageBox.Show("Không được phép nhập ký tự");
            }    
        }

        private void txtLTW_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar) && (e.KeyChar != ','))
            {
                e.Handled = true;
                MessageBox.Show("Không được phép nhập ký tự");
            }
        }

        private void txtCTDL_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar) && (e.KeyChar != ','))
            {
                e.Handled = true;
                MessageBox.Show("Không được phép nhập ký tự");
            }
        }

        private void txtTinhocdaicuong_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (!char.IsControl(e.KeyChar) && !char.IsDigit(e.KeyChar) && (e.KeyChar != ','))
            {
                e.Handled = true;
                MessageBox.Show("Không được phép nhập ký tự");
            }
        }

        private void btnThoat_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void txtCSDL_TextChanged(object sender, EventArgs e)
        {
            double a = double.Parse(txtCSDL.Text);
            if(a>10)
            {
                MessageBox.Show("Điểm phải nhỏ hơn hoặc bằng 10", "Thông báo");
                txtCSDL.Text = "10";
                txtCSDL.Focus();
            }    
        }

        private void txtLTW_TextChanged(object sender, EventArgs e)
        {
            double a = double.Parse(txtLTW.Text);
            if (a > 10)
            {
                MessageBox.Show("Điểm phải nhỏ hơn hoặc bằng 10", "Thông báo");
                txtLTW.Text = "10";
                txtLTW.Focus();
            }
        }

        private void txtCTDL_TextChanged(object sender, EventArgs e)
        {
            double a = double.Parse(txtCTDL.Text);
            if (a > 10)
            {
                MessageBox.Show("Điểm phải nhỏ hơn hoặc bằng 10", "Thông báo");
                txtCTDL.Text = "10";
                txtCTDL.Focus();
            }
        }

        private void txtTinhocdaicuong_TextChanged(object sender, EventArgs e)
        {
            double a = double.Parse(txtTinhocdaicuong.Text);
            if (a > 10)
            {
                MessageBox.Show("Điểm phải nhỏ hơn hoặc bằng 10", "Thông báo");
                txtTinhocdaicuong.Text = "10";
                txtTinhocdaicuong.Focus();
            }
        }
    }
}
