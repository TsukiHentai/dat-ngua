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
            if(checkedListBox1.Items.Count >=4)
            {
                MessageBox.Show("Chỉ được chọn 4 môn", "Thông báo", MessageBoxButtons.OK);
            }
            else
            {
                foreach(CheckBox item in groupBox1.Controls)
                {
                    if(item.Checked && checkedListBox1.Items.Contains(item.Text))
                    {
                        MessageBox.Show("Môn đã tồn tại", "Thông báo");
                        item.Checked = false;
                        break;
                    }
                    else if(item.Checked && !checkedListBox1.Items.Contains(item.Text))
                    {
                        checkedListBox1.Items.Add(item.Text);
                    }
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            for (int i = checkedListBox1.Items.Count - 1; i >= 0; i--)
            {
                if (checkedListBox1.GetItemChecked(i))
                {
                    checkedListBox1.Items.RemoveAt(i);
                }
            }
           
        }
    }
}
