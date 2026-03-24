#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaAnnotated.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AA91C90)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_NAMEATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AA91CA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA91CB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaNotation_TypeDefinitionIndex = 2170;

	class XmlSchemaNotation : public ::System::Xml::Schema::XmlSchemaAnnotated
	{
	public:
		::System::String* systemId; // 0x50
		::System::String* publicId; // 0x58
		::System::Xml::XmlQualifiedName* qname; // 0x60
		::System::String* name; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION__CTOR_OFFSET))(this);
		}

		::System::String* get_NameAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_GET_NAMEATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_NameAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMANOTATION_SET_NAMEATTRIBUTE_OFFSET))(this, value);
		}
	};
}
