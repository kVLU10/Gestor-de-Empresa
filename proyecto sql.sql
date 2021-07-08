IF OBJECT_ID('dbo.SALE_DETAIL', 'U') IS NOT NULL
	DROP TABLE dbo.SALE_DETAIL
GO
IF OBJECT_ID('dbo.SALE', 'U') IS NOT NULL
	DROP TABLE dbo.SALE
GO
IF OBJECT_ID('dbo.PRODUCT', 'U') IS NOT NULL
	DROP TABLE dbo.PRODUCT
GO
IF OBJECT_ID('dbo.CATEGORY', 'U') IS NOT NULL
	DROP TABLE dbo.CATEGORY
GO
IF OBJECT_ID('dbo.STORE', 'U') IS NOT NULL 
  DROP TABLE dbo.STORE 
GO
IF OBJECT_ID('dbo.ASISTENCIA', 'U') IS NOT NULL 
  DROP TABLE dbo.ASISTENCIA 
GO
IF OBJECT_ID('dbo.PERSONAL', 'U') IS NOT NULL
	DROP TABLE dbo.PERSONAL
GO
IF OBJECT_ID('dbo.CUSTOMER', 'U') IS NOT NULL
	DROP TABLE dbo.CUSTOMER
GO
IF OBJECT_ID('dbo.SALES_USER', 'U') IS NOT NULL
	DROP TABLE dbo.SALES_USER
GO
CREATE TABLE SALES_USER (
	id INT IDENTITY(1,1) NOT NULL PRIMARY KEY,
	first_name VARCHAR(100) NOT NULL,
	second_name VARCHAR(100) NOT NULL,
	first_last_name VARCHAR(100) NOT NULL,
	second_last_name VARCHAR(100) NOT NULL,
	phone_number VARCHAR(50) NULL,
	document_number VARCHAR(15) NOT NULL UNIQUE,
	personal_email VARCHAR(150) NOT NULL UNIQUE,
	address VARCHAR(150) NULL,
	username VARCHAR(100) UNIQUE NOT NULL,
	password VARCHAR(100) NOT NULL,	
	birthday DATE NULL,
	status VARCHAR(150) NULL
)
GO
CREATE TABLE CUSTOMER (
	id INT NOT NULL PRIMARY KEY,
	customer_points INT NULL,
)
GO
ALTER TABLE CUSTOMER
ADD CONSTRAINT FK_CUSTOMER_USER_ID FOREIGN KEY (id)
REFERENCES SALES_USER(id)
ON DELETE CASCADE
GO

CREATE TABLE PERSONAL (
	id INT NOT NULL PRIMARY KEY,
	salary DECIMAL(10,2),
	incress DECIMAL(10,2) NULL,
	huella IMAGE NULL,
	activo VARCHAR(50) NULL 
)
GO
ALTER TABLE PERSONAL
ADD CONSTRAINT FK_PERSONAL_USER_ID FOREIGN KEY (id)
REFERENCES SALES_USER(id)
ON DELETE CASCADE

GO
CREATE TABLE ASISTENCIA (
	fecha DATE NULL,
	hora VARCHAR(50) NULL,
	checka VARCHAR(50) NULL,
	ioput VARCHAR(50) NULL,
	personal_id INT NULL
)
GO
ALTER TABLE ASISTENCIA
ADD CONSTRAINT FK_ASISTENCIA_PERSONAL_ID FOREIGN KEY (personal_id)
REFERENCES PERSONAL(id)
ON DELETE NO ACTION

GO
CREATE TABLE STORE (
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	name VARCHAR(150) NULL,
	address VARCHAR (150) NULL,
	status VARCHAR(150) NULL
)

GO
CREATE TABLE CATEGORY(
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	name VARCHAR(250) NOT NULL,
)

GO
CREATE TABLE PRODUCT(
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	name VARCHAR(250) NOT NULL,
	quantity INT NOT NULL,
	bonus_points INT NOT NULL,
	status VARCHAR(150) NULL,
	price DECIMAL(10, 2) NOT NULL,
	brand VARCHAR(50) NOT NULL,
	description VARCHAR(500) NOT NULL,
	store_id INT NULL,
	category_id INT NULL
)
GO
ALTER TABLE PRODUCT
ADD CONSTRAINT FK_PRODUCT_STORE_ID FOREIGN KEY (store_id)
REFERENCES STORE(id)
ON DELETE NO ACTION

GO
ALTER TABLE PRODUCT
ADD CONSTRAINT FK_CATEGORY_ID FOREIGN KEY (category_id)
REFERENCES CATEGORY(id)
ON DELETE NO ACTION

--GO
--CREATE TABLE STORE_PRODUCT(
--	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
--	stock INT NOT NULL,
--	min_stock INT NOT NULL,
--	discount DECIMAL(10,2) NULL,
--	store_id INT NOT NULL,
--	product_id INT NOT NULL,
--	status CHAR(1) NULL
--)
--GO
--ALTER TABLE STORE_PRODUCT
--ADD CONSTRAINT FK_STORE_PRODUCT_STORE_ID FOREIGN KEY (store_id)
--REFERENCES STORE(id)
--ON DELETE CASCADE

--GO
--ALTER TABLE STORE_PRODUCT
--ADD CONSTRAINT FK_STORE_PRODUCT_PRODUCT_ID FOREIGN KEY (product_id)
--REFERENCES PRODUCT(id)
--ON DELETE CASCADE

GO
CREATE TABLE SALE(
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	total DECIMAL(10, 2) NOT NULL,
	delivery_adress VARCHAR(50) NULL,
	quantity INT NULL,
	status CHAR(1) NULL,
	transaction_date DATE NOT NULL,
	customer_id INT NOT NULL,
	personal_id INT NOT NULL,
	store_id INT NULL
)
GO
ALTER TABLE SALE
ADD CONSTRAINT FK_SALE_CUSTOMER_ID FOREIGN KEY (customer_id)
REFERENCES CUSTOMER(id)
ON DELETE CASCADE
GO
ALTER TABLE SALE
ADD CONSTRAINT FK_SALE_PERSONAL_ID FOREIGN KEY (personal_id)
REFERENCES PERSONAL(id)
ON DELETE NO ACTION
GO
ALTER TABLE SALE
ADD CONSTRAINT FK_SALE_STORE_ID FOREIGN KEY (store_id)
REFERENCES STORE(id)
ON DELETE CASCADE
GO
CREATE TABLE SALE_DETAIL (
	id INT NOT NULL PRIMARY KEY IDENTITY(1,1),
	sale_id INT NOT NULL,
	product_id INT NOT NULL,
	quantity INT NULL,
	subtotal DECIMAL(10,2) NULL,
)
GO
ALTER TABLE SALE_DETAIL
ADD CONSTRAINT FK_SALE_DETAIL_SALE_ID FOREIGN KEY (sale_id)
REFERENCES SALE(id)
ON DELETE CASCADE
GO
ALTER TABLE SALE_DETAIL
ADD CONSTRAINT FK_SALE_DETAIL_PRODUCT_ID FOREIGN KEY (product_id)
REFERENCES PRODUCT(id)

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddUser]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddUser]
END
GO
CREATE PROCEDURE dbo.usp_AddUser(
	@vusername VARCHAR(100),
	@vpassword VARCHAR(100),
	@vfirst_name VARCHAR(100),
	@vsecond_name VARCHAR(100),
	@vfirst_last_name VARCHAR(100),
	@vsecond_last_name VARCHAR(100),
	@vdocument_number VARCHAR(15),
	@vphone_number VARCHAR(50),
	@vaddress VARCHAR(150),
	@vpersonal_email VARCHAR(150),	
	@dbirthday DATE,
	@vstatus VARCHAR(150),
	@iid INT OUT
 ) AS 
	BEGIN
		INSERT INTO SALES_USER (username, password, first_name, second_name, first_last_name, second_last_name, 
								document_number, phone_number, address, personal_email, birthday, status)
		SELECT 	@vusername, @vpassword, @vfirst_name, @vsecond_name, @vfirst_last_name, @vsecond_last_name, 
				@vdocument_number, @vphone_number, @vaddress, @vpersonal_email, @dbirthday, @vstatus

		SET @iid = SCOPE_IDENTITY()	
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateUser]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateUser]
END
GO
CREATE PROCEDURE dbo.usp_UpdateUser(
	@vusername VARCHAR(100),
	@vpassword VARCHAR(100),
	@vfirst_name VARCHAR(100),
	@vsecond_name VARCHAR(100),
	@vfirst_last_name VARCHAR(100),
	@vsecond_last_name VARCHAR(100),
	@vdocument_number VARCHAR(15),
	@vphone_number VARCHAR(50),
	@vaddress VARCHAR(150),
	@vpersonal_email VARCHAR(150),	
	@dbirthday DATE,
	@vstatus VARCHAR(150),
	@iid INT
 ) AS 
	BEGIN
		UPDATE SALES_USER
		SET username=@vusername, password=@vpassword, first_name=@vfirst_name, second_name=@vsecond_name, first_last_name=@vfirst_last_name, second_last_name=@vsecond_last_name,
			document_number=@vdocument_number, phone_number=@vphone_number, address=@vaddress, personal_email=@vpersonal_email, birthday=@dbirthday, status=@vstatus
		WHERE id=@iid
	END

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddStore]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddStore]
END
GO
CREATE PROCEDURE dbo.usp_AddStore(
	@name VARCHAR(150),
	@address VARCHAR(150),
	@status VARCHAR(150),
	@id INT OUT
 ) AS 
	BEGIN
		INSERT INTO STORE(name, address, status)
		SELECT @name, @address, @status
		SET @id = SCOPE_IDENTITY()	
	END
	
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddStore 	@name='Almacen 5', @address='Pueblo Azul', @status='Habilitado',
						@id= @new_identity OUTPUT
EXEC dbo.usp_AddStore 	@name='Almacen 6', @address='Puruchuco', @status='Habilitado', 
						@id= @new_identity OUTPUT

--INSERT INTO STORE(name, address, postal_code)
--VALUES ('San Miguel', 'Av. La Marina 1230', '51203')
--GO
--INSERT INTO STORE(name, address, postal_code)
--VALUES ('Puruchuco', 'Av. Carretera Central', '51205')
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateStore]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateStore]
END
GO
CREATE PROCEDURE dbo.usp_UpdateStore(
	@name VARCHAR(150),
	@address VARCHAR(150),
	@status VARCHAR(150),
	@id INT
 ) AS 
	BEGIN
		UPDATE STORE
		SET name=@name, address=@address, status=@status
		WHERE id=@id
	END
	
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteStore]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteStore]
END
GO
CREATE PROCEDURE dbo.usp_DeleteStore(
	@id INT
 ) AS 
	BEGIN
		UPDATE STORE
		SET status='Inhabilitado'
		WHERE id=@id
	END
	
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllStores]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllStores]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllStores
AS
	SELECT *
	FROM STORE
	ORDER BY name
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryStoreById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryStoreById]
END
GO
CREATE PROCEDURE dbo.usp_QueryStoreById(
	@id INT
 )
AS
	SELECT *
	FROM STORE
	WHERE id=@id
	
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddProduct]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddProduct]
END

GO
CREATE PROCEDURE dbo.usp_AddProduct(
	@name VARCHAR(250),
	@quantity INT,
	@bonus_points INT,
	@status VARCHAR(150),
	@price DECIMAL(10,2),
	@brand VARCHAR(50),
	@description VARCHAR(500),
	@id INT OUT
 ) AS 
	BEGIN
		INSERT INTO PRODUCT(name, quantity, bonus_points, status, price, brand, description)
		SELECT @name, @quantity, @bonus_points, 'Available', @price, @brand,  @description
		SET @id = SCOPE_IDENTITY()	
	END
	
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateProduct]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateProduct]
END

GO
CREATE PROCEDURE dbo.usp_UpdateProduct(
	@name VARCHAR(250),
	@quantity INT,
	@bonus_points INT,
	@status CHAR(1),
	@price DECIMAL(10,2),
	@brand VARCHAR(50),
	@description VARCHAR(500),
	@store_id INT,
	@id INT
 ) AS 
	BEGIN
		UPDATE PRODUCT
		SET name=@name, quantity=@quantity, bonus_points=@bonus_points, status=@status, price=@price, brand=@brand,
			description=@description, store_id=@store_id
		WHERE id = @id	
	END
	
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteProduct]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteProduct]
END
GO
CREATE PROCEDURE dbo.usp_DeleteProduct(
	@id INT
 ) AS 
	BEGIN
		UPDATE PRODUCT
		SET status='Unavailable'
		WHERE id = @id	
	END

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllProducts]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllProducts]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllProducts(@id INT)
AS
	SELECT * 
	FROM PRODUCT p
	WHERE p.id = @id AND p.status='Available'
	ORDER BY name
	
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryProductById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryProductById]
END
GO
CREATE PROCEDURE dbo.usp_QueryProductById(@id INT)
AS
	SELECT * 
	FROM PRODUCT p
	WHERE p.id = @id
GO	
--Hasta aca avance (julio)
-----------------------------------------------------------
DECLARE @new_identity INT
EXEC dbo.usp_AddProduct @name = 'Nike-40', @quantity = 100, @bonus_points = 40, @status = 'Disponible', @price = 90, @brand = 'Calzado', 
						@description = 'Zapato marca Nike, talla 39 para hombres.', @id= @new_identity OUTPUT
EXEC dbo.usp_AddProduct @name = 'Adidas-39', @quantity = 50, @bonus_points = 35, @status = 'Disponible', @price = 95, @brand = 'Calzado', 
						@description = 'Zapato marca Adidas, talla 38 para mujeres.', @id= @new_identity OUTPUT		
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddPersonal]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddPersonal]
END

GO
CREATE PROCEDURE dbo.usp_AddPersonal(
	@username VARCHAR(100),
	@password VARCHAR(100),
	@first_name VARCHAR(100),
	@second_name VARCHAR(100),
	@first_last_name VARCHAR(100),
	@second_last_name VARCHAR(100),
	@document_number VARCHAR(15),
	@phone_number VARCHAR(50),
	@address VARCHAR(150),
	@personal_email VARCHAR(150),	
	@birthday DATE,
	@status VARCHAR(150),
	@salary DECIMAL(10,2),
	@incress DECIMAL(10,2),
	@huella IMAGE,
	@activo VARCHAR(50), 
	@id INT OUT
 ) AS 
	BEGIN
		EXEC dbo.usp_AddUser @vusername = @username, @vpassword = @password, @vfirst_name = @first_name, 
							 @vsecond_name = @second_name, @vfirst_last_name = @first_last_name, 
							 @vsecond_last_name = @second_last_name, @vdocument_number = @document_number, 
							 @vphone_number = @phone_number, @vaddress = @address, @vpersonal_email = @personal_email, 
							 @dbirthday = @birthday, @vstatus = @status, @iid = @id OUTPUT
		INSERT INTO PERSONAL(id, salary, incress, huella, activo)
		SELECT @id, @salary, @incress, @huella, @activo	
	END
GO		
DECLARE @new_identity INT
EXEC dbo.usp_AddPersonal @username = 'daquino', @password = 'password', @first_name = 'Daniel', @second_name = 'Enrique', 
						 @first_last_name = 'Aquino', @second_last_name = 'Montaño', @document_number = '71440985',
						 @phone_number = '943947779', @address = 'Chorrillos', @personal_email = 'daquino@gmail.com',
						 @birthday = '20000718', @status = 'Habilitado', @salary = 2500, @incress = 800, @huella = NULL, 
						 @activo = NULL, @id= @new_identity OUTPUT
EXEC dbo.usp_AddPersonal @username = 'jaquino', @password = 'password', @first_name = 'Javier', @second_name = 'Enrique', 
						 @first_last_name = 'Aquino', @second_last_name = 'Huaman', @document_number = '09846423',
						 @phone_number = '999262429', @address = 'Lince', @personal_email = 'jaquino@gmail.com',
						 @birthday = '19740530', @status = 'Habilitado', @salary = 5000, @incress = 1000, @huella = NULL, 
						 @activo = NULL, @id= @new_identity OUTPUT
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdatePersonal]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdatePersonal]
END
GO
CREATE PROCEDURE dbo.usp_UpdatePersonal(
	@username VARCHAR(100),
	@password VARCHAR(100),
	@first_name VARCHAR(100),
	@second_name VARCHAR(100),
	@first_last_name VARCHAR(100),
	@second_last_name VARCHAR(100),
	@document_number VARCHAR(15),
	@phone_number VARCHAR(50),
	@address VARCHAR(150),
	@personal_email VARCHAR(150),	
	@birthday DATE,
	@status VARCHAR(150),
	@salary DECIMAL(10,2),
	@incress DECIMAL(10,2),
	@huella IMAGE,
	@activo VARCHAR(50), 
	@id INT
) AS
	BEGIN
		EXEC dbo.usp_UpdateUser @vusername = @username, @vpassword = @password, @vfirst_name = @first_name, 
								@vsecond_name = @second_name, @vfirst_last_name = @first_last_name, 
								@vsecond_last_name = @second_last_name, @vdocument_number = @document_number, 
								@vphone_number = @phone_number, @vaddress = @address, @vpersonal_email = @personal_email, 
								@dbirthday = @birthday, @vstatus = @status, @iid = @id
		UPDATE PERSONAL
		SET salary=@salary, incress=@incress, huella=@huella, activo=@activo
		WHERE id=@id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllPersonal]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllPersonal]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllPersonal
AS
	SELECT SU.id as id, SU.username as username, SU.first_name as first_name, SU.second_name as second_name, SU.first_last_name as first_last_name, 
			SU.second_last_name as second_last_name, SU.password as password, SU.document_number as document_number, SU.phone_number as phone_number,
			SU.address as address, SU.personal_email as personal_email, SU.birthday as birthday, SU.status as status, P.salary as salary, 
			P.incress as incress, P.huella as huella, P.activo as activo
	FROM PERSONAL P
	INNER JOIN SALES_USER SU ON SU.id = P.id
	ORDER BY SU.first_last_name
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryPersonalById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryPersonalById]
END
GO
CREATE PROCEDURE dbo.usp_QueryPersonalById(
	@personal_id INT
)
AS
	SELECT SU.id as id, SU.username as username, SU.first_name as first_name, SU.second_name as second_name, SU.first_last_name as first_last_name, 
			SU.second_last_name as second_last_name, SU.password as password, SU.document_number as document_number, SU.phone_number as phone_number,
			SU.address as address, SU.personal_email as personal_email, SU.birthday as birthday, SU.status as status, P.salary as salary, 
			P.incress as incress, P.huella as huella, P.activo as activo
	FROM PERSONAL P
	INNER JOIN SALES_USER SU ON SU.id = P.id
	WHERE P.id = @personal_id
	ORDER BY SU.first_last_name
GO

-----------------------------------------------------------
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddStoreProduct]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddStoreProduct]
END
GO
CREATE PROCEDURE dbo.usp_AddStoreProduct(
	@product_id INT,
	@store_id INT,
	@stock INT,
	@min_stock INT,
	@discount DECIMAL(10,2),
	@id INT OUT
) AS
	BEGIN
		INSERT INTO STORE_PRODUCT(stock, min_stock, discount, store_id, product_id, status)
		SELECT @stock, @min_stock, @discount, @store_id, @product_id, 'A'
		
		SET @id = SCOPE_IDENTITY()
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddStoreProduct @product_id=1, @store_id=1, @stock=60, @min_stock=5, @discount=0, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddStoreProduct @product_id=1, @store_id=2, @stock=40, @min_stock=5, @discount=0, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddStoreProduct @product_id=2, @store_id=1, @stock=30, @min_stock=5, @discount=0.1, @id=@new_identity OUTPUT
EXEC dbo.usp_AddStoreProduct @product_id=2, @store_id=2, @stock=20, @min_stock=5, @discount=0.2, @id=@new_identity OUTPUT 	
EXEC dbo.usp_AddStoreProduct @product_id=3, @store_id=1, @stock=35, @min_stock=5, @discount=0.1, @id=@new_identity OUTPUT
EXEC dbo.usp_AddStoreProduct @product_id=3, @store_id=2, @stock=35, @min_stock=5, @discount=0.1, @id=@new_identity OUTPUT 	
EXEC dbo.usp_AddStoreProduct @product_id=4, @store_id=1, @stock=15, @min_stock=4, @discount=0.5, @id=@new_identity OUTPUT 	
EXEC dbo.usp_AddStoreProduct @product_id=4, @store_id=2, @stock=15, @min_stock=4, @discount=0, @id=@new_identity OUTPUT 	
EXEC dbo.usp_AddStoreProduct @product_id=5, @store_id=1, @stock=19, @min_stock=4, @discount=0.1, @id=@new_identity OUTPUT 	
EXEC dbo.usp_AddStoreProduct @product_id=5, @store_id=2, @stock=19, @min_stock=4, @discount=0, @id=@new_identity OUTPUT 	
EXEC dbo.usp_AddStoreProduct @product_id=6, @store_id=1, @stock=10, @min_stock=5, @discount=0, @id=@new_identity OUTPUT 	
EXEC dbo.usp_AddStoreProduct @product_id=6, @store_id=2, @stock=18, @min_stock=5, @discount=0.20, @id=@new_identity OUTPUT 	

GO

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllBooksFromStore]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllBooksFromStore]
END
GO
--Stored procedure para consultar los libros de una tienda:
CREATE PROCEDURE dbo.usp_QueryAllBooksFromStore (
	@store_id INT
)
AS
	SELECT sp.id AS ID, s.id AS STORE_ID, s.name AS STORE_NAME, s.address AS ADDRESS, s.postal_code AS POSTAL_CODE, p.id AS PRODUCT_ID, p.name AS NAME, p.description AS DESCRIPTION, p.stock AS STOCK_TOTAL, p.price AS PRICE, bp.title AS TITLE, bp.author AS AUTHOR, bp.edition AS EDITION, bp.editorial AS EDITORIAL, bp.year AS YEAR, sp.discount AS DISCOUNT, sp.stock AS STOCK, sp.min_stock AS MIN_STOCK
	FROM STORE s, PRODUCT p, STORE_PRODUCT sp, BOOK_PRODUCT bp
	WHERE 	s.id=@store_id AND
		s.id = sp.store_id AND
		sp.status = 'A' AND
		sp.product_id = p.id AND
		p.id = bp.id
GO
--EXEC dbo.usp_QueryAllBooksFromStore @store_id=1
--GO	
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryBookFromStoreByStoreId]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryBookFromStoreByStoreId]
END
GO
--Stored procedure para obtener los datos de un libro de una tienda
CREATE PROCEDURE dbo.usp_QueryBookFromStoreByStoreId (
	@store_id INT,
	@product_id INT
)
AS
	SELECT s.name AS STORE_NAME, sp.id AS STORE_PRODUCT_ID, bp.id AS PRODUCT_ID, bp.title AS TITLE, bp.author AS AUTHOR, p.description AS DESCRIPTION, p.price AS PRICE, sp.discount AS DISCOUNT, sp.min_stock AS MIN_STOCK, p.price*(1-sp.discount) AS PRICE_AFTER_DISCOUNT, sp.stock AS STOCK, sp.status AS STATUS
	FROM STORE s, PRODUCT p, STORE_PRODUCT sp, BOOK_PRODUCT bp
	WHERE s.id = @store_id AND
		p.id = @product_id AND
		s.id = sp.store_id AND
		sp.product_id = p.id AND
		p.id = bp.id
GO
--EXEC dbo.usp_QueryBookFromStoreByStoreId @store_id=1, @product_id=1
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllElectronicsFromStore]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllElectronicsFromStore]
END
GO
--Stored procedure para consultar los productos electrónicos de una tienda:
CREATE PROCEDURE dbo.usp_QueryAllElectronicsFromStore (
	@store_id INT
)
AS
	SELECT sp.id AS ID, s.id AS STORE_ID, s.name AS STORE_NAME, s.address AS ADDRESS, s.postal_code AS POSTAL_CODE, p.id AS PRODUCT_ID, p.name AS NAME, p.description AS DESCRIPTION, p.stock AS STOCK_TOTAL, ep.brand AS BRAND, ep.family AS FAMILY, ep.model AS MODEL, p.price AS PRICE, sp.discount AS DISCOUNT, sp.stock AS STOCK, sp.min_stock AS MIN_STOCK
	FROM STORE s, PRODUCT p, STORE_PRODUCT sp, ELECTRONIC_PRODUCT ep
	WHERE 	s.id=@store_id AND
		s.id = sp.store_id AND
		sp.status = 'A' AND
		sp.product_id = p.id AND
		p.id = ep.id
GO
--EXEC dbo.usp_QueryAllElectronicsFromStore @store_id=1
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryElectronicFromStoreByStoreId]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryElectronicFromStoreByStoreId]
END
GO
--Stored procedure para obtener los datos de un producto electrónico de una tienda
CREATE PROCEDURE dbo.usp_QueryElectronicFromStoreByStoreId (
	@store_id INT,
	@product_id INT
)
AS
	SELECT s.name AS STORE_NAME,  sp.id AS STORE_PRODUCT_ID,  p.id AS PRODUCT_ID, p.name AS NAME, ep.family AS FAMILY, ep.model AS MODEL, p.description AS DESCRIPTION, p.price AS PRICE, sp.discount AS DISCOUNT, sp.min_stock AS MIN_STOCK,p.price*(1-sp.discount) AS PRICE_AFTER_DISCOUNT, sp.stock AS STOCK, sp.status AS STATUS
	FROM STORE s, PRODUCT p, STORE_PRODUCT sp, ELECTRONIC_PRODUCT ep
	WHERE s.id = @store_id AND
		p.id = @product_id AND
		s.id = sp.store_id AND
		p.id = sp.product_id AND
		p.id = ep.id
GO
--EXEC dbo.usp_QueryElectronicFromStoreByStoreId @store_id=2, @product_id=4
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddSalesman]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddSalesman]
END
GO
CREATE PROCEDURE dbo.usp_AddSalesman(
	@username VARCHAR(100),
	@password VARCHAR(100),
	@first_name VARCHAR(100),
	@last_name VARCHAR(100),
	@gender CHAR(1),
	@document_number VARCHAR(15),
	@phone_number VARCHAR(50),
	@address VARCHAR(150),
	@email VARCHAR(150),	
	@birthday DATE,
	@status CHAR(1),	
	@salary DECIMAL(10,2),
	@quota DECIMAL(10,2),
	@store_id INT,
	@id INT OUT
) AS
	BEGIN
		EXEC dbo.usp_AddUser @vusername=@username, @vpassword=@password, @vfirst_name=@first_name, @vlast_name=@last_name, @cgender=@gender, @cdocument_type='1',
			@vdocument_number=@document_number, @vphone_number=@phone_number, @vaddress=@address, @vemail=@email, @dbirthday=@birthday, @cstatus=@status, @iid=@id OUTPUT 

		INSERT INTO SALESMAN(id, salary, quota, store_id, status)
		SELECT @id, @salary, @quota, @store_id, @status		
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddSalesman @username='jbaldeon', @password='password', @first_name='JOHAN', @last_name='BALDEON', @gender='M', 
	@document_number='40582034', @phone_number='987987987', @address='Elm Street 666', @email='jbaldeon@lpoo.com', @birthday='19800603', @status='A', @salary=3800, @quota=25000, @store_id=1, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSalesman @username='rtoledo', @password='password', @first_name='RONALD', @last_name='TOLEDO', @gender='M', 
	@document_number='40582035', @phone_number='987987988', @address='Elm Street 696', @email='rtoledo@lpoo.com', @birthday='20000603', @status='A', @salary=5500, @quota=45000, @store_id=1, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSalesman @username='jcuellar', @password='password', @first_name='JULIO', @last_name='CUELLAR', @gender='M', 
	@document_number='40582036', @phone_number='987987989', @address='Elm Street 996', @email='jcuellar@lpoo.com', @birthday='20010603', @status='A', @salary=4500, @quota=35000, @store_id=1, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSalesman @username='vzenteno', @password='password', @first_name='VALERIA', @last_name='ZENTENO', @gender='F', 
	@document_number='40582037', @phone_number='987987910', @address='Elm Street 999', @email='vzenteno@lpoo.com', @birthday='20020603', @status='A', @salary=4800, @quota=36000, @store_id=1, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSalesman @username='jrivera', @password='password', @first_name='JACLUBER', @last_name='RIVERA', @gender='M', 
	@document_number='40582038', @phone_number='987987977', @address='Elm Street 333', @email='jrivera@lpoo.com', @birthday='20030603', @status='A', @salary=6800, @quota=65000, @store_id=1, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSalesman @username='lsuarez', @password='password', @first_name='LUIS', @last_name='SUAREZ', @gender='M', 
	@document_number='40582039', @phone_number='987987988', @address='Elm Street 444', @email='lsuarez@lpoo.com', @birthday='20040603', @status='A', @salary=5500, @quota=45000, @store_id=1, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSalesman @username='nsilva', @password='password', @first_name='NIEL', @last_name='SILVA', @gender='M', 
	@document_number='40582639', @phone_number='927987988', @address='Elm Street 532', @email='nsilva@lpoo.com', @birthday='20020603', @status='A', @salary=5500, @quota=45000, @store_id=1, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSalesman @username='yrojas', @password='password', @first_name='YODEMIR', @last_name='ROJAS', @gender='M', 
	@document_number='40512090', @phone_number='988888888', @address='Elm Street 161', @email='yrojas@lpoo.com', @birthday='20040603', @status='A', @salary=5500, @quota=45000, @store_id=1, @id=@new_identity OUTPUT 

GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateSalesman]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateSalesman]
END
GO
CREATE PROCEDURE dbo.usp_UpdateSalesman(
	@username VARCHAR(100),
	@password VARCHAR(100),
	@first_name VARCHAR(100),
	@last_name VARCHAR(100),
	@gender CHAR(1),
	@document_number VARCHAR(15),
	@phone_number VARCHAR(50),
	@address VARCHAR(150),
	@email VARCHAR(150),	
	@birthday DATE,
	@status CHAR(1),	
	@salary DECIMAL(10,2),
	@quota DECIMAL(10,2),
	@store_id INT,
	@id INT
) AS
	BEGIN
		EXEC dbo.usp_UpdateUser @vusername=@username, @vpassword=@password, @vfirst_name=@first_name, @vlast_name=@last_name, 
		@cgender=@gender, @cdocument_type='1', @vdocument_number=@document_number, @vphone_number=@phone_number, @vaddress=@address,
		@vemail=@email, @dbirthday=@birthday, @cstatus=@status, @iid=@id

		UPDATE SALESMAN
		SET salary=@salary, quota=@quota, store_id=@store_id, status=@status
		WHERE id=@id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllSalesmen]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllSalesmen]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllSalesmen
AS
	SELECT SU.id as id, SU.username as username, SU.first_name as first_name, SU.last_name as last_name, SU.gender as gender,
		   SU.document_number as document_number, SU.phone_number as phone_number, SU.address as address, SU.email as email, 
		   SU.birthday as birthday, SU.status as status, S.salary as salary, S.quota as quota, ST.id as store_id, 
		   ST.name as store_name, ST.address as store_address, ST.postal_code as store_postal_code, ST.status as store_status
	FROM SALESMAN S
	INNER JOIN SALES_USER SU ON SU.id = S.id
	INNER JOIN STORE ST ON ST.id = S.store_id
	ORDER BY SU.last_name
GO
--EXEC dbo.usp_QueryAllSalesmen
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QuerySalesmanById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QuerySalesmanById]
END
GO
CREATE PROCEDURE dbo.usp_QuerySalesmanById(
	@salesman_id INT
)
AS
	SELECT SU.id as id, SU.username as username, SU.first_name as first_name, SU.last_name as last_name, SU.gender as gender, 
		   SU.document_number as document_number, SU.phone_number as phone_number, SU.address as address, SU.email as email, 
		   SU.birthday as birthday, SU.status as status, S.salary as salary, S.quota as quota, 
		   ST.id as store_id, ST.name as store_name, ST.address as store_address, ST.postal_code as store_postal_code, 
		   ST.status as store_status
	FROM SALESMAN S
	INNER JOIN SALES_USER SU ON SU.id = S.id
	INNER JOIN STORE ST ON ST.id = S.store_id
	WHERE S.id = @salesman_id
	ORDER BY SU.last_name
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllSalesmenByStore]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllSalesmenByStore]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllSalesmenByStore(
	@store_id INT
)
AS
	SELECT SU.username as username, SU.first_name as first_name, SU.last_name as last_name, SU.gender as gender, 
			S.salary as salary, S.quota as quota, ST.name
	FROM SALESMAN S
	INNER JOIN SALES_USER SU ON SU.id = S.id
	INNER JOIN STORE ST ON ST.id = S.store_id
	WHERE ST.id = @store_id
	ORDER BY SU.last_name
GO		
--EXEC dbo.usp_QueryAllSalesmenByStore @store_id=1
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddManager]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddManager]
END
GO
CREATE PROCEDURE dbo.usp_AddManager(
	@username VARCHAR(100),
	@password VARCHAR(100),
	@first_name VARCHAR(100),
	@last_name VARCHAR(100),
	@gender CHAR(1),
	@document_type CHAR(1),
	@document_number VARCHAR(15),
	@phone_number VARCHAR(50),
	@address VARCHAR(150),
	@email VARCHAR(150),	
	@birthday DATE,
	@status CHAR(1),
	@salary DECIMAL(10,2),
	@employees_number INT,
	@department VARCHAR(150),
	@id INT OUT
) AS
	BEGIN
		EXEC dbo.usp_AddUser @vusername=@username, @vpassword=@password, @vfirst_name=@first_name, @vlast_name=@last_name, @cgender=@gender, 
							 @cdocument_type=@document_type, @vdocument_number=@document_number, @vphone_number=@phone_number, @vaddress=@address,
							 @vemail=@email, @dbirthday=@birthday, @cstatus=@status, @iid=@id OUTPUT 

		INSERT INTO MANAGER(id, salary, employees_number, department, status)
		SELECT @id, @salary, @employees_number, @department, @status		
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddManager @username='acastro', @password='password', @first_name='AQUILES', @last_name='CASTRO', @gender='M', 
						@document_type='1', @document_number='43214321', @phone_number='987987987', @address='Elm Street 6699', @email='aquiles.castro@mycia.com', 
						@birthday='19840115', @status='A', @salary=6000, @employees_number=10, @department='Libros', @id=@new_identity OUTPUT
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateManager]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateManager]
END
GO
CREATE PROCEDURE dbo.usp_UpdateManager(
	@username VARCHAR(100),
	@password VARCHAR(100),
	@first_name VARCHAR(100),
	@last_name VARCHAR(100),
	@gender CHAR(1),
	@document_type CHAR(1),
	@document_number VARCHAR(15),
	@phone_number VARCHAR(50),
	@address VARCHAR(150),
	@email VARCHAR(150),	
	@birthday DATE,
	@salary DECIMAL(10,2),
	@employees_number INT,
	@department VARCHAR(150),
	@status CHAR(1),
	@id INT
) AS
	BEGIN
		EXEC dbo.usp_UpdateUser @vusername=@username, @vpassword=@password, @vfirst_name=@first_name, @vlast_name=@last_name, 
		@cgender=@gender, @cdocument_type=@document_type, @vdocument_number=@document_number, @vphone_number=@phone_number, @vaddress=@address,
		@vemail=@email, @dbirthday=@birthday, @cstatus=@status, @iid=@id		

		UPDATE MANAGER
		SET salary=@salary, employees_number=@employees_number, department=@department, status=@status
		WHERE id=@id
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllManagers]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllManagers]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllManagers
AS
	SELECT *
	FROM MANAGER M
	INNER JOIN SALES_USER SU ON M.id = SU.id 
	WHERE M.status='A'
	ORDER BY last_name
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddPersonCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddPersonCustomer]
END
GO
CREATE PROCEDURE dbo.usp_AddPersonCustomer(
	@username VARCHAR(100),
	@password VARCHAR(100),
	@first_name VARCHAR(100),
	@last_name VARCHAR(100),
	@gender CHAR(1),
	@document_type CHAR(1),
	@document_number VARCHAR(15),
	@phone_number VARCHAR(50),
	@address VARCHAR(150),
	@email VARCHAR(150),	
	@birthday DATE,
	@status CHAR(1),
	@customer_points INT,
	@level INT,
	@id INT OUT
) AS
	BEGIN
		EXEC dbo.usp_AddUser @vusername=@username, @vpassword=@password, @vfirst_name=@first_name, @vlast_name=@last_name, @cgender=@gender, 
							 @cdocument_type=@document_type, @vdocument_number =@document_number, @vphone_number=@phone_number,	@vaddress=@address,	
							 @vemail=@email, @dbirthday=@birthday, @cstatus=@status, @iid=@id OUTPUT 

		INSERT INTO CUSTOMER(id, customer_points, level)
		SELECT @id, @customer_points, @level		
		
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddPersonCustomer @username='zbaca', @password='password', @first_name='ZOILA', @last_name='BACA', @gender='F', @document_type='1', @document_number='12367832',
				 @phone_number='321321321', @address='Calle Los Maestros 123, San Borja', @email='zoila.baca@gmail.com', @birthday='1980-06-03', @status='A', 
				 @customer_points=5, @level=1, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddPersonCustomer @username='aparedes', @password='password', @first_name='ARMANDO', @last_name='PAREDES', @gender='M', @document_type='1', @document_number='22367832',
				 @phone_number='014782474', @address='Av. Los Constructores 123, La Molina', @email='armando.paredes@gmail.com', @birthday='1980-03-06', @status='A',
				 @customer_points=8, @level=1, @id=@new_identity OUTPUT 
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddCompanyCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddCompanyCustomer]
END
GO
CREATE PROCEDURE dbo.usp_AddCompanyCustomer(
	@username VARCHAR(100),
	@password VARCHAR(100),
	@first_name VARCHAR(100),
	@last_name VARCHAR(100),
	@gender CHAR(1),
	@document_type CHAR(1),
	@document_number VARCHAR(15),
	@phone_number VARCHAR(50),
	@address VARCHAR(150),
	@email VARCHAR(150),
	@birthday DATE,	
	@status CHAR(1),
	@customer_points INT,
	@legal_department VARCHAR(100),
	@web_page VARCHAR(250),
	@company_name VARCHAR(250),	
	@id INT OUT
) AS
	BEGIN
		EXEC dbo.usp_AddUser @vusername=@username, @vpassword=@password, @vfirst_name=@first_name, @vlast_name=@last_name, @cgender=@gender, 
							 @cdocument_type=@document_type, @vdocument_number =@document_number, @vphone_number=@phone_number,	@vaddress=@address,	
							 @vemail=@email, @dbirthday=@birthday, @cstatus=@status, @iid=@id OUTPUT 

		INSERT INTO CUSTOMER(id, customer_points, legal_department, web_page, company_name)
		SELECT @id, @customer_points, @legal_department, @web_page, @company_name		
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddCompanyCustomer @username='fkrugger', @password='password', @first_name='FREDDY', @last_name='KRUGGER', @gender='M', @document_type='2', @document_number='12367832432', 
			 @phone_number='016262121', @address='Calle Los Mecatrónicos 666, San Miguel', @email='freddy.krugger@gmail.com', 
			 @birthday='19860606', @status='A', @customer_points=5, @legal_department='José Pérez', @web_page='www.abc.com', @company_name='ABC S.A.', @id=@new_identity OUTPUT 
--GO
--UPDATE CUSTOMER
--SET legal_department='Domingo Pérez'
--WHERE id=3
--GO
--DELETE FROM CUSTOMER
--WHERE id=3

IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdatePersonCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdatePersonCustomer]
END
GO
CREATE PROCEDURE dbo.usp_UpdatePersonCustomer(
	@username VARCHAR(100),
	@password VARCHAR(100),
	@first_name VARCHAR(100),
	@last_name VARCHAR(100),
	@gender CHAR(1),
	@address VARCHAR(150),
	@phone_number VARCHAR(50),
	@email VARCHAR(150),
	@dni VARCHAR(11),
	@birthday DATE,
	@status CHAR(1),
	@customer_points INT,
	@level INT,
	@id INT
) AS
	BEGIN
		EXEC dbo.usp_UpdateUser @vusername=@username, @vpassword=@password, @vfirst_name=@first_name, @vlast_name=@last_name, @cgender=@gender, 
				@cdocument_type='1', @vdocument_number=@dni, @vphone_number=@phone_number, @vaddress=@address, @vemail=@email, @dbirthday=@birthday, @cstatus=@status, @iid=@id

		UPDATE CUSTOMER
		SET customer_points=@customer_points, level=@level
		WHERE id = @id	
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_UpdateCompanyCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_UpdateCompanyCustomer]
END
GO
CREATE PROCEDURE dbo.usp_UpdateCompanyCustomer(
	@username VARCHAR(100),
	@password VARCHAR(100),
	@first_name VARCHAR(100),
	@last_name VARCHAR(100),
	@gender CHAR(1),
	@address VARCHAR(150),
	@phone_number VARCHAR(50),
	@email VARCHAR(150),
	@ruc VARCHAR(11),
	@legal_department VARCHAR(100),
	@web_page VARCHAR(250),
	@company_name VARCHAR(250),
	@status CHAR(1),
	@birthday DATE,
	@customer_points INT,	
	@id INT
) AS
	BEGIN
		EXEC dbo.usp_UpdateUser @vusername=@username, @vpassword=@password, @vfirst_name=@first_name, @vlast_name=@last_name, @cgender=@gender, 
				@cdocument_type='2', @vdocument_number=@ruc, @vphone_number=@phone_number, @vaddress=@address, @vemail=@email, @dbirthday=@birthday, @cstatus=@status, @iid=@id
		
		UPDATE CUSTOMER
		SET customer_points=@customer_points, legal_department=@legal_department, web_page=@web_page, company_name=@company_name
		WHERE id = @id	
	END
GO
-- TAREA: REVISAR LOS DEMÁS STORED PROCEDURES
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryCustomerById]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryCustomerById]
END
GO
CREATE PROCEDURE dbo.usp_QueryCustomerById (
	@id INT
)
AS
	SELECT C.id as id, SU.username as username, SU.first_name as first_name, SU.last_name as last_name, SU.gender as gender, SU.email as email, 
			SU.document_type as document_type, SU.document_number as document_number, SU.address as address, SU.phone_number as phone_number, 
			SU.birthday as birthday, SU.status as status, C.customer_points as customer_points, C.level as level, C.legal_department as legal_department, 
			C.web_page as web_page, C.company_name as company_name
	FROM CUSTOMER C
	INNER JOIN SALES_USER SU ON C.id=SU.id 
	WHERE C.id=@id
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_DeleteCustomer]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_DeleteCustomer]
END
GO
CREATE PROCEDURE dbo.usp_DeleteCustomer(
	@id INT
 ) AS 
	BEGIN
		UPDATE SALES_USER
		SET status='I'
		WHERE id = @id	
	END
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddSale]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddSale]
END
GO
CREATE PROCEDURE dbo.usp_AddSale(
	@total DECIMAL(10,2),
	@status CHAR(1),
	@transaction_date DATE,
	@customer_id INT,
	@salesman_id INT,
	@store_id INT,
	@id INT OUT
) AS
	BEGIN
		INSERT INTO SALE(total, status, transaction_date, customer_id, salesman_id, store_id)
		SELECT @total, @status, @transaction_date, @customer_id, @salesman_id, @store_id
		
		SET @id = SCOPE_IDENTITY()
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddSale @total=2900, @status='A', @transaction_date='2020-12-02', @customer_id=10, @salesman_id=1, @store_id=1, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSale @total=2900, @status='A', @transaction_date='2020-12-21', @customer_id=11, @salesman_id=1, @store_id=1, @id=@new_identity OUTPUT 
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddSaleDetail]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddSaleDetail]
END    
GO
CREATE PROCEDURE dbo.usp_AddSaleDetail(
	@sale_id INT,
	@store_product_id INT,
	@quantity INT,
	@subtotal DECIMAL(10,2),
	@id INT OUT
) AS
	BEGIN
		INSERT INTO SALE_DETAIL(sale_id, store_product_id, quantity, subtotal)
		SELECT @sale_id, @store_product_id, @quantity, @subtotal
		
		SET @id = SCOPE_IDENTITY()
	END
GO	
DECLARE @new_identity INT
EXEC dbo.usp_AddSaleDetail @sale_id=1, @store_product_id=1, @quantity=1, @subtotal =50, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSaleDetail @sale_id=1, @store_product_id=7, @quantity=1, @subtotal =2850, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSaleDetail @sale_id=2, @store_product_id=1, @quantity=1, @subtotal =50, @id=@new_identity OUTPUT 
EXEC dbo.usp_AddSaleDetail @sale_id=2, @store_product_id=7, @quantity=1, @subtotal =2850, @id=@new_identity OUTPUT 
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllProductsByName]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllProductsByName]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllProductsByName(
	@product_name VARCHAR(250)
)
AS
	SELECT * 
	FROM PRODUCT P
	FULL OUTER JOIN BOOK_PRODUCT B ON B.id = P.id
	FULL OUTER JOIN ELECTRONIC_PRODUCT E ON E.id = P.id
	WHERE P.name LIKE '%' + @product_name + '%'
	ORDER BY name
GO		
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllBooksByNameTitleAuthorDescription]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllBooksByNameTitleAuthorDescription]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllBooksByNameTitleAuthorDescription(
	@data VARCHAR(250)
)
AS
	SELECT 
		* 
	FROM 
		BOOK_PRODUCT bp, PRODUCT p
	WHERE	
		   (bp.title LIKE '%' + @data + '%' OR
			bp.author LIKE '%' + @data + '%' OR
			p.name LIKE '%' + @data + '%' OR
			p.description LIKE '%' + @data + '%') AND
			bp.id = p.id
	ORDER BY title
GO		
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllElectronicsByNameDescriptionBrandModel]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllElectronicsByNameDescriptionBrandModel]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllElectronicsByNameDescriptionBrandModel(
	@data VARCHAR(250)
)
AS
	SELECT * FROM ELECTRONIC_PRODUCT ep, PRODUCT p
	WHERE	(ep.brand LIKE '%' + @data + '%' OR
			ep.model LIKE '%' + @data + '%' OR
			p.name LIKE '%' + @data + '%' OR
			p.description LIKE '%' + @data + '%') AND
			ep.id = p.id			
	ORDER BY name
GO		
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_QueryAllElectronicsByNameDescriptionBrandModelInStore]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_QueryAllElectronicsByNameDescriptionBrandModelInStore]
END
GO
CREATE PROCEDURE dbo.usp_QueryAllElectronicsByNameDescriptionBrandModelInStore(
	@data VARCHAR(250),
	@store_id INT
)
AS
	SELECT * FROM ELECTRONIC_PRODUCT ep, PRODUCT p, STORE_PRODUCT sp
	WHERE	sp.store_id = @store_id AND
			p.id = sp.product_id AND
			p.id = ep.id AND 
			(ep.brand LIKE '%' + @data + '%' OR
			ep.model LIKE '%' + @data + '%' OR
			p.name LIKE '%' + @data + '%' OR
			p.description LIKE '%' + @data + '%')
	ORDER BY name
GO	
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddCreditNote]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddCreditNote]
END
GO
CREATE PROCEDURE dbo.usp_AddCreditNote(
	@reference VARCHAR(1000),
	@credit_note_concept_id INT,
	@sale_id INT,
	@emission_date DATE,
	@total DECIMAL(10,2),
	@status CHAR(1),	
	@id INT OUT
) AS
	BEGIN
		INSERT INTO CREDIT_NOTE(reference, credit_note_concept_id, sale_id, emission_date, total, status)
		SELECT @reference, @credit_note_concept_id, @sale_id, @emission_date, @total, @status
		
		SET @id = SCOPE_IDENTITY()
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddCreditNote @reference='Devolución total por producto golpeado.', @credit_note_concept_id=1, @sale_id=1, @emission_date='2020-07-05', @total=54, @status='A', @id=@new_identity OUTPUT
EXEC dbo.usp_AddCreditNote @reference='Devolución parcial de producto.', @credit_note_concept_id=2, @sale_id=2, @emission_date='2020-07-27', @total=2850, @status='A', @id=@new_identity OUTPUT
GO
IF EXISTS ( SELECT * 
            FROM   sysobjects 
            WHERE  id = object_id(N'[dbo].[usp_AddCreditNoteDetail]') 
                   and OBJECTPROPERTY(id, N'IsProcedure') = 1 )
BEGIN
    DROP PROCEDURE [dbo].[usp_AddCreditNoteDetail]
END    
GO
CREATE PROCEDURE dbo.usp_AddCreditNoteDetail(
	@credit_note_id INT,
	@sale_detail_id INT,
	@quantity INT,
	@amount DECIMAL(10,2),
	@id INT OUT
) AS
	BEGIN
		INSERT INTO CREDIT_NOTE_DETAIL(credit_note_id, sale_detail_id, quantity, amount)
		SELECT @credit_note_id, @sale_detail_id, @quantity, @amount
		
		SET @id = SCOPE_IDENTITY()
	END
GO
DECLARE @new_identity INT
EXEC dbo.usp_AddCreditNoteDetail @credit_note_id=2, @sale_detail_id=3, @quantity=1, @amount =2850, @id=@new_identity OUTPUT 
GO
