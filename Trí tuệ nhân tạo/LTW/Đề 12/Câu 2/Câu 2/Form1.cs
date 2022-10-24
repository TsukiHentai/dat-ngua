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
            listBox1.Items.Add("Siêu âm");
            listBox1.Items.Add("Nội soi");
            listBox1.Items.Add("Thử máu");
            listBox1.Items.Add("Chụp X-Quang");
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

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text == "" || textBox2.Text == "" || textBox3.Text == "" || textBox4.Text == "")
            {
                MessageBox.Show("Chưa nhập đủ dữ liệu", "Thông báo", MessageBoxButtons.OK);
            }
            else if (listBox1.Items.Contains(listBox2.Text))
            {
                MessageBox.Show("Đã tồn tại dịch vụ này", "Thông báo", MessageBoxButtons.OK);
            }
            else if (listBox1.Items.Count < 1)
            {
                MessageBox.Show("Phải có ít nhất 1 dịch vụ", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                listBox3.Items.Add(textBox1.Text);
                listBox3.Items.Add("Ngày sinh : " + textBox2.Text + " / " + textBox3.Text + " / " + textBox4.Text);
                string str1 = "";
                for (int i = 0; i < listBox2.Items.Count; i++)
                {
                    str1 += listBox2.Items[i].ToString()+',';
                }
                listBox3.Items.Add("dich vu da chon: " + str1.Trim(','));
               
            }
        }
    }
}
