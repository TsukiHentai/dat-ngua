CREATE DATABASE  IF NOT EXISTS `test1` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `test1`;
-- MySQL dump 10.13  Distrib 8.0.30, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: test1
-- ------------------------------------------------------
-- Server version	8.0.30

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `chitietgiohang`
--

DROP TABLE IF EXISTS `chitietgiohang`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `chitietgiohang` (
  `id` bigint NOT NULL AUTO_INCREMENT,
  `dongia` double DEFAULT NULL,
  `ngaytao` date DEFAULT NULL,
  `num` int DEFAULT NULL,
  `tongthanhtoan` double DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `chitietgiohang`
--

LOCK TABLES `chitietgiohang` WRITE;
/*!40000 ALTER TABLE `chitietgiohang` DISABLE KEYS */;
/*!40000 ALTER TABLE `chitietgiohang` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `danhmucsanpham`
--

DROP TABLE IF EXISTS `danhmucsanpham`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `danhmucsanpham` (
  `id` bigint NOT NULL AUTO_INCREMENT,
  `hinhanh` varchar(255) DEFAULT NULL,
  `mota` varchar(255) DEFAULT NULL,
  `ngaytao` date DEFAULT NULL,
  `tendanhmuc` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `danhmucsanpham`
--

LOCK TABLES `danhmucsanpham` WRITE;
/*!40000 ALTER TABLE `danhmucsanpham` DISABLE KEYS */;
INSERT INTO `danhmucsanpham` VALUES (1,'CPU','danh muc cpu','2022-09-11','cpu'),(2,'ThucPham','Do AN','2022-05-01','Do an');
/*!40000 ALTER TABLE `danhmucsanpham` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `donhang`
--

DROP TABLE IF EXISTS `donhang`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `donhang` (
  `id` bigint NOT NULL AUTO_INCREMENT,
  `ngay_dat` date DEFAULT NULL,
  `tien_giam` double DEFAULT NULL,
  `tinh_trang` varchar(255) DEFAULT NULL,
  `tong_tien` double DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `donhang`
--

LOCK TABLES `donhang` WRITE;
/*!40000 ALTER TABLE `donhang` DISABLE KEYS */;
/*!40000 ALTER TABLE `donhang` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `giohang`
--

DROP TABLE IF EXISTS `giohang`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `giohang` (
  `id` bigint NOT NULL AUTO_INCREMENT,
  `tinh_trang` bit(1) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `giohang`
--

LOCK TABLES `giohang` WRITE;
/*!40000 ALTER TABLE `giohang` DISABLE KEYS */;
/*!40000 ALTER TABLE `giohang` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `khachhang`
--

DROP TABLE IF EXISTS `khachhang`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `khachhang` (
  `id` bigint NOT NULL AUTO_INCREMENT,
  `token` varchar(255) DEFAULT NULL,
  `anhdaidien` varchar(255) DEFAULT NULL,
  `diachi` varchar(255) DEFAULT NULL,
  `email` varchar(255) DEFAULT NULL,
  `gioitinh` varchar(255) DEFAULT NULL,
  `hoten` varchar(255) DEFAULT NULL,
  `matkhau` varchar(255) DEFAULT NULL,
  `ngaysinh` date DEFAULT NULL,
  `ngaytao` date DEFAULT NULL,
  `sdt` varchar(255) DEFAULT NULL,
  `sodonhang` int DEFAULT NULL,
  `taikhoan` varchar(255) DEFAULT NULL,
  `tongthanhtoan` double DEFAULT NULL,
  `trangthai` bit(1) DEFAULT NULL,
  `idphanquyen` int DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=4 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `khachhang`
--

LOCK TABLES `khachhang` WRITE;
/*!40000 ALTER TABLE `khachhang` DISABLE KEYS */;
INSERT INTO `khachhang` VALUES (1,NULL,'123','hai phong','anonimous@gmail.com','nam','Dat Nguyen','123','2022-01-01','2022-05-05','012301231230',5,'khack1',10000,_binary '',1),(2,NULL,'748','Ha Noi','DuyNen@gmail.com','nam','Khanh Duy','123456','2022-01-01','2022-01-03','0213894',7,'duy123',200000,_binary '',1),(3,NULL,'4232','HCM','hello@gmail.com','nu','Thuy Chi','chi123','2011-02-03','2022-04-01','0293884812',12,'chivip',430000,_binary '',1);
/*!40000 ALTER TABLE `khachhang` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `nhanvien`
--

DROP TABLE IF EXISTS `nhanvien`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `nhanvien` (
  `id` bigint NOT NULL AUTO_INCREMENT,
  `token` varchar(255) DEFAULT NULL,
  `diachi` varchar(255) DEFAULT NULL,
  `email` varchar(255) DEFAULT NULL,
  `gioitinh` varchar(255) DEFAULT NULL,
  `hoten` varchar(255) DEFAULT NULL,
  `matkhau` varchar(255) DEFAULT NULL,
  `ngaysinh` date DEFAULT NULL,
  `ngaytao` date DEFAULT NULL,
  `sdt` varchar(255) DEFAULT NULL,
  `taikhoan` varchar(255) DEFAULT NULL,
  `trangthai` bit(1) DEFAULT NULL,
  `idphanquyen` int DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=2 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `nhanvien`
--

LOCK TABLES `nhanvien` WRITE;
/*!40000 ALTER TABLE `nhanvien` DISABLE KEYS */;
INSERT INTO `nhanvien` VALUES (1,NULL,'Ha Noi','nhanvien@gmail.com','nu','Phuong Ly','admin','2022-01-02','2022-03-04','10230131203','admin',_binary '',2);
/*!40000 ALTER TABLE `nhanvien` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `phanquyen`
--

DROP TABLE IF EXISTS `phanquyen`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `phanquyen` (
  `id` bigint NOT NULL AUTO_INCREMENT,
  `mota` varchar(255) DEFAULT NULL,
  `ten` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `phanquyen`
--

LOCK TABLES `phanquyen` WRITE;
/*!40000 ALTER TABLE `phanquyen` DISABLE KEYS */;
INSERT INTO `phanquyen` VALUES (1,'Khach hang','khach'),(2,'Nhan vien','nv');
/*!40000 ALTER TABLE `phanquyen` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `sanpham`
--

DROP TABLE IF EXISTS `sanpham`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `sanpham` (
  `id` bigint NOT NULL AUTO_INCREMENT,
  `anh_minh_hoa` text,
  `gia_goc` double DEFAULT NULL,
  `giakm` double DEFAULT NULL,
  `mo_ta` text,
  `so_luong` int DEFAULT NULL,
  `thoi_gian_bao_hanh` int DEFAULT NULL,
  `ten_sp` text,
  `tinh_trang` int DEFAULT NULL,
  `iddanhmuc` int DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=36 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `sanpham`
--

LOCK TABLES `sanpham` WRITE;
/*!40000 ALTER TABLE `sanpham` DISABLE KEYS */;
INSERT INTO `sanpham` VALUES (1,'https://lh3.googleusercontent.com/MaNYTTv-4gkgptnl12eLDeA-Q6GvFaQLwqwGrhRCk2atMwD1blGaBNITqaEE8EuYlrU_2k4f6jxY4f2tOZSy7JRzRgXgJ5U=w1000-rw',15133000,13199000,'Laptop Dell Latitude 3420 (42LT342001)',20,6,'Laptop Dell Latitude 3420 (42LT342001)',1,1),(2,'https://phucanhcdn.com/media/product/42439_surface_laptop_go_sandstone_h1.png',27269000,21799000,'Surface Laptop Go (THJ-00035)',10,2,'Surface Laptop Go (THJ-00035)',1,1),(3,'https://laptop88.vn/media/product/7395_msi_modern_14_b5m_203vn.png',13999000,11799000,'Laptop MSI Modern 14 (B11MOU-1028VN)',100,3,'Laptop MSI Modern 14 (B11MOU-1028VN)',1,1),(4,'https://lh3.googleusercontent.com/XIMNHuSqALtlT2Tiwz-XwlNOQE_i7trqHtXYpAScfK4r2s3CGHL9z7IXA_zTKXmeVCaewnl8jHNbwqmZLWC0O57OCQlJqO-T=w1000-rw',23099000,22499000,'Máy tính bảng Apple Ipad mini 8.3 (MLX93ZA/A)',150,4,'Máy tính bảng Apple Ipad mini 8.3 (MLX93ZA/A)',1,1),(5,'https://cdn01.dienmaycholon.vn/filewebdmclnew/DMCL21/Picture//Apro/Apro_product_31244/iphone-12-64gb-_main_764_1020.png.webp',25599000,17999000,'iPhone 12 128GB Xanh lá (MGJF3VN/A)',200,6,'iPhone 12 128GB Xanh lá (MGJF3VN/A)',1,1),(6,'https://lh3.googleusercontent.com/k9H0KS7063wUceOem_5T-soiCA4mHBOebq-_9IylO5ZIL_DedMr4RaRLh7vn6YtS7tDV_KWOhXbaaaVkrx4QNgmdN2GKd1I=w1000-rw',24999000,24299000,'Laptop Asus ZenBook UX3402ZA-KM220W',12,10,'Laptop Asus ZenBook UX3402ZA-KM220W',1,1),(7,'https://lh3.googleusercontent.com/GKwJcu7Yqsy7_cC0H995eH_YLIWQoogUPOShFV9Al9J5Q8nKWgY_3-aqOhz_YZLK-0sIOy5QzdnQBYCKZfPH1_EdnMRQ3Q1M=w1000-rw',110999000,108499000,'Laptop Asus Gaming ROG Strix G733CX-LL6789W',32,20,'Laptop Asus Gaming ROG Strix G733CX-LL6789W',1,1),(8,'https://cdn.tgdd.vn/Products/Images/42/238080/iphone-12-violet-600x600.jpg',23999000,16999000,'iPhone 12 64GB Tím (MJNM3VN/A)',43,32,'iPhone 12 64GB Tím (MJNM3VN/A)',1,1),(9,'https://cdn01.dienmaycholon.vn/filewebdmclnew/DMCL21/Picture//Apro/Apro_product_26078/tab-a7-lite-332_main_909_1020.png.webp',4539000,3999000,'Máy tính bảng Samsung Galaxy Tab A7 Lite (T225)',58,12,'Máy tính bảng Samsung Galaxy Tab A7 Lite (T225)',1,1),(10,'https://cdn01.dienmaycholon.vn/filewebdmclnew/DMCL21/Picture//Apro/Apro_product_28934/iphone-13-128gb_main_871_1020.png.webp',28099000,25999000,'iPhone 13 mini 512GB Hồng (MLKD3VN/A)',60,23,'iPhone 13 mini 512GB Hồng (MLKD3VN/A)',1,1),(11,'https://cdn1.viettelstore.vn/Images/Product/ProductImage/571947601.jpeg',28099000,25999000,'iPhone 13 mini 512GB Xanh dương (MLKF3VN/A)',43,13,'iPhone 13 mini 512GB Xanh dương (MLKF3VN/A)',1,1),(12,'https://www.laptopvip.vn/images/ab__webp/detailed/28/notebook-inspiron-14-7420-2-in-1-left-gallery-4-www.laptopvip.vn-1654499663.webp',20999000,20299000,'Laptop Dell Inspiron 7420 2 in 1 (5983SLV-PUS)',43,24,'Laptop Dell Inspiron 7420 2 in 1 (5983SLV-PUS)',1,1),(13,'https://laptop88.vn/media/product/7094_64501_laptop_asus_gaming_zephyrus_flow_8.png',59999000,56999000,'Laptop Asus Gaming Zephyrus Flow GZ301ZE-LD6688W',76,12,'Laptop Asus Gaming Zephyrus Flow GZ301ZE-LD6688W',1,1),(14,'https://cdn01.dienmaycholon.vn/filewebdmclnew/DMCL21/Picture//Apro/Apro_product_26082/galaxy-tab-s761_main_852_1020.png.webp',49179000,18169000,'Máy tính bảng Samsung Galaxy Tab S7',80,16,'Máy tính bảng Samsung Galaxy Tab S7',1,1),(15,'https://cdn.nguyenkimmall.com/images/detailed/756/dien-thoai-iphone-13-pro-128gb-xam-1.jpg',33999000,29999000,'iPhone 13 Pro Max 128GB Xám (MLL63VN/A)',40,15,'iPhone 13 Pro Max 128GB Xám (MLL63VN/A)',1,1),(16,'https://cdn.hoanghamobile.com/i/preview/Uploads/2021/03/12/image-removebg-preview-2.png',36999000,27299000,'Microsoft Surface Pro 7 Plus (1NA-000031)',75,1,'Microsoft Surface Pro 7 Plus (1NA-000031)',1,1),(17,'https://hanoicomputercdn.com/media/product/67072_orico_hs2_a1_bk_ep4.png',189000,149000,'Bộ chia HDMI 1 cổng sang 2 cổng HDMI ORICO HS2-A1-BK-EP',68,1,'Bộ chia HDMI 1 cổng sang 2 cổng HDMI ORICO HS2-A1-BK-EP',1,1),(18,'https://cdn-amz.woka.io/images/I/61CaZ+x+m7L.jpg',1399000,999000,'Pin sạc dự phòng không dây từ tính Anker 622 Maggo A1611 - Màu xanh dương nhạt',69,12,'Pin sạc dự phòng không dây từ tính Anker 622 Maggo A1611 - Màu xanh dương nhạt',1,1),(19,'https://hanoicomputercdn.com/media/product/66500_anker_nano_pro_h___ng.jpg',399000,299000,'Củ sạc nhanh Anker Nano Pro A2637 - PD 20W - 01 cổng Type C - Màu hồng',58,20,'Củ sạc nhanh Anker Nano Pro A2637 - PD 20W - 01 cổng Type C - Màu hồng',1,1),(20,'https://lh3.googleusercontent.com/zf_e3Z_kIKgF0er0dN70_Ewms9bJCT7KHAHlVA_QZJbCmu-BxnqEY5oX8R6LPQhg7f-VsjD89uO6t8-2LXqkYLGKzdRbfPvn=w1000-rw',2599000,2599000,'Ram Laptop Kingston (KVR48S40BS8-16) 16GB (1x16GB) DDR5 4800MHz',23,3,'Ram Laptop Kingston (KVR48S40BS8-16) 16GB (1x16GB) DDR5 4800MHz',1,1),(21,'https://cdn.nguyenkimmall.com/images/detailed/771/10050858-balo-laptop-targus-city-backpack-den-1.jpg',399000,299000,'Balo Laptop Targus TSB89104AP-70 15.6 inch Sport Backpack - Màu đen',12,24,'Balo Laptop Targus TSB89104AP-70 15.6 inch Sport Backpack - Màu đen',1,1),(22,'https://m.maihoang.com.vn/thumb/crop/1153',799000,399000,'Đế Làm Mát Cooler Master Notepal U3 (R9-NBC-8PCS-GP)',43,14,'Đế Làm Mát Cooler Master Notepal U3 (R9-NBC-8PCS-GP)',1,1),(23,'https://hanoicomputercdn.com/media/product/67336_cap_chuyen_doi_tu_lightning_to_vga_va_hdmi_2.jpg',499000,389000,'Cáp chuyển đổi từ Lightning to VGA và HDMI',42,24,'Cáp chuyển đổi từ Lightning to VGA và HDMI',1,1),(24,'http://t2.gstatic.com/images?q=tbn:ANd9GcQPP1LsjA1AEHAiTwSRViOtjeYgH75Rk8rP3oB6n2UQTXD5SakR',249000,109000,'Cáp chuyển đổi Type C sang 2 cổng 3.5mm Famale Audio Vention BGBBY 30cm ',42,6,'Cáp chuyển đổi Type C sang 2 cổng 3.5mm Famale Audio Vention BGBBY 30cm ',1,1),(25,'https://m.media-amazon.com/images/W/WEBP_402378-T2/images/I/51XiYEwbWYL._AC_SL1500_.jpg',299000,229000,'Chuột không dây Rapoo M100 Silent màu Xanh lá (USB/Bluetooth)',34,5,'Chuột không dây Rapoo M100 Silent màu Xanh lá (USB/Bluetooth)',1,1),(26,'http://edravn.com/media/product/419_lw1.jpg',799000,689000,'Bàn phím cơ Edra EK387L màu trắng Red sw (USBC/Led trắng)',2,4,'Bàn phím cơ Edra EK387L màu trắng Red sw (USBC/Led trắng)',1,1),(27,'https://lh3.googleusercontent.com/Ebf3QdGgxYenI6wS0tBfR8NKrKq20T7EkMJ_SMMZqEQQLivXEeQoVhQxbo0CNGH_cXTtq0iVKFWY2KYXum-mbX9UNS5rdlMQ=w1000-rw',229000,199000,'Bàn di chuột Logitech studio series - Xám (956-000034)',3,5,'Bàn di chuột Logitech studio series - Xám (956-000034)',1,1),(28,'https://lh3.googleusercontent.com/bZuId1xHO6foL-Rr7wxr7r_HPaKK6IECGSdzZCAohSwP8tukm_WJFny2d1ZFXuNLjVxqh6C4PwmvCc2gk4YzmKnoh4bXp0s=w1000-rw',709000,689000,'Tai nghe Dareu EH722X USB White',4,3,'Tai nghe Dareu EH722X USB White',1,1),(29,'https://pcmarket.vn/media/product/9941_66521_ghe_cong_thai_hoc_legion_yt030_grey_white_frame.jpg',1899000,1599000,'Ghế công thái học Legion YT030 Grey White Frame',4,3,'Ghế công thái học Legion YT030 Grey White Frame',1,1),(30,'https://ksd-images.lt/display/aikido/store/7b09141c98aa0ecd6bea5cb3e08d5c95.jpeg?h=2000&w=2000',60599000,35999000,'Bàn Gaming Desk Lian-Li DK-04FX',34,5,'Bàn Gaming Desk Lian-Li DK-04FX',1,1),(31,'https://hanoicomputercdn.com/media/product/66995_quat_tan_nhiet_flydigy_b5x_so_lanh_tu_tinh_cho_dien_thoai_va_may_tinh_bang_ipad.jpg',819000,819000,'Quạt tản nhiệt Flydigy B5X sò lạnh từ tính cho điện thoại và máy tính bảng ipad',32,5,'Quạt tản nhiệt Flydigy B5X sò lạnh từ tính cho điện thoại và máy tính bảng ipad',1,1),(32,'https://lh3.googleusercontent.com/CLnz8ypSJc-LbTOZ4JJSeXilHk1040JWgrz8PAkQEuECABKhEevdHfa9mTt49jyseN9v3Ow7IP1sXeTI3oNAnF3plc2bjw3zQA=w1000-rw',6499000,4999000,'Màn hình MSI MD241PW (23.8 inch/FHD/IPS/75Hz/5ms/250nits/HDMI+USBC/Loa/Trắng)',42,12,'Màn hình MSI MD241PW (23.8 inch/FHD/IPS/75Hz/5ms/250nits/HDMI+USBC/Loa/Trắng)',1,1),(33,'https://lh3.googleusercontent.com/PyG0gUhFdl1vV9Yd_bIEdGhNFfBl8oErvRoZUzcH-NCN0QiYdzx59A9QmMOYdVPly4NTR6WTE12Lfixdi3ZPT-cs7nwYkdA=w1000-rw',499000,409000,'Chuột game Logitech G203 Lilac (910-005853) (USB/RGB)',34,24,'Chuột game Logitech G203 Lilac (910-005853) (USB/RGB)',1,1),(34,'https://tandoanh.vn/wp-content/uploads/2022/02/Logitech-G213-Gaming-Keyboard-H1.jpg.webp',1269000,949000,'Bàn phím giả cơ Logitech G213 Prodigy RGB Gaming',43,24,'Bàn phím giả cơ Logitech G213 Prodigy RGB Gaming',1,1),(35,'https://phucanhcdn.com/media/product/46932_loa_microlab_2_1_bluetooth_u210_h2.jpg',499000,399000,'Loa Microlab U210 Bluetooth 2.1 Đen',34,12,'Loa Microlab U210 Bluetooth 2.1 Đen',1,1);
/*!40000 ALTER TABLE `sanpham` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `user`
--

DROP TABLE IF EXISTS `user`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `user` (
  `id` bigint NOT NULL AUTO_INCREMENT,
  `fullname` varchar(255) DEFAULT NULL,
  `password` varchar(255) DEFAULT NULL,
  `username` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=MyISAM AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `user`
--

LOCK TABLES `user` WRITE;
/*!40000 ALTER TABLE `user` DISABLE KEYS */;
INSERT INTO `user` VALUES (1,'admin','123','admin'),(3,'duc','123456','vippro'),(4,'duc','123456','vippro');
/*!40000 ALTER TABLE `user` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'test1'
--

--
-- Dumping routines for database 'test1'
--
/*!50003 DROP PROCEDURE IF EXISTS `login` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `login`(IN inusername text, IN inpassword text)
BEGIN
	select * from user where username = inusername and password=inpassword;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2022-09-14  1:46:28
