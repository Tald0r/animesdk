#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaGroupBase.h"

namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1AA91A00)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x1AA919F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL_SETITEMS_OFFSET UNITYSDK_OFFSET(0x1AA91AB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA91AC0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAll_TypeDefinitionIndex = 2115;

	class XmlSchemaAll : public ::System::Xml::Schema::XmlSchemaGroupBase
	{
	public:
		::System::Xml::Schema::XmlSchemaObjectCollection* items; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObjectCollection* get_Items()
		{
			return ((::System::Xml::Schema::XmlSchemaObjectCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ITEMS_OFFSET))(this);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Void SetItems(::System::Xml::Schema::XmlSchemaObjectCollection* newItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAALL_SETITEMS_OFFSET))(this, newItems);
		}
	};
}
