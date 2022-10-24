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
            listView1.View = View.Details;
            listView1.Columns.Add("First Name", 100);
            listView1.Columns.Add("Last Name", 100);
            listView1.Columns.Add("Phone", 150);
        }

        private void largeIconToolStripMenuItem_Click(object sender, EventArgs e)
        {
            listView1.View = View.LargeIcon;
        }

        private void smallIconToolStripMenuItem_Click(object sender, EventArgs e)
        {
            listView1.View = View.SmallIcon;
        }

        private void listToolStripMenuItem_Click(object sender, EventArgs e)
        {
            listView1.View = View.List;
        }

        private void tilesToolStripMenuItem_Click(object sender, EventArgs e)
        {
            listView1.View = View.Tile;
        }

        private void detailsToolStripMenuItem_Click(object sender, EventArgs e)
        {
            listView1.View = View.Details;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (string.IsNullOrEmpty(textBox1.Text) || string.IsNullOrEmpty(textBox2.Text))
            {
                MessageBox.Show("Chưa điền đủ thông tin", "Thông báo", MessageBoxButtons.OK);
            }
            else if (!maskedTextBox1.MaskCompleted)
            {
                MessageBox.Show("Chưa điền đủ thông tin");

            }
            else
            {
                ListViewItem item = new ListViewItem(textBox1.Text);
                item.SubItems.Add(textBox2.Text);
                item.SubItems.Add(maskedTextBox1.Text);
                listView1.Items.Add(item);
                textBox1.Text = string.Empty;
                textBox2.Text = string.Empty;
                maskedTextBox1.Text = string.Empty;
            }
        }

        private void listView1_Click(object sender, EventArgs e)
        {

            foreach (ListViewItem items in listView1.SelectedItems)
            {
                textBox1.Text = items.SubItems[0].Text;
                textBox2.Text = items.SubItems[1].Text;
                maskedTextBox1.Text = items.SubItems[2].Text;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            foreach(ListViewItem items in listView1.SelectedItems)
            {
                items.Remove();
            }
        }


    }
}
