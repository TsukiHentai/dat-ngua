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
        public string chuanhoa(string str)
        {
            str = str.Trim().ToLower();
            while (str.Contains("  "))
            {
                str = str.Replace("  ", " ");
            }
            string chuoi = "";
            string[] arr = str.Split(' ');
            foreach (string str1 in arr)
            {
                chuoi += str1.Substring(0, 1).ToUpper() + str1.Substring(1) + " ";
            }
            return chuoi;
        }
        private void button1_Click(object sender, EventArgs e)
        {
            textBox1.Text = textBox2.Text = textBox3.Text = ""; ;
            checkBox1.Checked = false;
            button2.Enabled = false;
        }

        private void button2_Click(object sender, EventArgs e)
        {

            if (string.IsNullOrEmpty(textBox1.Text) || string.IsNullOrEmpty(textBox2.Text) || string.IsNullOrEmpty(textBox2.Text))
            {
                MessageBox.Show("Điền đủ vào");
            }
            else 
            {
                int soluong = Convert.ToInt32(textBox2.Text);
                int dongia = Convert.ToInt32(textBox3.Text);
                int thanhtien = soluong * dongia;
                int khachquen = thanhtien - (thanhtien * 5) / 100;
                ListViewItem item = new ListViewItem(chuanhoa(textBox1.Text));
                if (checkBox1.Checked == true)
                {
                    
                    item.SubItems.Add(khachquen.ToString());
                    listView1.Items.Add(item);
                }
                else if (checkBox1.Checked == false)
                {
                    item.SubItems.Add(thanhtien.ToString());
                    listView1.Items.Add(item);
                }
            } 
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            listView1.View = View.Details;
            listView1.Columns.Add("Tên khách hàng", 100);
            listView1.Columns.Add("Thành tiền", 100);
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            button2.Enabled = true;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if(MessageBox.Show("Bạn muốn thoát ?","Thông báo",MessageBoxButtons.YesNo)==DialogResult.Yes)
            {
                Application.Exit();
            }
        }
    }
}
