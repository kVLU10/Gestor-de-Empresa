#include "pch.h"
#include "DBController.h"

using namespace System::IO;
using namespace System::Globalization;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

SalesController::AsistenciaDB::AsistenciaDB() {
}

SalesController::PersonalDB::PersonalDB() {
}

SalesController::ClientDB::ClientDB() {
}


SalesController::CategoriesDB::CategoriesDB() {
}

SalesController::ProductDB::ProductDB() {
}

SalesController::StoreDB::StoreDB() {
}

void SalesController::DBController::SaveAsistencia()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(AsistenciaDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("asistencia.xml");
    writer->Serialize(file, asistenciaDB);
    file->Close();
}

void SalesController::DBController::LoadAsistencia()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(AsistenciaDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("asistencia.xml");
        asistenciaDB = (AsistenciaDB^)reader->Deserialize(file);
    }
    catch (Exception^ ex) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

void SalesController::DBController::SavePersonal()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(PersonalDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("personal.xml");
    writer->Serialize(file, personalDB);
    file->Close();
}

void SalesController::DBController::LoadPersonal()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(PersonalDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("personal.xml");
        personalDB = (PersonalDB^)reader->Deserialize(file);
    }
    catch (Exception^ ex) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

SqlConnection^ SalesController::DBController::GetConnection()
{
    SqlConnection^ conn = gcnew SqlConnection();
    String^ connStr = "Server=" + connParam->Server + ";Database=" + connParam->Database +
        ";User ID=" + connParam->User + ";Password=" + connParam->Password;
    conn->ConnectionString = connStr;
    conn->Open();
    return conn;
}

Person^ SalesController::DBController::ValidateUser(String^ username, String^ password) {
    Person^ person = nullptr;
    /*
    for (int i = 0; i < personalDB->ListDBP->Count; i++) {
        if (personalDB->ListDBP[i]->Username->Equals(username) &&
            personalDB->ListDBP[i]->Password->Equals(password))
            return personalDB->ListDBP[i];
    }
    return personal;
    */
    //Paso 1
    SqlConnection^ conn = GetConnection();
    //Paso 2
    SqlCommand^ comm = gcnew SqlCommand();
    comm->Connection = conn;
    comm->CommandText = "SELECT * FROM sales_user WHERE username='" + username +
        "' AND password='" + password + "'";
    //Paso 3
    SqlDataReader^ dr = comm->ExecuteReader();
    //Paso 4
    if (dr->Read())
    {
        person = gcnew Person();
        person->Id = (int)dr["id"];
        person->Username = (String^)dr["username"];
        person->FirstName = safe_cast<String^>(dr["first_name"]);
        person->FirstLastName = safe_cast<String^>(dr["first_last_name"]);
    }
    //Paso 5
    if (dr != nullptr) dr->Close();
    if (conn != nullptr) conn->Close();

    return person;
}

void SalesController::DBController::SaveCategories()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(CategoriesDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("categories.xml");
    writer->Serialize(file, categoriesDB);
    file->Close();
}

void SalesController::DBController::LoadCategories()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(CategoriesDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("categories.xml");
        categoriesDB = (CategoriesDB^)reader->Deserialize(file);
    }
    catch (Exception^ ex) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

void SalesController::DBController::SaveClient()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(ClientDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("client.xml");
    writer->Serialize(file, clientDB);
    file->Close();
}

void SalesController::DBController::LoadClient()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(ClientDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("client.xml");
        clientDB = (ClientDB^)reader->Deserialize(file);
    }
    catch (Exception^ ex) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

void SalesController::DBController::SaveDistrit()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(DistritDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("distrit.xml");
    writer->Serialize(file, distritDB);
    file->Close();
}

void SalesController::DBController::LoadDistrit()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(DistritDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("distrit.xml");
        distritDB = (DistritDB^)reader->Deserialize(file);
    }
    catch (Exception^ ex) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

void SalesController::DBController::SaveProducts()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(ProductDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("product.xml");
    writer->Serialize(file, productDB);
    file->Close();
}

void SalesController::DBController::LoadProducts()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(ProductDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("product.xml");
        productDB = (ProductDB^)reader->Deserialize(file);
    }
    catch (Exception^ ex) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

void SalesController::DBController::SaveStore()
{
    System::Xml::Serialization::XmlSerializer^ writer =
        gcnew System::Xml::Serialization::XmlSerializer(StoreDB::typeid);

    System::IO::StreamWriter^ file = gcnew System::IO::StreamWriter("store.xml");
    writer->Serialize(file, storeDB);
    file->Close();
}

void SalesController::DBController::LoadStore()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(StoreDB::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("store.xml");
        storeDB = (StoreDB^)reader->Deserialize(file);
    }
    catch (Exception^ ex) {
        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}

void SalesController::DBController::AddDistrit(Distrit^ distrit)
{
    distritDB->ListDB->Add(distrit);
    SaveDistrit();
}

List<Distrit^>^ SalesController::DBController::QueryDistrit()
{
    LoadDistrit();
    return distritDB->ListDB;
}

void SalesController::DBController::AddAsistencia(Asistencia^ asistencia)
{
    asistenciaDB->ListDB->Add(asistencia);
    SaveAsistencia();
}

void SalesController::DBController::AddCategories(Categories^ categories)
{
    categoriesDB->ListDB->Add(categories);
    SaveCategories();
}

void SalesController::DBController::UpdateCategories(Categories^ categories)
{
    for (int i = 0; i < categoriesDB->ListDB->Count; i++)
        if (categoriesDB->ListDB[i]->Id == categories->Id) {
            categoriesDB->ListDB[i] = categories;
        }
    SaveCategories();
}

void SalesController::DBController::DeleteCategories(int productId)
{
    for (int i = 0; i < categoriesDB->ListDB->Count; i++) {
        if (categoriesDB->ListDB[i]->Id == productId)
            categoriesDB->ListDB->RemoveAt(i);
    }
    SaveCategories();
}

List<Asistencia^>^ SalesController::DBController::QueryAsistencia()
{
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
    LoadAsistencia();
    return asistenciaDB->ListDB;
}

List<Categories^>^ SalesController::DBController::QueryCategories()
{
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
    LoadCategories();
    return categoriesDB->ListDB;
}

Categories^ SalesController::DBController::QueryCategoriesById(int productId)
{
    //throw gcnew System::NotImplementedException();
    // TODO: Insertar una instrucción "return" aquí
    LoadCategories();
    for (int i = 0; i < categoriesDB->ListDB->Count; i++)
        if (categoriesDB->ListDB[i]->Id == productId)
            return categoriesDB->ListDB[i];
    return nullptr;
}

void SalesController::DBController::AddProduct(Products^ product)
{
    /*
    productDB->ListDB->Add(product);
    SaveProducts();
    */
    //Paso 1
    SqlConnection^ conn = GetConnection();
    //Paso 2
    SqlCommand^ comm;
    String^ strCmd;
    strCmd = "dbo.usp_AddProduct";
    comm = gcnew SqlCommand(strCmd, conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    
    comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
    comm->Parameters->Add("@quantity", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@bonus_points", System::Data::SqlDbType::Int);
    comm->Parameters->Add("@status", System::Data::SqlDbType::VarChar, 150);
    comm->Parameters->Add("@price", System::Data::SqlDbType::Decimal, 10);
    comm->Parameters["@price"]->Precision = 10;
    comm->Parameters["@price"]->Scale = 2;
    comm->Parameters->Add("@brand", System::Data::SqlDbType::VarChar, 50);
    comm->Parameters->Add("@description", System::Data::SqlDbType::VarChar, 500);

    SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
    outputIdParam->Direction = System::Data::ParameterDirection::Output;
    comm->Parameters->Add(outputIdParam);
    comm->Prepare();

    comm->Parameters["@name"]->Value = product->Name;
    comm->Parameters["@quantity"]->Value = product->Quantity;
    comm->Parameters["@bonus_points"]->Value = product->BonusPoints;
    comm->Parameters["@price"]->Value = product->Precio;
    comm->Parameters["@brand"]->Value = product->Marca;
    comm->Parameters["@status"]->Value = product->Status;
    comm->Parameters["@description"]->Value = product->Description;

    //Paso 3
    comm->ExecuteNonQuery();

    //Paso 4
    int output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);

    //Paso 5
    conn->Close();
}

void SalesController::DBController::UpdateProduct(Products^ product)
{
   /* for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->Id == product->Id) {
            productDB->ListDB[i] = product;
        }
    SaveProducts();*/
    /* 1er paso: Se obtiene la conexión */
    SqlConnection^ conn = GetConnection();

    /* 2do paso: Se prepara la sentencia */
    SqlCommand^ comm;
    String^ strCmd;
        strCmd = "dbo.usp_UpdateProduct";
        comm = gcnew SqlCommand(strCmd, conn);
        comm->CommandType = System::Data::CommandType::StoredProcedure;
        
        comm->Parameters->Add("@id", System::Data::SqlDbType::VarChar, 250);

        comm->Prepare();

        Products^ p = dynamic_cast<Products^>(p);
        comm->Parameters["@id"]->Value = p->Id;
        comm->Parameters["@name"]->Value = p->Quantity;
        comm->Parameters["@title"]->Value = p->BonusPoints;
        comm->Parameters["@price"]->Value = p->Precio;
        comm->Parameters["@status"]->Value = "A";

        comm->ExecuteNonQuery();
    

    //IMPORTANTE Paso 4: Cerramos la conexión con la BD
    if (conn != nullptr) conn->Close();

}

void SalesController::DBController::DeleteProduct(int productId)
{
    /*    for (int i = 0; i < productDB->ListDB->Count; i++) {
        if (productDB->ListDB[i]->Id == productId)
            productDB->ListDB->RemoveAt(i);
    }
    SaveProducts();*/

    //Paso 1
    SqlConnection^ conn = GetConnection();
    //Paso 2
    SqlCommand^ comm;
    String^ strCmd;
    strCmd = "dbo.usp_DeleteProduct";
    comm = gcnew SqlCommand(strCmd, conn);

    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@id", System::Data::SqlDbType::VarChar, 250);

    comm->Prepare();

    comm->Parameters["@id"]->Value = productId;

    //Paso 3
    comm->ExecuteNonQuery();

    //IMPORTANTE Paso 4: Cerramos la conexión con la BD
    if (conn != nullptr) conn->Close();

}

List<Products^>^ SalesController::DBController::QueryProducts()
{
    /*LoadProducts();
    return productDB->ListDB;*/
    /*
    return productDB->ListDB;
    */


    /* 1er paso: Se obtiene la conexión */
    SqlConnection^ conn = GetConnection();

    /* 2do paso: Se prepara la sentencia */
    SqlCommand^ comm = gcnew SqlCommand("usp_QueryAllProducts", conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;

    SqlDataReader^ reader = comm->ExecuteReader();

    List<Products^>^ list = gcnew List<Products^>();
    while (reader->Read()) {
            Products^ s = gcnew Products();
            s->Id = Int32::Parse(reader["id"]->ToString());
            s->Name = reader["name"]->ToString();
            s->Description = reader["description"]->ToString();
            s->Precio = Double::Parse(reader["price"]->ToString());
            s->BonusPoints = Int32::Parse(reader["bonus_points"]->ToString());
            s->Quantity = Int32::Parse(reader["quantity"]->ToString());
            s->Marca = reader["brand"]->ToString();
            s->Status = reader["status"]->ToString();
            list->Add(s);
        
    }

    //IMPORTANTE Paso 4: Cerramos la conexión con la BD
    if (reader != nullptr) reader->Close();
    if (conn != nullptr) conn->Close();

    return list;
}

Products^ SalesController::DBController::QueryProductById(int productId)
{
    /*LoadProducts();
    for (int i = 0; i < productDB->ListDB->Count; i++)
        if (productDB->ListDB[i]->Id == productId)
            return productDB->ListDB[i];
    return nullptr;*/

    /* 1er paso: Se obtiene la conexión */
    SqlConnection^ conn = GetConnection();

    /* 2do paso: Se prepara la sentencia */
    SqlCommand^ comm;

    comm = gcnew SqlCommand("usp_QueryProductById", conn);
    comm->CommandType = System::Data::CommandType::StoredProcedure;
    comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
    comm->Prepare();
    comm->Parameters["@id"]->Value = productId;

    /* 3er paso: Se ejecuta la sentencia */
    SqlDataReader^ reader = comm->ExecuteReader();

    /* 4to paso: Se evalúa el resultado */
    Products^ p = nullptr;
    if (reader->Read()) {
        p = gcnew Products();
        if (!DBNull::Value->Equals(reader["id"]))
            p->Id = Int32::Parse(reader["id"]->ToString());
        if (!DBNull::Value->Equals(reader["name"]))
            p->Name = reader["name"]->ToString();
        if (!DBNull::Value->Equals(reader["description"]))
            p->Description = reader["description"]->ToString();
        if (!DBNull::Value->Equals(reader["price"]))
            p->Precio = Double::Parse(reader["price"]->ToString());
        if (!DBNull::Value->Equals(reader["quantity"]))
            p->Quantity = Int32::Parse(reader["quantity"]->ToString());
        if (!DBNull::Value->Equals(reader["brand"]))
            p->Marca = reader["brand"]->ToString();
        if (!DBNull::Value->Equals(reader["bonus_points"]))
            p->BonusPoints = Int32::Parse(reader["bonus_points"]->ToString());
        if (!DBNull::Value->Equals(reader["status"]))
            p->Status = reader["status"]->ToString();
    }

    /* 5to Paso: Cerramos la conexión con la BD */
    if (conn != nullptr)	conn->Close();
    return p;

}

void SalesController::DBController::AddPersonal(Personal^ personal)
{
    personalDB->ListDBP->Add(personal);
    SavePersonal();
}

void SalesController::DBController::UpdatePersonal(Personal^ personal)
{
    for (int i = 0; i < personalDB->ListDBP->Count; i++)
        if (personalDB->ListDBP[i]->DocumentNumber == personal->DocumentNumber) {
            personalDB->ListDBP[i] = personal;
        }  
    SavePersonal();
}

void SalesController::DBController::DeletePersonal(String^ DocumentNumber)
{
    for (int i = 0; i < personalDB->ListDBP->Count; i++) {
        if (personalDB->ListDBP[i]->DocumentNumber == DocumentNumber)
            personalDB->ListDBP->RemoveAt(i);
    }
    SavePersonal();
}

List<Personal^>^ SalesController::DBController::QueryPersonal()
{
    LoadPersonal();
    return personalDB->ListDBP;
}

Personal^ SalesController::DBController::QueryPersonalByDocumentNumber(String^ personalDocumentNumber)
{
    LoadPersonal();
    for (int i = 0; i < personalDB->ListDBP->Count; i++)
        if (personalDB->ListDBP[i]->DocumentNumber == personalDocumentNumber)
            return personalDB->ListDBP[i];
    return nullptr;
}


void SalesController::DBController::AddStore(Store^ store)
{
    storeDB->ListDB->Add(store);
    SaveStore();
}

void SalesController::DBController::UpdateStore(Store^ store)
{
    for (int i = 0; i < storeDB->ListDB->Count; i++)
        if (storeDB->ListDB[i]->Id == store->Id) {
            storeDB->ListDB[i] = store;
        }
    SaveStore();
}

void SalesController::DBController::AddClient(Client^ client)
{
    clientDB->ListDBC->Add(client);
    SaveClient();
}

void SalesController::DBController::UpdateClient(Client^ client)
{
    for (int i = 0; i < clientDB->ListDBC->Count; i++)
        if (clientDB->ListDBC[i]->DocumentNumber == client->DocumentNumber) {
            clientDB->ListDBC[i] = client;
        }
    SaveClient();
}

void SalesController::DBController::DeleteStore(int storeID)
{
    for (int i = 0; i < storeDB->ListDB->Count; i++)
        if (storeDB->ListDB[i]->Id == storeID) {
            storeDB->ListDB[i]->Status = "Inhabilitado";

        }
    SaveStore();
}

void SalesController::DBController::DeleteClient(String^ DocumentNumber)
{
    for (int i = 0; i < clientDB->ListDBC->Count; i++) {
        if (clientDB->ListDBC[i]->DocumentNumber == DocumentNumber)
            clientDB->ListDBC->RemoveAt(i);
    }
    SaveClient();
}


List<Store^>^ SalesController::DBController::QueryStore()
{
    LoadStore();
    return storeDB->ListDB;
}

Store^ SalesController::DBController::QueryStoreByDocumentNumber(int storeID)
{
    LoadStore();
    for (int i = 0; i < storeDB->ListDB->Count; i++)
        if (storeDB->ListDB[i]->Id == storeID) {
            return storeDB->ListDB[i];
        }
    return nullptr;
}



List<Client^>^ SalesController::DBController::QueryClient()
{
    LoadClient();
    return clientDB->ListDBC;
}

Client^ SalesController::DBController::QueryClientByDocumentNumber(String^ clientDocumentNumber)
{
    LoadClient();
    for (int i = 0; i < clientDB->ListDBC->Count; i++)
        if (clientDB->ListDBC[i]->DocumentNumber == clientDocumentNumber)
            return clientDB->ListDBC[i];
    return nullptr;
}

void SalesController::SaleDB::Persist()
{
    Stream^ stream = File::Open("sales.bin", FileMode::Create);
    BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
    bFormatter->Serialize(stream, ListDBSale);
    stream->Close();
}

SalesController::SaleDB::SaleDB()
{
}

void SalesController::DBController::RegisterSale(Sale^ sale)
{
    saleDB->ListDBSale->Add(sale);
    saleDB->Persist();
}

SalesController::DistritDB::DistritDB()
{
}

void SalesController::DBController::Init()
{
    System::Xml::Serialization::XmlSerializer^ reader =
        gcnew System::Xml::Serialization::XmlSerializer(ConnectionParam::typeid);
    System::IO::StreamReader^ file = nullptr;
    try {
        file = gcnew System::IO::StreamReader("init.xml");
        connParam = (ConnectionParam^)reader->Deserialize(file);
    }
    catch (...) {

        return;
    }
    finally {
        if (file != nullptr) file->Close();
    }
}
