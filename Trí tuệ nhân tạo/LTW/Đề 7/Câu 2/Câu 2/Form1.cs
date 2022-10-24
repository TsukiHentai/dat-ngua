using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Câu_2
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

        private void button1_Click(object sender, EventArgs e)
        {
            txtKH.Text = txtDG.Text = txtSL.Text = lbsoluong.Text = lbthanhtien.Text = lbtongtien.Text = "";
            checkBox1.Checked = false;
            txtKH.Focus();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(txtKH.Text))
            {
                MessageBox.Show("Chưa nhập tên khách hàng", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                int soluong = Convert.ToInt32(txtSL.Text);
                int dongia = Convert.ToInt32(txtDG.Text);
                double thanhtien = soluong * dongia;
                double giamgia = thanhtien - ((thanhtien * 3) / 100);
                if (soluong < 0) 
                {
                    MessageBox.Show("Số lượng phải lớn hơn 0 ", "Thông báo", MessageBoxButtons.OK);
                }
                if (dongia < 0)
                {
                    MessageBox.Show("Số lượng phải lớn hơn 0 ", "Thông báo", MessageBoxButtons.OK);
                }
                else 
                {
                    if (checkBox1.Checked == true)
                    {
                        lbthanhtien.Text = thanhtien.ToString();
                        lbtongtien.Text = giamgia.ToString();
                        lbsoluong.Text = soluong.ToString();
                    }
                    else
                    {
                        lbthanhtien.Text = thanhtien.ToString();
                        lbtongtien.Text = thanhtien.ToString();
                        lbsoluong.Text = soluong.ToString();
                    }
                }
            }

        }

        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

    }
}
