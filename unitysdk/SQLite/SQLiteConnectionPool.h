#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace SQLite { class SQLiteConnectionPool_Entry; }
namespace SQLite { class SQLiteConnectionString; }
namespace SQLite { class SQLiteConnectionWithLock; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SQLITE_SQLITECONNECTIONPOOL_CLOSECONNECTION_OFFSET UNITYSDK_OFFSET(0x1A634D40)
#define SQLITE_SQLITECONNECTIONPOOL_GETCONNECTIONANDTRANSACTIONLOCK_OFFSET UNITYSDK_OFFSET(0x1A633080)
#define SQLITE_SQLITECONNECTIONPOOL_GETCONNECTION_OFFSET UNITYSDK_OFFSET(0x1A632F80)
#define SQLITE_SQLITECONNECTIONPOOL_GET_SHARED_OFFSET UNITYSDK_OFFSET(0x1A6406A0)
#define SQLITE_SQLITECONNECTIONPOOL_RESET_OFFSET UNITYSDK_OFFSET(0x1A632C60)
#define SQLITE_SQLITECONNECTIONPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A640900)
#define SQLITE_SQLITECONNECTIONPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A640860)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteConnectionPool_TypeDefinitionIndex = 36334;

	class SQLiteConnectionPool : public ::System::Object
	{
	public:
		static ::SQLite::SQLiteConnectionPool** StaticGet__shared()
		{
			return (::SQLite::SQLiteConnectionPool**)Il2CppClass::FromTypeDefinitionIndex(SQLiteConnectionPool_TypeDefinitionIndex)->GetStaticField(0x267E0);
		}
		::System::Object* _entriesLock; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::SQLite::SQLiteConnectionPool_Entry*>* _entries; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL__CCTOR_OFFSET))();
		}

		static ::SQLite::SQLiteConnectionPool* get_Shared()
		{
			return ((::SQLite::SQLiteConnectionPool*(*)())((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_GET_SHARED_OFFSET))();
		}

		::SQLite::SQLiteConnectionWithLock* GetConnection(::SQLite::SQLiteConnectionString* connectionString)
		{
			return ((::SQLite::SQLiteConnectionWithLock*(*)(::PVOID, ::SQLite::SQLiteConnectionString*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_GETCONNECTION_OFFSET))(this, connectionString);
		}

		::SQLite::SQLiteConnectionWithLock* GetConnectionAndTransactionLock(::SQLite::SQLiteConnectionString* connectionString, ::System::Object*& transactionLock)
		{
			return ((::SQLite::SQLiteConnectionWithLock*(*)(::PVOID, ::SQLite::SQLiteConnectionString*, ::System::Object*&))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_GETCONNECTIONANDTRANSACTIONLOCK_OFFSET))(this, connectionString, transactionLock);
		}

		::System::Void CloseConnection(::SQLite::SQLiteConnectionString* connectionString)
		{
			return ((::System::Void(*)(::PVOID, ::SQLite::SQLiteConnectionString*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_CLOSECONNECTION_OFFSET))(this, connectionString);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECONNECTIONPOOL_RESET_OFFSET))(this);
		}
	};
}
