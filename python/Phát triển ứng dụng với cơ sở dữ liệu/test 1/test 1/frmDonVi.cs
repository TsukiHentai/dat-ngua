using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace test_1
{
    public partial class frmDonVi : Form
    {
        private String conStr = "Data Source =.\\SQLEXPRESS;" +
       "Initial Catalog =Test;" +
           "Integrated Security = true;";

        private SqlConnection myConnection;
        private SqlDataAdapter myDataAdapter;
        private DataSet myDataSet;
        private DataTable myTable;
        private int pos = 0;

        public frmDonVi()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            myConnection = new SqlConnection(conStr);
            myConnection.Open();
            string SqlStr = "SELECT* FROM DONVI";
            myDataAdapter = new SqlDataAdapter(SqlStr, conStr);
            myDataSet = new DataSet();
            myDataAdapter.Fill(myDataSet, "DONVI");
            myTable = myDataSet.Tables["DONVI"];
            btntrove.PerformClick();
        }

        private void Btntrovecuoi_Click(object sender, EventArgs e)
        {
            if (myTable.Rows.Count == 0) return;
            pos = 0;
            txtMaDV.Text = myTable.Rows[pos]["MaDV"].ToString();
            txtTenDV.Text = myTable.Rows[pos]["TenDV"].ToString();
        }

        private void Btntrove_Click(object sender, EventArgs e)
        {
            if (myTable.Rows.Count == 0) return;
            pos--;
            if (pos < 0) pos = 0;
            txtMaDV.Text = myTable.Rows[pos]["MaDV"].ToString();
            txtTenDV.Text = myTable.Rows[pos]["TenDV"].ToString();
        }
        private void Btntiep_Click(object sender, EventArgs e)
        {
            if (myTable.Rows.Count == 0) return;
            pos++;
            if (pos > myTable.Rows.Count - 1)
                pos = myTable.Rows.Count - 1;
            txtMaDV.Text = myTable.Rows[pos]["MaDV"].ToString();
            txtTenDV.Text = myTable.Rows[pos]["TenDV"].ToString();
        }

        private void Btrtiepcuoi_Click(object sender, EventArgs e)
        {
            if (myTable.Rows.Count == 0) return;
            pos = myTable.Rows.Count - 1;
            txtMaDV.Text = myTable.Rows[pos]["MaDV"].ToString();
            txtTenDV.Text = myTable.Rows[pos]["TenDV"].ToString();
        }

        private void Label4_Click(object sender, EventArgs e)
        {

        }

        private void FrmDonVi_Load(object sender, EventArgs e)
        {

        }
    }
}
