#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataRowAction.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Data { class ConstraintCollection; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataRow; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }
namespace System::Data { class PropertyCollection; }

#define SYSTEM_DATA_CONSTRAINT_CHECKCONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1A6D56B0)
#define SYSTEM_DATA_CONSTRAINT_CHECKSTATEFORPROPERTY_OFFSET UNITYSDK_OFFSET(0x1A6D5710)
#define SYSTEM_DATA_CONSTRAINT_GET_EXTENDEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A6D5620)
#define SYSTEM_DATA_CONSTRAINT_GET_SCHEMANAME_OFFSET UNITYSDK_OFFSET(0x1A6D55B0)
#define SYSTEM_DATA_CONSTRAINT_SET_CONSTRAINTNAME_OFFSET UNITYSDK_OFFSET(0x1A6D4E90)
#define SYSTEM_DATA_CONSTRAINT_SET_INCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1A6D55E0)
#define SYSTEM_DATA_CONSTRAINT_SET_SCHEMANAME_OFFSET UNITYSDK_OFFSET(0x1A6D55D0)
#define SYSTEM_DATA_CONSTRAINT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A6D5840)
#define SYSTEM_DATA_CONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6D5850)

namespace System::Data
{
	inline static constexpr unsigned int Constraint_TypeDefinitionIndex = 36396;

	class Constraint : public ::System::Object
	{
	public:
		::System::String* _schemaName; // 0x10
		::System::Data::DataSet* _dataSet; // 0x18
		::System::Data::PropertyCollection* _extendedProperties; // 0x20
		::System::String* _name; // 0x28
		::System::Boolean _inCollection; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT__CTOR_OFFSET))(this);
		}

		::System::Void set_ConstraintName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_SET_CONSTRAINTNAME_OFFSET))(this, value);
		}

		::System::String* get_SchemaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_GET_SCHEMANAME_OFFSET))(this);
		}

		::System::Void set_SchemaName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_SET_SCHEMANAME_OFFSET))(this, value);
		}

		::System::Void set_InCollection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_SET_INCOLLECTION_OFFSET))(this, value);
		}

		::System::Data::PropertyCollection* get_ExtendedProperties()
		{
			return ((::System::Data::PropertyCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_GET_EXTENDEDPROPERTIES_OFFSET))(this);
		}

		::System::Void CheckConstraint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CHECKCONSTRAINT_OFFSET))(this);
		}

		::System::Void CheckStateForProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_CHECKSTATEFORPROPERTY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_CONSTRAINT_TOSTRING_OFFSET))(this);
		}
	};
}
