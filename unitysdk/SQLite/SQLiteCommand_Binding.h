#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SQLITE_SQLITECOMMAND_BINDING_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A0701B0)
#define SQLITE_SQLITECOMMAND_BINDING_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A070170)
#define SQLITE_SQLITECOMMAND_BINDING_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A070190)
#define SQLITE_SQLITECOMMAND_BINDING_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A0701C0)
#define SQLITE_SQLITECOMMAND_BINDING_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1A070180)
#define SQLITE_SQLITECOMMAND_BINDING_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A0701A0)
#define SQLITE_SQLITECOMMAND_BINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1A06F010)

namespace SQLite
{
	inline static constexpr unsigned int SQLiteCommand_Binding_TypeDefinitionIndex = 35250;

	class SQLiteCommand_Binding : public ::System::Object
	{
	public:
		::System::Object* _Value_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::Int32 _Index_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDING__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDING_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDING_SET_NAME_OFFSET))(this, value);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDING_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDING_SET_VALUE_OFFSET))(this, value);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDING_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SQLITE_SQLITECOMMAND_BINDING_SET_INDEX_OFFSET))(this, value);
		}
	};
}
