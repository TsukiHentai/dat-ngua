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

        private void button1_Click(object sender, EventArgs e)
        {
            listBox2.Items.AddRange(listBox1.Items);
            listBox1.Items.Clear();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            listBox1.Items.Add("Bóng đá");
            listBox1.Items.Add("Bóng chuyền");
            listBox1.Items.Add("Điền kinh");
            listBox1.Items.Add("Bơi lội");
            listBox1.Items.Add("Thể dục dụng cụ");
            listBox1.Items.Add("Nhảy");
        }

        private void button2_Click(object sender, EventArgs e)
        {
            listBox2.Items.Add(listBox1.SelectedItem);
            listBox1.Items.Remove(listBox1.SelectedItem);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            listBox1.Items.Add(listBox2.SelectedItem);
            listBox2.Items.Remove(listBox2.SelectedItem);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            listBox1.Items.AddRange(listBox2.Items);
            listBox2.Items.Clear();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            listBox1.Items.Clear();
            listBox2.Items.Clear();
            listBox1.Items.Add("Bóng đá");
            listBox1.Items.Add("Bóng chuyền");
            listBox1.Items.Add("Điền kinh");
            listBox1.Items.Add("Bơi lội");
            listBox1.Items.Add("Thể dục dụng cụ");
            listBox1.Items.Add("Nhảy");
            
        }

        private void button7_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(textBox1.Text))
            {
                MessageBox.Show("Chưa nhập đủ thông tin", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                if (listBox2.Text == null)
                {
                    textBox2.Text = textBox1.Text + "\r\n----Các môn đã chọn----\r\nChưa có môn nào";
                }
                else
                {
                    textBox2.Text = textBox1.Text + "\r\n----Các môn đã chọn----\r\n";
                    for (int i = 0; i < listBox2.Items.Count; i++)
                    {
                        listBox2.SelectedIndex = i;
                        textBox2.Text += listBox2.Text + ",";
                    }
                    textBox2.Text = textBox2.Text.Trim(',');
                }
            }
        }
    }
}
