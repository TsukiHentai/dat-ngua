using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace WindowsFormsApplication1
{
    public partial class frmNhanVien : Form
    {
        private string conStr = "Data Source = .\\SQLEXPRESS; Initial Catalog = test1; Integrated Security=true;";

        //private string conStr = "Data Source = (local);" +
        //    "Initial Catalog = DuAn;" +
        //    "persist security info = true;" +
        //    "User Id=sa; Password=281285; Connect Timeout =50";
        private SqlDataAdapter myDataAdapter;
        private SqlCommand myCommand;
        private SqlConnection myConnection;
        private DataSet myDataSet;
        private DataTable myTable;
        private DataTable myTableDV;

        public int TrangThai = 0;//0: là thêm; 1: là sửa

        public frmNhanVien()
        {
            InitializeComponent();
        }
        private void SetControls(bool edit)
        {
            txtMaNV.Enabled = edit;
            txtTenNV.Enabled = edit;
            dtpNgaySinh.Enabled = edit;
            cmbGioiTinh.Enabled = edit;
            cmbDonVi.Enabled = edit;
            btnAdd.Enabled = !edit;
            btnEdit.Enabled = !edit;
            btnSave.Enabled = edit;
        }

        private void frmNhanVien_Load(object sender, EventArgs e)
        {
            //Mo ket noi
            myConnection = new SqlConnection(conStr);
            myConnection.Open();
            Display();
            SetControls(false);
        }
        private void Display()
        {
            string SqlStr = "SELECT NHANVIEN.*, TENDV FROM NHANVIEN INNER JOIN DONVI ON NHANVIEN.MADV=DONVI.MADV";
            //Tao thong qua xau ket noi da mo
            myDataAdapter = new SqlDataAdapter(SqlStr, myConnection);
            myDataSet = new DataSet();
            myDataAdapter.Fill(myDataSet, "NHANVIEN");
            myTable = myDataSet.Tables["NHANVIEN"];
            //Chuyen len luoi
            dataGridView1.DataSource = myTable;
            dataGridView1.AutoGenerateColumns = false;
            TaoCombo();
            cmbGioiTinh.SelectedItem = "Nam";
        }

        private void TaoCombo()
        {
            try
            {
                string SqlStr = "SELECT * FROM DONVI";
                //Tao thong qua xau ket noi da mo
                myDataAdapter = new SqlDataAdapter(SqlStr, myConnection);
                myDataSet = new DataSet();
                myDataAdapter.Fill(myDataSet, "DONVI");
                myTableDV = myDataSet.Tables["DONVI"];
                //Tao combo donvi
                if (myTableDV.Rows.Count > 0)
                {
                    cmbDonVi.DataSource = myTableDV;
                    cmbDonVi.DisplayMember = "TenDV";
                    cmbDonVi.ValueMember = "MaDV";
                    cmbDonVi.SelectedIndex = 0;
                }
            }
            catch { MessageBox.Show("Có lỗi dữ liệu", "Thông báo lỗi"); }
        }

        private void btnAdd_Click(object sender, EventArgs e)
        {
            txtMaNV.Clear();
            txtTenNV.Clear();
            SetControls(true);
            txtMaNV.Focus();
            TrangThai = 0;
        }

        private void btnSave_Click(object sender, EventArgs e)
        {
            try
            {
                string _MaDV = cmbDonVi.SelectedValue.ToString();
                string sSql = "";
                if (TrangThai == 0) //Thao tac them
                    sSql = "Insert Into NHANVIEN (MaNV, TenNV, GioiTinh, NgaySinh, MaDV)" +
                    "Values (N'" + txtMaNV.Text + "', N'" + txtTenNV.Text + "', N'" + cmbGioiTinh.SelectedItem.ToString() + "', '" + dtpNgaySinh.Value.ToString("MM/dd/yyyy") + "', '" + cmbDonVi.SelectedValue.ToString() + "')";
                else //Thao tac sua
                    sSql = "Update NHANVIEN set " +
                    "   TenNV= N'" + txtTenNV.Text +
                    "', GioiTinh= N'" + cmbGioiTinh.SelectedItem.ToString() +
                    "', NgaySinh='" + dtpNgaySinh.Value.ToString("MM/dd/yyyy") +
                    "', MaDV='" + cmbDonVi.SelectedValue.ToString() + "' where MaNV='" + txtMaNV.Text + "'";

                myCommand = new SqlCommand(sSql, myConnection);
                myCommand.ExecuteNonQuery();
                Display();
                SetControls(false);
            }
            catch
            {
                MessageBox.Show("Kiểm tra lại dữ liệu nhập.", "Có lỗi xẩy ra!");
            }
        }

        private void btnDelete_Click(object sender, EventArgs e)
        {
            string sSql = "Delete From NHANVIEN Where MaNV = N'" + txtMaNV.Text + "'";
            myCommand = new SqlCommand(sSql, myConnection);
            myCommand.ExecuteNonQuery();
            Display();
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void dataGridView1_RowEnter(object sender, DataGridViewCellEventArgs e)
        {
            try
            {
                int row = e.RowIndex;
                txtMaNV.Text = myTable.Rows[row]["MaNV"].ToString();
                txtTenNV.Text = myTable.Rows[row]["TenNV"].ToString();
                cmbGioiTinh.SelectedItem = myTable.Rows[row]["GioTinh"].ToString();
                cmbDonVi.SelectedValue = myTable.Rows[row]["MaDV"].ToString();
                dtpNgaySinh.Value = DateTime.Parse(myTable.Rows[row]["NgaySinh"].ToString());
            }
            catch (Exception) { }
        }

        private void btnEdit_Click(object sender, EventArgs e)
        {
            SetControls(true);
            txtMaNV.Focus();
            TrangThai = 1;
        }

        private void txtMaNV_TextChanged(object sender, EventArgs e)
        {

        }

        private void groupBox3_Enter(object sender, EventArgs e)
        {

        }
        private void TimKiem()
        {
            try
            {
                string SqlStr = "SELECT NHANVIEN.*,TENDV FROM NHANVIEN INNER JOIN DONVI ON NHANVIEN.MADV=DONVI.MADV WHERE 1=1 ";
                if (ckbTimTheoTen.Checked)
                    SqlStr = SqlStr + " AND TenNV like N'%" + txtTenTim.Text + "%'";
                if (ckbTimTheoDonVi.Checked)
                    SqlStr = SqlStr + " AND NhanVien.MaDV = '" + cmbDonViTim.SelectedValue.ToString() + "'";


                //Tao thong qua xau ket noi da mo
                myDataAdapter = new SqlDataAdapter(SqlStr, myConnection);
                myDataSet = new DataSet();
                myDataAdapter.Fill(myDataSet, "NHANVIEN");
                myTable = myDataSet.Tables["NHANVIEN"];
                //Chuyen len luoi
                dataGridView1.DataSource = myTable;
                dataGridView1.AutoGenerateColumns = false;
            }
            catch { }
        }

        private void btnTimKiem_Click(object sender, EventArgs e)
        {
            TimKiem();
        }
    }
}
