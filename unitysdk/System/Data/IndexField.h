#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Data { class DataColumn; }

#define SYSTEM_DATA_INDEXFIELD_EQUALS_OFFSET UNITYSDK_OFFSET(0x8E7580)
#define SYSTEM_DATA_INDEXFIELD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8E75F0)
#define SYSTEM_DATA_INDEXFIELD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19B8CB40)
#define SYSTEM_DATA_INDEXFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x2D5CF0)

namespace System::Data
{
	inline static constexpr unsigned int IndexField_TypeDefinitionIndex = 35496;

	struct alignas(8) IndexField
	{
		::System::Data::DataColumn* Column; // 0x10
		::System::Boolean IsDescending; // 0x18

		::System::Void _ctor(::System::Data::DataColumn* column, ::System::Boolean isDescending)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEXFIELD__CTOR_OFFSET))(this, column, isDescending);
		}

		static ::System::Boolean op_Equality(::System::Data::IndexField if1, ::System::Data::IndexField if2)
		{
			return ((::System::Boolean(*)(::System::Data::IndexField, ::System::Data::IndexField))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEXFIELD_OP_EQUALITY_OFFSET))(if1, if2);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEXFIELD_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INDEXFIELD_GETHASHCODE_OFFSET))(this);
		}
	};
}
