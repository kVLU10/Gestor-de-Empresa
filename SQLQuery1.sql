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