namespace Câu_1
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
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.txtcd = new System.Windows.Forms.TextBox();
            this.txtcr = new System.Windows.Forms.TextBox();
            this.txtcc = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.txtdt = new System.Windows.Forms.TextBox();
            this.txttt = new System.Windows.Forms.TextBox();
            this.btndt = new System.Windows.Forms.Button();
            this.btntt = new System.Windows.Forms.Button();
            this.btnthoat = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 35);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(51, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "Chiều dài";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(13, 101);
            this.label2.Name = "label2";
            this.label2.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.label2.Size = new System.Drawing.Size(58, 13);
            this.label2.TabIndex = 1;
            this.label2.Text = "Chiều rộng";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(239, 35);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(55, 13);
            this.label3.TabIndex = 2;
            this.label3.Text = "Chiều cao";
            // 
            // txtcd
            // 
            this.txtcd.Location = new System.Drawing.Point(86, 35);
            this.txtcd.Name = "txtcd";
            this.txtcd.Size = new System.Drawing.Size(100, 20);
            this.txtcd.TabIndex = 3;
            // 
            // txtcr
            // 
            this.txtcr.Location = new System.Drawing.Point(86, 98);
            this.txtcr.Name = "txtcr";
            this.txtcr.Size = new System.Drawing.Size(100, 20);
            this.txtcr.TabIndex = 4;
            // 
            // txtcc
            // 
            this.txtcc.Location = new System.Drawing.Point(300, 32);
            this.txtcc.Name = "txtcc";
            this.txtcc.Size = new System.Drawing.Size(100, 20);
            this.txtcc.TabIndex = 5;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(16, 164);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(51, 13);
            this.label4.TabIndex = 6;
            this.label4.Text = "Diện tích";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(239, 164);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(48, 13);
            this.label5.TabIndex = 7;
            this.label5.Text = "Thể tích";
            // 
            // txtdt
            // 
            this.txtdt.Location = new System.Drawing.Point(86, 161);
            this.txtdt.Name = "txtdt";
            this.txtdt.Size = new System.Drawing.Size(100, 20);
            this.txtdt.TabIndex = 8;
            // 
            // txttt
            // 
            this.txttt.Location = new System.Drawing.Point(300, 161);
            this.txttt.Name = "txttt";
            this.txttt.Size = new System.Drawing.Size(100, 20);
            this.txttt.TabIndex = 9;
            // 
            // btndt
            // 
            this.btndt.Location = new System.Drawing.Point(19, 211);
            this.btndt.Name = "btndt";
            this.btndt.Size = new System.Drawing.Size(105, 23);
            this.btndt.TabIndex = 10;
            this.btndt.Text = "Tính diện tích";
            this.btndt.UseVisualStyleBackColor = true;
            this.btndt.Click += new System.EventHandler(this.btndt_Click);
            // 
            // btntt
            // 
            this.btntt.Location = new System.Drawing.Point(158, 211);
            this.btntt.Name = "btntt";
            this.btntt.Size = new System.Drawing.Size(105, 23);
            this.btntt.TabIndex = 11;
            this.btntt.Text = "Tính thể tích";
            this.btntt.UseVisualStyleBackColor = true;
            this.btntt.Click += new System.EventHandler(this.btntt_Click);
            // 
            // btnthoat
            // 
            this.btnthoat.Location = new System.Drawing.Point(295, 211);
            this.btnthoat.Name = "btnthoat";
            this.btnthoat.Size = new System.Drawing.Size(105, 23);
            this.btnthoat.TabIndex = 12;
            this.btnthoat.Text = "Thoát";
            this.btnthoat.UseVisualStyleBackColor = true;
            this.btnthoat.Click += new System.EventHandler(this.btnthoat_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(420, 261);
            this.Controls.Add(this.btnthoat);
            this.Controls.Add(this.btntt);
            this.Controls.Add(this.btndt);
            this.Controls.Add(this.txttt);
            this.Controls.Add(this.txtdt);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.txtcc);
            this.Controls.Add(this.txtcr);
            this.Controls.Add(this.txtcd);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Hình vuông";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox txtcd;
        private System.Windows.Forms.TextBox txtcr;
        private System.Windows.Forms.TextBox txtcc;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox txtdt;
        private System.Windows.Forms.TextBox txttt;
        private System.Windows.Forms.Button btndt;
        private System.Windows.Forms.Button btntt;
        private System.Windows.Forms.Button btnthoat;
    }
}

