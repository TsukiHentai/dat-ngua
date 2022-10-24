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

        private void btnDangky_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(txt_Hoten.Text))
            {
                MessageBox.Show("Bạn chưa nhập thông tin", "Thông báo", MessageBoxButtons.OK);
            }
            else if (lb_Nhom1.Items.Contains(txt_Hoten.Text) || lb_Nhom2.Items.Contains(txt_Hoten.Text))
            {
                MessageBox.Show("Sinh viên đã tồn tại", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                if (cb_Nhom.Text == "Nhóm 1")
                {
                    lb_Nhom1.Items.Add(txt_Hoten.Text);
                }

                else if(cb_Nhom.Text == "Nhóm 2")
                {
                    lb_Nhom2.Items.Add(txt_Hoten.Text);
                }

                else
                {
                    MessageBox.Show("Bạn chưa chọn nhóm", "Thông báo", MessageBoxButtons.OK);
                }
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            cb_Nhom.Items.Add("Nhóm 1");
            cb_Nhom.Items.Add("Nhóm 2");
        }

        private void btn1_Click(object sender, EventArgs e)
        {
            lb_Nhom2.Items.Add(lb_Nhom1.SelectedItem);
            lb_Nhom1.Items.Remove(lb_Nhom1.SelectedItem);
        }

        private void btn2_Click(object sender, EventArgs e)
        {
            lb_Nhom2.Items.AddRange(lb_Nhom1.Items);
            lb_Nhom1.Items.Clear();
        }

        private void btn3_Click(object sender, EventArgs e)
        {
            lb_Nhom1.Items.Add(lb_Nhom2.SelectedItem);
            lb_Nhom2.Items.Remove(lb_Nhom2.SelectedItem);
        }

        private void btn4_Click(object sender, EventArgs e)
        {
            lb_Nhom1.Items.AddRange(lb_Nhom2.Items);
            lb_Nhom2.Items.Clear();
        }

        private void btnX_Click(object sender, EventArgs e)
        {
            if (lb_Nhom1.SelectedItem == null && lb_Nhom2.SelectedItem == null)
            {
                MessageBox.Show("Bạn chưa chọn sinh viên cần xóa", "Thông báo", MessageBoxButtons.OK);
            }
            if(lb_Nhom1.SelectedItem != null || lb_Nhom2.SelectedItem != null)
            {
                if(MessageBox.Show("Bạn chắc chắn muốn xóa ?","Thông báo",MessageBoxButtons.YesNo)==DialogResult.Yes)
                {
                    lb_Nhom1.Items.Remove(lb_Nhom1.SelectedItem);
                    lb_Nhom2.Items.Remove(lb_Nhom2.SelectedItem);
                }
            }
        }
    }
}
