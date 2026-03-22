#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SQLite/CreateFlags.h"
#include "unitysdk/SQLite/CreateTableResult.h"
#include "unitysdk/SQLite/SQLiteOpenFlags.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace SQLite { class CreateTablesResult; }
namespace SQLite { class SQLiteConnection; }
namespace SQLite { class SQLiteConnectionString; }
namespace SQLite { class SQLiteConnectionWithLock; }
namespace SQLite { class SQLiteConnection_ColumnInfo; }
namespace SQLite { class TableMapping; }
namespace SQLite { template <typename T> class AsyncTableQuery_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Linq::Expressions { template <typename T> class Expression_1; }
namespace System::Threading::Tasks { class Task; }
namespace System::Threading::Tasks { template <typename T> class Task_1; }

#define SQLITE_SQLITEASYNCCONNECTION_BACKUPASYNC_OFFSET UNITYSDK_OFFSET(0x1A0683B0)
#define SQLITE_SQLITEASYNCCONNECTION_CLOSEASYNC_OFFSET UNITYSDK_OFFSET(0x1A0674A0)
#define SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A067950)
#define SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A067A20)
#define SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_3_OFFSET UNITYSDK_OFFSET(0x1A067AE0)
#define SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_OFFSET UNITYSDK_OFFSET(0x1A067890)
#define SQLITE_SQLITEASYNCCONNECTION_CREATETABLEASYNC_OFFSET UNITYSDK_OFFSET(0x1A067690)
#define SQLITE_SQLITEASYNCCONNECTION_CREATETABLESASYNC_OFFSET UNITYSDK_OFFSET(0x1A067740)
#define SQLITE_SQLITEASYNCCONNECTION_DEFERREDQUERYASYNC_OFFSET UNITYSDK_OFFSET(0x1A068C30)
#define SQLITE_SQLITEASYNCCONNECTION_DELETEALLASYNC_OFFSET UNITYSDK_OFFSET(0x1A068310)
#define SQLITE_SQLITEASYNCCONNECTION_DELETEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A068260)
#define SQLITE_SQLITEASYNCCONNECTION_DELETEASYNC_OFFSET UNITYSDK_OFFSET(0x1A0681C0)
#define SQLITE_SQLITEASYNCCONNECTION_DROPTABLEASYNC_OFFSET UNITYSDK_OFFSET(0x1A0677F0)
#define SQLITE_SQLITEASYNCCONNECTION_ENABLELOADEXTENSIONASYNC_OFFSET UNITYSDK_OFFSET(0x1A0675F0)
#define SQLITE_SQLITEASYNCCONNECTION_ENABLEWRITEAHEADLOGGINGASYNC_OFFSET UNITYSDK_OFFSET(0x1A0669D0)
#define SQLITE_SQLITEASYNCCONNECTION_EXECUTEASYNC_OFFSET UNITYSDK_OFFSET(0x1A0687E0)
#define SQLITE_SQLITEASYNCCONNECTION_FINDASYNC_OFFSET UNITYSDK_OFFSET(0x1A068510)
#define SQLITE_SQLITEASYNCCONNECTION_FINDWITHQUERYASYNC_OFFSET UNITYSDK_OFFSET(0x1A0685C0)
#define SQLITE_SQLITEASYNCCONNECTION_GETASYNC_OFFSET UNITYSDK_OFFSET(0x1A068460)
#define SQLITE_SQLITEASYNCCONNECTION_GETBUSYTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1A066900)
#define SQLITE_SQLITEASYNCCONNECTION_GETCONNECTIONANDTRANSACTIONLOCK_OFFSET UNITYSDK_OFFSET(0x1A067180)
#define SQLITE_SQLITEASYNCCONNECTION_GETCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A0667F0)
#define SQLITE_SQLITEASYNCCONNECTION_GETMAPPINGASYNC_OFFSET UNITYSDK_OFFSET(0x1A068680)
#define SQLITE_SQLITEASYNCCONNECTION_GETTABLEINFOASYNC_OFFSET UNITYSDK_OFFSET(0x1A068730)
#define SQLITE_SQLITEASYNCCONNECTION_GET_DATABASEPATH_OFFSET UNITYSDK_OFFSET(0x1A0667D0)
#define SQLITE_SQLITEASYNCCONNECTION_GET_DATETIMESTRINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1A0668E0)
#define SQLITE_SQLITEASYNCCONNECTION_GET_LIBVERSIONNUMBER_OFFSET UNITYSDK_OFFSET(0x1A0668C0)
#define SQLITE_SQLITEASYNCCONNECTION_GET_STOREDATETIMEASTICKS_OFFSET UNITYSDK_OFFSET(0x1A066AD0)
#define SQLITE_SQLITEASYNCCONNECTION_GET_STORETIMESPANASTICKS_OFFSET UNITYSDK_OFFSET(0x1A066AF0)
#define SQLITE_SQLITEASYNCCONNECTION_GET_TABLEMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1A066BE0)
#define SQLITE_SQLITEASYNCCONNECTION_GET_TIMEEXECUTION_OFFSET UNITYSDK_OFFSET(0x1A066BA0)
#define SQLITE_SQLITEASYNCCONNECTION_GET_TRACER_OFFSET UNITYSDK_OFFSET(0x1A066B50)
#define SQLITE_SQLITEASYNCCONNECTION_GET_TRACE_OFFSET UNITYSDK_OFFSET(0x1A066B10)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A068940)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A068A00)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_OFFSET UNITYSDK_OFFSET(0x1A068890)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A067C50)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_2_OFFSET UNITYSDK_OFFSET(0x1A067D00)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_3_OFFSET UNITYSDK_OFFSET(0x1A067DB0)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_OFFSET UNITYSDK_OFFSET(0x1A067BB0)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTORREPLACEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A067F10)
#define SQLITE_SQLITEASYNCCONNECTION_INSERTORREPLACEASYNC_OFFSET UNITYSDK_OFFSET(0x1A067E70)
#define SQLITE_SQLITEASYNCCONNECTION_QUERYASYNC_OFFSET UNITYSDK_OFFSET(0x1A068B70)
#define SQLITE_SQLITEASYNCCONNECTION_REKEYASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A068DA0)
#define SQLITE_SQLITEASYNCCONNECTION_REKEYASYNC_OFFSET UNITYSDK_OFFSET(0x1A068CF0)
#define SQLITE_SQLITEASYNCCONNECTION_RESETPOOL_OFFSET UNITYSDK_OFFSET(0x1A066D80)
#define SQLITE_SQLITEASYNCCONNECTION_RUNINTRANSACTIONASYNC_OFFSET UNITYSDK_OFFSET(0x1A068AC0)
#define SQLITE_SQLITEASYNCCONNECTION_SETBUSYTIMEOUTASYNC_OFFSET UNITYSDK_OFFSET(0x1A066920)
#define SQLITE_SQLITEASYNCCONNECTION_SET_TIMEEXECUTION_OFFSET UNITYSDK_OFFSET(0x1A066BC0)
#define SQLITE_SQLITEASYNCCONNECTION_SET_TRACER_OFFSET UNITYSDK_OFFSET(0x1A066B70)
#define SQLITE_SQLITEASYNCCONNECTION_SET_TRACE_OFFSET UNITYSDK_OFFSET(0x1A066B30)
#define SQLITE_SQLITEASYNCCONNECTION_UPDATEALLASYNC_OFFSET UNITYSDK_OFFSET(0x1A068110)
#define SQLITE_SQLITEASYNCCONNECTION_UPDATEASYNC_1_OFFSET UNITYSDK_OFFSET(0x1A068060)
#define SQLITE_SQLITEASYNCCONNECTION_UPDATEASYNC_OFFSET UNITYSDK_OFFSET(0x1A067FC0)
#define SQLITE_SQLITEASYNCCONNECTION__CLOSEASYNC_B__31_0_OFFSET UNITYSDK_OFFSET(0x1A068E50)
#define SQLITE_SQLITEASYNCCONNECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A066740)
#define SQLITE_SQLITEASYNCCONNECTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A066730)
#define SQLITE_SQLITEASYNCCONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0664D0)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteAsyncConnection_TypeDefinitionIndex = 35268;

	class SQLiteAsyncConnection : public ::System::Object
	{
	public:
		::SQLite::SQLiteConnectionString* _connectionString; // 0x10

		::System::Void _ctor(::System::String* databasePath, ::System::Boolean storeDateTimeAsTicks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION__CTOR_OFFSET))(this, databasePath, storeDateTimeAsTicks);
		}

		::System::Void _ctor_1(::System::String* databasePath, ::SQLite::SQLiteOpenFlags openFlags, ::System::Boolean storeDateTimeAsTicks)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SQLite::SQLiteOpenFlags, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION__CTOR_1_OFFSET))(this, databasePath, openFlags, storeDateTimeAsTicks);
		}

		::System::Void _ctor_2(::SQLite::SQLiteConnectionString* connectionString)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::SQLiteConnectionString*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION__CTOR_2_OFFSET))(this, connectionString);
		}

		::System::String* get_DatabasePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_DATABASEPATH_OFFSET))(this);
		}

		::System::Int32 get_LibVersionNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_LIBVERSIONNUMBER_OFFSET))(this);
		}

		::System::String* get_DateTimeStringFormat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_DATETIMESTRINGFORMAT_OFFSET))(this);
		}

		::System::TimeSpan GetBusyTimeout()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETBUSYTIMEOUT_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* SetBusyTimeoutAsync(::System::TimeSpan value)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_SETBUSYTIMEOUTASYNC_OFFSET))(this, value);
		}

		::System::Threading::Tasks::Task* EnableWriteAheadLoggingAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_ENABLEWRITEAHEADLOGGINGASYNC_OFFSET))(this);
		}

		::System::Boolean get_StoreDateTimeAsTicks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_STOREDATETIMEASTICKS_OFFSET))(this);
		}

		::System::Boolean get_StoreTimeSpanAsTicks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_STORETIMESPANASTICKS_OFFSET))(this);
		}

		::System::Boolean get_Trace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_TRACE_OFFSET))(this);
		}

		::System::Void set_Trace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_SET_TRACE_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_Tracer()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_TRACER_OFFSET))(this);
		}

		::System::Void set_Tracer(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_SET_TRACER_OFFSET))(this, value);
		}

		::System::Boolean get_TimeExecution()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_TIMEEXECUTION_OFFSET))(this);
		}

		::System::Void set_TimeExecution(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_SET_TIMEEXECUTION_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::SQLite::TableMapping*>* get_TableMappings()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SQLite::TableMapping*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GET_TABLEMAPPINGS_OFFSET))(this);
		}

		static ::System::Void ResetPool()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_RESETPOOL_OFFSET))();
		}

		::SQLite::SQLiteConnectionWithLock* GetConnection()
		{
			return ((::SQLite::SQLiteConnectionWithLock*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETCONNECTION_OFFSET))(this);
		}

		::SQLite::SQLiteConnectionWithLock* GetConnectionAndTransactionLock(::System::Object*& transactionLock)
		{
			return ((::SQLite::SQLiteConnectionWithLock*(*)(::PVOID, ::System::Object*&))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETCONNECTIONANDTRANSACTIONLOCK_OFFSET))(this, transactionLock);
		}

		::System::Threading::Tasks::Task* CloseAsync()
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CLOSEASYNC_OFFSET))(this);
		}

		::System::Threading::Tasks::Task* EnableLoadExtensionAsync(::System::Boolean enabled)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_ENABLELOADEXTENSIONASYNC_OFFSET))(this, enabled);
		}

		::System::Threading::Tasks::Task_1<::SQLite::CreateTableResult>* CreateTableAsync(::System::Type* ty, ::SQLite::CreateFlags createFlags)
		{
			return ((::System::Threading::Tasks::Task_1<::SQLite::CreateTableResult>*(*)(::PVOID, ::System::Type*, ::SQLite::CreateFlags))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATETABLEASYNC_OFFSET))(this, ty, createFlags);
		}

		::System::Threading::Tasks::Task_1<::SQLite::CreateTablesResult*>* CreateTablesAsync(::SQLite::CreateFlags createFlags, ::Il2CppArray<::System::Type*>* types)
		{
			return ((::System::Threading::Tasks::Task_1<::SQLite::CreateTablesResult*>*(*)(::PVOID, ::SQLite::CreateFlags, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATETABLESASYNC_OFFSET))(this, createFlags, types);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* DropTableAsync(::SQLite::TableMapping* map)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_DROPTABLEASYNC_OFFSET))(this, map);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* CreateIndexAsync(::System::String* tableName, ::System::String* columnName, ::System::Boolean unique)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_OFFSET))(this, tableName, columnName, unique);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* CreateIndexAsync_1(::System::String* indexName, ::System::String* tableName, ::System::String* columnName, ::System::Boolean unique)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_1_OFFSET))(this, indexName, tableName, columnName, unique);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* CreateIndexAsync_2(::System::String* tableName, ::Il2CppArray<::System::String*>* columnNames, ::System::Boolean unique)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_2_OFFSET))(this, tableName, columnNames, unique);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* CreateIndexAsync_3(::System::String* indexName, ::System::String* tableName, ::Il2CppArray<::System::String*>* columnNames, ::System::Boolean unique)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::String*, ::System::String*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_CREATEINDEXASYNC_3_OFFSET))(this, indexName, tableName, columnNames, unique);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAsync(::System::Object* obj)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_OFFSET))(this, obj);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAsync_1(::System::Object* obj, ::System::Type* objType)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_1_OFFSET))(this, obj, objType);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAsync_2(::System::Object* obj, ::System::String* extra)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_2_OFFSET))(this, obj, extra);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAsync_3(::System::Object* obj, ::System::String* extra, ::System::Type* objType)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTASYNC_3_OFFSET))(this, obj, extra, objType);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertOrReplaceAsync(::System::Object* obj)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTORREPLACEASYNC_OFFSET))(this, obj);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertOrReplaceAsync_1(::System::Object* obj, ::System::Type* objType)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTORREPLACEASYNC_1_OFFSET))(this, obj, objType);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* UpdateAsync(::System::Object* obj)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_UPDATEASYNC_OFFSET))(this, obj);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* UpdateAsync_1(::System::Object* obj, ::System::Type* objType)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_UPDATEASYNC_1_OFFSET))(this, obj, objType);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* UpdateAllAsync(::System::Collections::IEnumerable* objects, ::System::Boolean runInTransaction)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_UPDATEALLASYNC_OFFSET))(this, objects, runInTransaction);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* DeleteAsync(::System::Object* objectToDelete)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_DELETEASYNC_OFFSET))(this, objectToDelete);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* DeleteAsync_1(::System::Object* primaryKey, ::SQLite::TableMapping* map)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Object*, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_DELETEASYNC_1_OFFSET))(this, primaryKey, map);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* DeleteAllAsync(::SQLite::TableMapping* map)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_DELETEALLASYNC_OFFSET))(this, map);
		}

		::System::Threading::Tasks::Task* BackupAsync(::System::String* destinationDatabasePath, ::System::String* databaseName)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_BACKUPASYNC_OFFSET))(this, destinationDatabasePath, databaseName);
		}

		::System::Threading::Tasks::Task_1<::System::Object*>* GetAsync(::System::Object* pk, ::SQLite::TableMapping* map)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Object*>*(*)(::PVOID, ::System::Object*, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETASYNC_OFFSET))(this, pk, map);
		}

		::System::Threading::Tasks::Task_1<::System::Object*>* FindAsync(::System::Object* pk, ::SQLite::TableMapping* map)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Object*>*(*)(::PVOID, ::System::Object*, ::SQLite::TableMapping*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_FINDASYNC_OFFSET))(this, pk, map);
		}

		::System::Threading::Tasks::Task_1<::System::Object*>* FindWithQueryAsync(::SQLite::TableMapping* map, ::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Object*>*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_FINDWITHQUERYASYNC_OFFSET))(this, map, query, args);
		}

		::System::Threading::Tasks::Task_1<::SQLite::TableMapping*>* GetMappingAsync(::System::Type* type, ::SQLite::CreateFlags createFlags)
		{
			return ((::System::Threading::Tasks::Task_1<::SQLite::TableMapping*>*(*)(::PVOID, ::System::Type*, ::SQLite::CreateFlags))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETMAPPINGASYNC_OFFSET))(this, type, createFlags);
		}

		::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::SQLite::SQLiteConnection_ColumnInfo*>*>* GetTableInfoAsync(::System::String* tableName)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::SQLite::SQLiteConnection_ColumnInfo*>*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_GETTABLEINFOASYNC_OFFSET))(this, tableName);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* ExecuteAsync(::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_EXECUTEASYNC_OFFSET))(this, query, args);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAllAsync(::System::Collections::IEnumerable* objects, ::System::Boolean runInTransaction)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_OFFSET))(this, objects, runInTransaction);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAllAsync_1(::System::Collections::IEnumerable* objects, ::System::String* extra, ::System::Boolean runInTransaction)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_1_OFFSET))(this, objects, extra, runInTransaction);
		}

		::System::Threading::Tasks::Task_1<::System::Int32>* InsertAllAsync_2(::System::Collections::IEnumerable* objects, ::System::Type* objType, ::System::Boolean runInTransaction)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Int32>*(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_INSERTALLASYNC_2_OFFSET))(this, objects, objType, runInTransaction);
		}

		::System::Threading::Tasks::Task* RunInTransactionAsync(::System::Action_1<::SQLite::SQLiteConnection*>* action)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::Action_1<::SQLite::SQLiteConnection*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_RUNINTRANSACTIONASYNC_OFFSET))(this, action);
		}

		::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::System::Object*>*>* QueryAsync(::SQLite::TableMapping* map, ::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::List_1<::System::Object*>*>*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_QUERYASYNC_OFFSET))(this, map, query, args);
		}

		::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>* DeferredQueryAsync(::SQLite::TableMapping* map, ::System::String* query, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Threading::Tasks::Task_1<::System::Collections::Generic::IEnumerable_1<::System::Object*>*>*(*)(::PVOID, ::SQLite::TableMapping*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_DEFERREDQUERYASYNC_OFFSET))(this, map, query, args);
		}

		::System::Threading::Tasks::Task* ReKeyAsync(::System::String* key)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_REKEYASYNC_OFFSET))(this, key);
		}

		::System::Threading::Tasks::Task* ReKeyAsync_1(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Threading::Tasks::Task*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION_REKEYASYNC_1_OFFSET))(this, key);
		}

		::System::Void _CloseAsync_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITEASYNCCONNECTION__CLOSEASYNC_B__31_0_OFFSET))(this);
		}
	};
}
