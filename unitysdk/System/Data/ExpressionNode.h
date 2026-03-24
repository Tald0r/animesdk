#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/Common/StorageType.h"
#include "unitysdk/System/Data/DataRowVersion.h"
#include "unitysdk/System/Object.h"

namespace System { class IFormatProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_EXPRESSIONNODE_DEPENDSON_OFFSET UNITYSDK_OFFSET(0x1AD97BA0)
#define SYSTEM_DATA_EXPRESSIONNODE_GET_FORMATPROVIDER_OFFSET UNITYSDK_OFFSET(0x1AD97AC0)
#define SYSTEM_DATA_EXPRESSIONNODE_GET_ISSQLCOLUMN_OFFSET UNITYSDK_OFFSET(0x1AD97B90)
#define SYSTEM_DATA_EXPRESSIONNODE_ISFLOATSQL_OFFSET UNITYSDK_OFFSET(0x1AD97C40)
#define SYSTEM_DATA_EXPRESSIONNODE_ISFLOAT_OFFSET UNITYSDK_OFFSET(0x1AD97C10)
#define SYSTEM_DATA_EXPRESSIONNODE_ISINTEGERSQL_OFFSET UNITYSDK_OFFSET(0x1AD97BC0)
#define SYSTEM_DATA_EXPRESSIONNODE_ISINTEGER_OFFSET UNITYSDK_OFFSET(0x1AD97BB0)
#define SYSTEM_DATA_EXPRESSIONNODE_ISNUMERICSQL_OFFSET UNITYSDK_OFFSET(0x1AD97CA0)
#define SYSTEM_DATA_EXPRESSIONNODE_ISNUMERIC_OFFSET UNITYSDK_OFFSET(0x1AD97C90)
#define SYSTEM_DATA_EXPRESSIONNODE_ISSIGNEDSQL_OFFSET UNITYSDK_OFFSET(0x1AD97C20)
#define SYSTEM_DATA_EXPRESSIONNODE_ISSIGNED_OFFSET UNITYSDK_OFFSET(0x1AD97BE0)
#define SYSTEM_DATA_EXPRESSIONNODE_ISUNSIGNEDSQL_OFFSET UNITYSDK_OFFSET(0x1AD97C70)
#define SYSTEM_DATA_EXPRESSIONNODE_ISUNSIGNED_OFFSET UNITYSDK_OFFSET(0x1AD97C60)
#define SYSTEM_DATA_EXPRESSIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD97AB0)

namespace System::Data
{
	inline static constexpr unsigned int ExpressionNode_TypeDefinitionIndex = 36472;

	class ExpressionNode : public ::System::Object
	{
	public:
		::System::Data::DataTable* _table; // 0x10

		::System::Void _ctor(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE__CTOR_OFFSET))(this, table);
		}

		::System::IFormatProvider* get_FormatProvider()
		{
			return ((::System::IFormatProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_GET_FORMATPROVIDER_OFFSET))(this);
		}

		::System::Boolean get_IsSqlColumn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_GET_ISSQLCOLUMN_OFFSET))(this);
		}

		::System::Boolean DependsOn(::System::Data::DataColumn* column)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_DEPENDSON_OFFSET))(this, column);
		}

		static ::System::Boolean IsInteger(::System::Data::Common::StorageType type)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISINTEGER_OFFSET))(type);
		}

		static ::System::Boolean IsIntegerSql(::System::Data::Common::StorageType type)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISINTEGERSQL_OFFSET))(type);
		}

		static ::System::Boolean IsSigned(::System::Data::Common::StorageType type)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISSIGNED_OFFSET))(type);
		}

		static ::System::Boolean IsSignedSql(::System::Data::Common::StorageType type)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISSIGNEDSQL_OFFSET))(type);
		}

		static ::System::Boolean IsUnsigned(::System::Data::Common::StorageType type)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISUNSIGNED_OFFSET))(type);
		}

		static ::System::Boolean IsUnsignedSql(::System::Data::Common::StorageType type)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISUNSIGNEDSQL_OFFSET))(type);
		}

		static ::System::Boolean IsNumeric(::System::Data::Common::StorageType type)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISNUMERIC_OFFSET))(type);
		}

		static ::System::Boolean IsNumericSql(::System::Data::Common::StorageType type)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISNUMERICSQL_OFFSET))(type);
		}

		static ::System::Boolean IsFloat(::System::Data::Common::StorageType type)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISFLOAT_OFFSET))(type);
		}

		static ::System::Boolean IsFloatSql(::System::Data::Common::StorageType type)
		{
			return ((::System::Boolean(*)(::System::Data::Common::StorageType))((::PBYTE)hIl2Cpp + SYSTEM_DATA_EXPRESSIONNODE_ISFLOATSQL_OFFSET))(type);
		}
	};
}
