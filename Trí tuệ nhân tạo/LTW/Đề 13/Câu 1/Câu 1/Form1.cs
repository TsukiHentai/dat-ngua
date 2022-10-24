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
                chuoi += str1.Substring(0,1).ToUpper() + str1.Substring(1) + " ";
            }
            return chuoi;
        }
        public string tach(string str)
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
                chuoi += str1.Substring(0, 1).ToUpper() + str1.Substring(1) + "\r\n";
            }
            return chuoi;
        }
        public int demtu(string str)
        {
            int n = 0;
            string s = str.Trim();
            for (int i = 0; i < s.Length - 1; i++)
            {
                if ((s.Substring(i, 1) == " ") && (s.Substring(i + 1, 1) != " "))
                {
                    n++;
                }
            }
            if(s.Length>0)
            {
                n++;
            }
            return n;
        }


        private void button1_Click(object sender, EventArgs e)
        {
            textBox2.Text = chuanhoa(textBox1.Text);
            textBox3.Text = demtu(textBox2.Text).ToString();
            textBox4.Text = tach(textBox2.Text).ToString();
        }
    }
}

