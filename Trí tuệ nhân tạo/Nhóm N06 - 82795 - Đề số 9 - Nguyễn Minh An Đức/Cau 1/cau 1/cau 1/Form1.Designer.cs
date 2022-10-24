
namespace cau_1
{
    partial class Form1
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
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.rdbHe10 = new System.Windows.Forms.RadioButton();
            this.rdbHe2 = new System.Windows.Forms.RadioButton();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.txtHebandau = new System.Windows.Forms.TextBox();
            this.txtketqua = new System.Windows.Forms.TextBox();
            this.btnDoihecoso = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.rdbHe10);
            this.groupBox1.Controls.Add(this.rdbHe2);
            this.groupBox1.Location = new System.Drawing.Point(14, 14);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(200, 55);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Chọn hệ cơ số";
            // 
            // rdbHe10
            // 
            this.rdbHe10.AutoSize = true;
            this.rdbHe10.Location = new System.Drawing.Point(98, 20);
            this.rdbHe10.Name = "rdbHe10";
            this.rdbHe10.Size = new System.Drawing.Size(54, 17);
            this.rdbHe10.TabIndex = 1;
            this.rdbHe10.Text = "Hệ 10";
            this.rdbHe10.UseVisualStyleBackColor = true;
            // 
            // rdbHe2
            // 
            this.rdbHe2.AutoSize = true;
            this.rdbHe2.Checked = true;
            this.rdbHe2.Location = new System.Drawing.Point(7, 20);
            this.rdbHe2.Name = "rdbHe2";
            this.rdbHe2.Size = new System.Drawing.Size(48, 17);
            this.rdbHe2.TabIndex = 0;
            this.rdbHe2.TabStop = true;
            this.rdbHe2.Text = "Hệ 2";
            this.rdbHe2.UseVisualStyleBackColor = true;
            this.rdbHe2.CheckedChanged += new System.EventHandler(this.rdbHe2_CheckedChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(21, 77);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(94, 13);
            this.label1.TabIndex = 1;
            this.label1.Text = "Nhập một số hệ ...";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(18, 136);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(82, 13);
            this.label2.TabIndex = 2;
            this.label2.Text = "Kết quả hệ ... là";
            // 
            // txtHebandau
            // 
            this.txtHebandau.Location = new System.Drawing.Point(137, 69);
            this.txtHebandau.Name = "txtHebandau";
            this.txtHebandau.Size = new System.Drawing.Size(100, 20);
            this.txtHebandau.TabIndex = 3;
            this.txtHebandau.TextChanged += new System.EventHandler(this.txtHebandau_TextChanged);
            this.txtHebandau.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.txtHebandau_KeyPress);
            // 
            // txtketqua
            // 
            this.txtketqua.Location = new System.Drawing.Point(137, 136);
            this.txtketqua.Name = "txtketqua";
            this.txtketqua.Size = new System.Drawing.Size(100, 20);
            this.txtketqua.TabIndex = 4;
            // 
            // btnDoihecoso
            // 
            this.btnDoihecoso.Location = new System.Drawing.Point(24, 103);
            this.btnDoihecoso.Name = "btnDoihecoso";
            this.btnDoihecoso.Size = new System.Drawing.Size(75, 23);
            this.btnDoihecoso.TabIndex = 5;
            this.btnDoihecoso.Text = "Đổi hệ cơ số";
            this.btnDoihecoso.UseVisualStyleBackColor = true;
            this.btnDoihecoso.Click += new System.EventHandler(this.btnDoihecoso_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(268, 200);
            this.Controls.Add(this.btnDoihecoso);
            this.Controls.Add(this.txtketqua);
            this.Controls.Add(this.txtHebandau);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.groupBox1);
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Form1";
            this.Text = "Chuyển đổi hệ cơ số";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton rdbHe10;
        private System.Windows.Forms.RadioButton rdbHe2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox txtHebandau;
        private System.Windows.Forms.TextBox txtketqua;
        private System.Windows.Forms.Button btnDoihecoso;
    }
}

