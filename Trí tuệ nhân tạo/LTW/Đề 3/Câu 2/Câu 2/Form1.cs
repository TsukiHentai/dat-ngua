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
            lb_Dsm.Items.Add("Bóng đá");
            lb_Dsm.Items.Add("Bóng rổ");
            lb_Dsm.Items.Add("Cầu lông");
            lb_Dsm.Items.Add("Bơi");
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                lb_Dsc.Items.Add(lb_Dsm.SelectedItem);
                lb_Dsm.Items.Remove(lb_Dsm.SelectedItem);
            }
            catch
            {
                MessageBox.Show("Bạn chưa chọn môn", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            try
            {
                lb_Dsc.Items.AddRange(lb_Dsm.Items);
                lb_Dsm.Items.Clear();
            }
            catch
            {
                MessageBox.Show("Bạn chưa chọn môn", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }

        }

        private void button3_Click(object sender, EventArgs e)
        {
            try
            {
                lb_Dsm.Items.Add(lb_Dsc.SelectedItem);
                lb_Dsc.Items.Remove(lb_Dsc.SelectedItem);

            }
            catch
            {
                MessageBox.Show("Bạn chưa chọn môn", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            try
            {
                lb_Dsm.Items.AddRange(lb_Dsc.Items);
                lb_Dsc.Items.Clear();

            }
            catch
            {
                MessageBox.Show("Bạn chưa chọn môn", "Thông báo", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
        }

        private void btn_Nhap_Click(object sender, EventArgs e)
        {

           
            txt_Ketqua.Text = txt_Hoten.Text + "\r\n" + txt_Ngaysinh.Text + "\r\n***" + "\r\n Môn đã chọn" + "\r\n";
            for (int i = 0; i < lb_Dsc.Items.Count; i++)
            {
                lb_Dsc.SelectedIndex = i;
                txt_Ketqua.Text += lb_Dsc.Text + ",";

            }
            txt_Ketqua.Text = txt_Ketqua.Text.Trim(',');
           
        }

        private void btn_Rs_Click(object sender, EventArgs e)
        {
            
            txt_Ngaysinh.Text = "";
            txt_Hoten.Text = "";
            txt_Ketqua.Clear();
            lb_Dsc.Items.Clear();
            lb_Dsm.Items.Clear();
            lb_Dsm.Items.Add("Bóng đá");
            lb_Dsm.Items.Add("Bóng rổ");
            lb_Dsm.Items.Add("Cầu lông");
            lb_Dsm.Items.Add("Bơi");
        }

        private void btn_Thoat_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

    }
}
