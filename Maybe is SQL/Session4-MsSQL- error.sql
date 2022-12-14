
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[OrderItems](
	[ID] [bigint] IDENTITY(1,1) NOT NULL,
	[OrderID] [bigint] NOT NULL,
	[PartID] [bigint] NOT NULL,
	[BatchNumber] [nvarchar](50) NULL,
	[Amount] [decimal](18, 2) NOT NULL,
 CONSTRAINT [PK_Transactions] PRIMARY KEY CLUSTERED 
(
	[ID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Orders]    Script Date: 8/24/2019 2:34:56 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Orders](
	[ID] [bigint] IDENTITY(1,1) NOT NULL,
	[TransactionTypeID] [bigint] NOT NULL,
	[SupplierID] [bigint] NULL,
	[SourceWarehouseID] [bigint] NULL,
	[DestinationWarehouseID] [bigint] NULL,
	[Date] [date] NOT NULL,
 CONSTRAINT [PK_SupplierHeaders] PRIMARY KEY CLUSTERED 
(
	[ID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Parts]    Script Date: 8/24/2019 2:34:56 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Parts](
	[ID] [bigint] IDENTITY(1,1) NOT NULL,
	[Name] [nvarchar](50) NOT NULL,
	[EffectiveLife] [bigint] NULL,
	[BatchNumberHasRequired] [bit] NULL,
	[MinimumAmount] [bigint] NULL,
 CONSTRAINT [PK_Parts] PRIMARY KEY CLUSTERED 
(
	[ID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Suppliers]    Script Date: 8/24/2019 2:34:56 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Suppliers](
	[ID] [bigint] IDENTITY(1,1) NOT NULL,
	[Name] [nvarchar](50) NOT NULL,
 CONSTRAINT [PK_Suppliers] PRIMARY KEY CLUSTERED 
(
	[ID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[TransactionTypes]    Script Date: 8/24/2019 2:34:56 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[TransactionTypes](
	[ID] [bigint] IDENTITY(1,1) NOT NULL,
	[Name] [nvarchar](50) NOT NULL,
 CONSTRAINT [PK_TransactionTypes] PRIMARY KEY CLUSTERED 
(
	[ID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Warehouses]    Script Date: 8/24/2019 2:34:56 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Warehouses](
	[ID] [bigint] IDENTITY(1,1) NOT NULL,
	[Name] [nvarchar](50) NOT NULL,
 CONSTRAINT [PK_Stocks] PRIMARY KEY CLUSTERED 
(
	[ID] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON) ON [PRIMARY]
) ON [PRIMARY]
GO
SET IDENTITY_INSERT [dbo].[OrderItems] ON 

INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (1, 1, 8, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (2, 1, 6, N'SL1258', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (3, 1, 1, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (5, 1, 10, N'TR740LKO', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (6, 1, 12, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (7, 2, 4, N'XP985S', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (9, 2, 7, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (10, 2, 3, N'', CAST(10.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (11, 2, 8, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (12, 3, 4, N'XM471W', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (13, 3, 5, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (14, 3, 1, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (16, 3, 2, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (17, 4, 8, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (19, 4, 3, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (20, 5, 10, N'TB44705KO', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (21, 5, 12, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (22, 5, 6, N'KL4701', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (23, 5, 7, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (25, 5, 11, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (26, 6, 8, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (27, 6, 2, N'', CAST(7.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (29, 6, 12, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (30, 6, 4, N'XP985S', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (31, 7, 11, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (32, 7, 6, N'KL4701', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (33, 7, 3, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (36, 8, 3, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (37, 8, 8, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (38, 9, 9, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (39, 9, 6, N'KL4701', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (41, 9, 11, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (42, 10, 12, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (43, 10, 8, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (44, 11, 7, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (45, 11, 1, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (46, 11, 2, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (47, 11, 10, N'TJ140OO', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (48, 12, 6, N'KL4701', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (49, 12, 11, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (50, 12, 3, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (51, 12, 9, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (52, 13, 4, N'XM471W', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (53, 14, 5, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (54, 14, 11, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (55, 14, 12, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (56, 15, 4, N'XM471W', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (57, 15, 8, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (58, 15, 6, N'KO4570', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (60, 16, 8, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (61, 16, 12, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (62, 16, 10, N'TJ140OO', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (63, 16, 7, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (64, 17, 7, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (65, 17, 9, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (67, 18, 1, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (68, 18, 5, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (69, 18, 4, N'XM471W', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (72, 19, 4, N'XM471W', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (73, 19, 1, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (74, 20, 4, N'XM471W', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (75, 20, 7, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (77, 21, 1, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (78, 21, 8, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (79, 21, 6, N'KO4570', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (80, 22, 9, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (81, 22, 11, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (82, 22, 5, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (83, 23, 3, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (84, 23, 5, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (85, 23, 6, N'SL1258', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (86, 23, 10, N'TJ140OO', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (87, 24, 2, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (88, 24, 1, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (89, 24, 11, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (91, 25, 8, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (93, 25, 11, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (95, 26, 5, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (96, 26, 9, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (97, 27, 7, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (98, 27, 2, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (99, 28, 11, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (100, 28, 3, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (101, 28, 4, N'XP985S', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (102, 29, 1, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (104, 29, 2, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (105, 29, 5, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (106, 29, 4, N'XP985S', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (107, 30, 11, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (108, 30, 6, N'SL1258', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (110, 31, 10, N'TR740LKO', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (112, 31, 12, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (113, 32, 11, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (114, 32, 10, N'TJ140OO', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (115, 32, 12, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (116, 33, 8, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (118, 33, 7, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (119, 34, 8, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (120, 34, 9, N'', CAST(16.00 AS Decimal(18, 2)))
GO
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (122, 34, 7, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (123, 35, 10, N'TB44705KO', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (124, 35, 1, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (125, 35, 3, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (126, 35, 5, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (127, 36, 7, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (128, 36, 2, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (129, 37, 8, N'', CAST(1.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (130, 37, 11, N'', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (131, 37, 4, N'XM471W', CAST(2.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (132, 37, 2, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (133, 37, 1, N'', CAST(3.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (134, 37, 3, N'', CAST(4.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (135, 37, 7, N'', CAST(5.00 AS Decimal(18, 2)))
INSERT [dbo].[OrderItems] ([ID], [OrderID], [PartID], [BatchNumber], [Amount]) VALUES (136, 37, 7, N'', CAST(4.00 AS Decimal(18, 2)))
SET IDENTITY_INSERT [dbo].[OrderItems] OFF
SET IDENTITY_INSERT [dbo].[Orders] ON 

INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (1, 1, 3, NULL, 2, CAST(N'2019-08-18' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (2, 1, 4, NULL, 1, CAST(N'2019-08-18' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (3, 1, 4, NULL, 1, CAST(N'2019-08-18' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (4, 1, 3, NULL, 2, CAST(N'2019-08-18' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (5, 1, 3, NULL, 2, CAST(N'2019-08-18' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (6, 1, 2, NULL, 2, CAST(N'2019-08-18' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (7, 1, 3, NULL, 1, CAST(N'2019-08-18' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (8, 1, 2, NULL, 1, CAST(N'2019-08-22' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (9, 1, 3, NULL, 2, CAST(N'2019-08-22' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (10, 1, 4, NULL, 2, CAST(N'2019-08-22' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (11, 1, 3, NULL, 1, CAST(N'2019-08-23' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (12, 1, 4, NULL, 2, CAST(N'2019-08-23' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (13, 1, 2, NULL, 2, CAST(N'2019-08-23' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (14, 1, 3, NULL, 2, CAST(N'2019-08-23' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (15, 1, 2, NULL, 2, CAST(N'2019-08-23' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (16, 1, 3, NULL, 2, CAST(N'2019-08-23' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (17, 1, 4, NULL, 2, CAST(N'2019-08-23' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (18, 1, 1, NULL, 2, CAST(N'2019-08-23' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (19, 1, 1, NULL, 2, CAST(N'2019-08-24' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (20, 1, 2, NULL, 2, CAST(N'2019-08-24' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (21, 1, 2, NULL, 2, CAST(N'2019-08-24' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (22, 1, 4, NULL, 2, CAST(N'2019-08-24' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (23, 1, 1, NULL, 2, CAST(N'2019-08-24' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (24, 1, 3, NULL, 2, CAST(N'2019-08-24' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (25, 1, 3, NULL, 1, CAST(N'2019-08-24' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (26, 1, 2, NULL, 2, CAST(N'2019-08-24' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (27, 2, NULL, 1, 2, CAST(N'2019-08-18' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (28, 2, NULL, 1, 2, CAST(N'2019-08-19' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (29, 2, NULL, 2, 1, CAST(N'2019-08-19' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (30, 2, NULL, 2, 1, CAST(N'2019-08-19' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (31, 2, NULL, 2, 1, CAST(N'2019-08-20' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (32, 2, NULL, 1, 2, CAST(N'2019-08-23' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (33, 2, NULL, 1, 2, CAST(N'2019-08-20' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (34, 2, NULL, 2, 1, CAST(N'2019-08-22' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (35, 2, NULL, 2, 1, CAST(N'2019-08-22' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (36, 2, NULL, 1, 2, CAST(N'2019-08-24' AS Date))
INSERT [dbo].[Orders] ([ID], [TransactionTypeID], [SupplierID], [SourceWarehouseID], [DestinationWarehouseID], [Date]) VALUES (37, 2, NULL, 2, 1, CAST(N'2019-08-24' AS Date))
SET IDENTITY_INSERT [dbo].[Orders] OFF
SET IDENTITY_INSERT [dbo].[Parts] ON 

INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (1, N'BLUE STORM Battery 12V 45Ah 54459', 650, 0, 10)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (2, N'BLUE STORM Battery 12V 70Ah 80D26L', 700, 0, 10)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (3, N'CT20 Turbo Turbocharger', NULL, 0, 0)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (4, N'michelin tyres   225/50 ZR 16', 1000, 1, 6)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (5, N'MOCA Engine Timing Chain Kit ', NULL, 0, 0)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (6, N'CT16V Turbo Cartridge Core', NULL, 1, 0)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (7, N'iFJF 21100-35520 New Carburetor', NULL, 0, 0)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (8, N'ALAVENTE 21100-35463 Carburetor ', NULL, 0, 0)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (9, N'Carter P4594 In-Line Electric Fuel Pump', NULL, 0, 0)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (10, N'Electric Fuel Pump Universal Fuel Pump 12V ', NULL, 1, 0)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (11, N'Gast AT05 Rotary Vane ', NULL, 0, 0)
INSERT [dbo].[Parts] ([ID], [Name], [EffectiveLife], [BatchNumberHasRequired], [MinimumAmount]) VALUES (12, N'FAN 24" M480', 200, 0, 50)
SET IDENTITY_INSERT [dbo].[Parts] OFF
SET IDENTITY_INSERT [dbo].[Suppliers] ON 

INSERT [dbo].[Suppliers] ([ID], [Name]) VALUES (1, N'MJOK petroleum')
INSERT [dbo].[Suppliers] ([ID], [Name]) VALUES (2, N'Kazan Bosch  Center')
INSERT [dbo].[Suppliers] ([ID], [Name]) VALUES (3, N'Denso Corp')
INSERT [dbo].[Suppliers] ([ID], [Name]) VALUES (4, N'Castrol Crop')
SET IDENTITY_INSERT [dbo].[Suppliers] OFF
SET IDENTITY_INSERT [dbo].[TransactionTypes] ON 

INSERT [dbo].[TransactionTypes] ([ID], [Name]) VALUES (1, N'Purchase Order')
INSERT [dbo].[TransactionTypes] ([ID], [Name]) VALUES (2, N'Warehouse Management')
SET IDENTITY_INSERT [dbo].[TransactionTypes] OFF
SET IDENTITY_INSERT [dbo].[Warehouses] ON 

INSERT [dbo].[Warehouses] ([ID], [Name]) VALUES (1, N'Central Warehouse')
INSERT [dbo].[Warehouses] ([ID], [Name]) VALUES (2, N'Volka  Warehouse')
SET IDENTITY_INSERT [dbo].[Warehouses] OFF
ALTER TABLE [dbo].[OrderItems]  WITH CHECK ADD  CONSTRAINT [FK_OrderItems_Orders] FOREIGN KEY([OrderID])
REFERENCES [dbo].[Orders] ([ID])
GO
ALTER TABLE [dbo].[OrderItems] CHECK CONSTRAINT [FK_OrderItems_Orders]
GO
ALTER TABLE [dbo].[OrderItems]  WITH CHECK ADD  CONSTRAINT [FK_Transactions_Parts] FOREIGN KEY([PartID])
REFERENCES [dbo].[Parts] ([ID])
GO
ALTER TABLE [dbo].[OrderItems] CHECK CONSTRAINT [FK_Transactions_Parts]
GO
ALTER TABLE [dbo].[Orders]  WITH CHECK ADD  CONSTRAINT [FK_Headers_Stocks] FOREIGN KEY([SourceWarehouseID])
REFERENCES [dbo].[Warehouses] ([ID])
GO
ALTER TABLE [dbo].[Orders] CHECK CONSTRAINT [FK_Headers_Stocks]
GO
ALTER TABLE [dbo].[Orders]  WITH CHECK ADD  CONSTRAINT [FK_Headers_Stocks1] FOREIGN KEY([DestinationWarehouseID])
REFERENCES [dbo].[Warehouses] ([ID])
GO
ALTER TABLE [dbo].[Orders] CHECK CONSTRAINT [FK_Headers_Stocks1]
GO
ALTER TABLE [dbo].[Orders]  WITH CHECK ADD  CONSTRAINT [FK_Headers_Suppliers] FOREIGN KEY([SupplierID])
REFERENCES [dbo].[Suppliers] ([ID])
GO
ALTER TABLE [dbo].[Orders] CHECK CONSTRAINT [FK_Headers_Suppliers]
GO
ALTER TABLE [dbo].[Orders]  WITH CHECK ADD  CONSTRAINT [FK_Headers_TransactionTypes] FOREIGN KEY([TransactionTypeID])
REFERENCES [dbo].[TransactionTypes] ([ID])
GO
ALTER TABLE [dbo].[Orders] CHECK CONSTRAINT [FK_Headers_TransactionTypes]




--1.Liệt kê các order có năm là 2014
select * from Orders where YEAR(date)=2019
--2.liệt kê các order có name của sourcewarehouse "central warehouse"
select Orders.* from Orders inner join Warehouses on Orders.SourceWarehouseID=Warehouses.ID where Name='central warehouse'
--3.liệt kê số lượng part khác nhau(khác batchnumber thì lấy 1 lần) theo từng order partID,Tên part, order ID
select parts.ID,parts.Name,OrderItems.ID,OrderItems.OrderID from Parts inner join OrderItems on parts.ID=OrderItems.PartID
--4.liệt kê order có suppliers name='Kaza Bosch Centel' và tên transaction
select * from Orders inner join Suppliers on Orders.SupplierID=Suppliers.ID where Name='Kazan Bosch Center'