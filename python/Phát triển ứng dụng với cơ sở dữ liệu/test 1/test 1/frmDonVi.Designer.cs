
namespace test_1
{
    partial class frmDonVi
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.btntrovecuoi = new System.Windows.Forms.Button();
            this.panel2 = new System.Windows.Forms.Panel();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.btrnext1 = new System.Windows.Forms.Button();
            this.btntiep = new System.Windows.Forms.Button();
            this.btntrove = new System.Windows.Forms.Button();
            this.txtTenDV = new System.Windows.Forms.TextBox();
            this.txtMaDV = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.groupBox2.SuspendLayout();
            this.panel2.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.btntrovecuoi);
            this.groupBox2.Controls.Add(this.panel2);
            this.groupBox2.Controls.Add(this.btrnext1);
            this.groupBox2.Controls.Add(this.btntiep);
            this.groupBox2.Controls.Add(this.btntrove);
            this.groupBox2.Controls.Add(this.txtTenDV);
            this.groupBox2.Controls.Add(this.txtMaDV);
            this.groupBox2.Controls.Add(this.label4);
            this.groupBox2.Controls.Add(this.label3);
            this.groupBox2.Location = new System.Drawing.Point(46, 38);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(850, 494);
            this.groupBox2.TabIndex = 0;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Đơn vị";
            // 
            // btntrovecuoi
            // 
            this.btntrovecuoi.Location = new System.Drawing.Point(163, 201);
            this.btntrovecuoi.Name = "btntrovecuoi";
            this.btntrovecuoi.Size = new System.Drawing.Size(75, 32);
            this.btntrovecuoi.TabIndex = 8;
            this.btntrovecuoi.Text = "<<";
            this.btntrovecuoi.UseVisualStyleBackColor = true;
            // 
            // panel2
            // 
            this.panel2.Controls.Add(this.dataGridView1);
            this.panel2.Location = new System.Drawing.Point(142, 276);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(594, 132);
            this.panel2.TabIndex = 1;
            // 
            // dataGridView1
            // 
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(0, 0);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.Size = new System.Drawing.Size(594, 132);
            this.dataGridView1.TabIndex = 0;
            // 
            // btrnext1
            // 
            this.btrnext1.Location = new System.Drawing.Point(643, 201);
            this.btrnext1.Name = "btrnext1";
            this.btrnext1.Size = new System.Drawing.Size(75, 32);
            this.btrnext1.TabIndex = 7;
            this.btrnext1.Text = ">>";
            this.btrnext1.UseVisualStyleBackColor = true;
            this.btrnext1.Click += new System.EventHandler(this.btrtiencuoi_Click);
            // 
            // btntiep
            // 
            this.btntiep.Location = new System.Drawing.Point(470, 201);
            this.btntiep.Name = "btntiep";
            this.btntiep.Size = new System.Drawing.Size(75, 32);
            this.btntiep.TabIndex = 6;
            this.btntiep.Text = ">";
            this.btntiep.UseVisualStyleBackColor = true;
            this.btntiep.Click += new System.EventHandler(this.Btntiep_Click);
            // 
            // btntrove
            // 
            this.btntrove.Location = new System.Drawing.Point(320, 201);
            this.btntrove.Name = "btntrove";
            this.btntrove.Size = new System.Drawing.Size(75, 32);
            this.btntrove.TabIndex = 5;
            this.btntrove.Text = "<";
            this.btntrove.UseVisualStyleBackColor = true;
            this.btntrove.Click += new System.EventHandler(this.Btntrove_Click);
            // 
            // txtTenDV
            // 
            this.txtTenDV.Location = new System.Drawing.Point(213, 153);
            this.txtTenDV.Name = "txtTenDV";
            this.txtTenDV.Size = new System.Drawing.Size(463, 20);
            this.txtTenDV.TabIndex = 3;
            // 
            // txtMaDV
            // 
            this.txtMaDV.Location = new System.Drawing.Point(213, 96);
            this.txtMaDV.Name = "txtMaDV";
            this.txtMaDV.Size = new System.Drawing.Size(463, 20);
            this.txtMaDV.TabIndex = 2;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(89, 153);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(59, 13);
            this.label4.TabIndex = 1;
            this.label4.Text = "Tên đơn vị";
            this.label4.Click += new System.EventHandler(this.Label4_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(89, 96);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(55, 13);
            this.label3.TabIndex = 0;
            this.label3.Text = "Mã đơn vị";
            // 
            // frmDonVi
            // 
            this.ClientSize = new System.Drawing.Size(965, 600);
            this.Controls.Add(this.groupBox2);
            this.Name = "frmDonVi";
            this.Text = "frmDonVi";
            this.Load += new System.EventHandler(this.FrmDonVi_Load);
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.panel2.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btrtiencuoi;
        private System.Windows.Forms.Button btrtienlen;
        private System.Windows.Forms.Button btrtrovecuoi;
        private System.Windows.Forms.TextBox textBox2;
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button btrtrove;
        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Button btrnext1;
        private System.Windows.Forms.Button btntiep;
        private System.Windows.Forms.Button btntrove;
        private System.Windows.Forms.TextBox txtTenDV;
        private System.Windows.Forms.TextBox txtMaDV;
        private System.Windows.Forms.Panel panel2;
        private System.Windows.Forms.Button btntrovecuoi;
        private System.Windows.Forms.DataGridView dataGridView1;
    }
}

