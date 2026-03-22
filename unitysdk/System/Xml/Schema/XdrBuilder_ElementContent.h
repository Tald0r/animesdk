#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }
namespace System::Xml::Schema { class SchemaElementDecl; }

#define SYSTEM_XML_SCHEMA_XDRBUILDER_ELEMENTCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE1D60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XdrBuilder_ElementContent_TypeDefinitionIndex = 2102;

	class XdrBuilder_ElementContent : public ::System::Object
	{
	public:
		::System::Xml::Schema::SchemaElementDecl* _ElementDecl; // 0x10
		::System::Collections::Hashtable* _AttDefList; // 0x18
		::System::Boolean _HasType; // 0x20
		::System::Boolean _HasDataType; // 0x21
		::System::UInt32 _MinVal; // 0x24
		::System::UInt32 _MaxVal; // 0x28
		::System::Int32 _OrderAttr; // 0x2C
		::System::UInt32 _MinLength; // 0x30
		::System::UInt32 _MaxLength; // 0x34
		::System::Boolean _AllowDataType; // 0x38
		::System::Boolean _MasterGroupRequired; // 0x39
		::System::Boolean _ExistTerminal; // 0x3A
		::System::Boolean _EnumerationRequired; // 0x3B
		::System::Int32 _ContentAttr; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XDRBUILDER_ELEMENTCONTENT__CTOR_OFFSET))(this);
		}
	};
}
