#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlName; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }

#define SYSTEM_XML_DOMNAMETABLE_ADDNAME_OFFSET UNITYSDK_OFFSET(0x1A6A5630)
#define SYSTEM_XML_DOMNAMETABLE_GETNAME_OFFSET UNITYSDK_OFFSET(0x1A6A5310)
#define SYSTEM_XML_DOMNAMETABLE_GROW_OFFSET UNITYSDK_OFFSET(0x1A6A5B50)
#define SYSTEM_XML_DOMNAMETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A5290)

namespace System::Xml
{
	inline static constexpr unsigned int DomNameTable_TypeDefinitionIndex = 1750;

	class DomNameTable : public ::System::Object
	{
	public:
		::System::Xml::XmlNameTable* nameTable; // 0x10
		::System::Xml::XmlDocument* ownerDocument; // 0x18
		::Il2CppArray<::System::Xml::XmlName*>* entries; // 0x20
		::System::Int32 mask; // 0x28
		::System::Int32 count; // 0x2C

		::System::Void _ctor(::System::Xml::XmlDocument* document)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE__CTOR_OFFSET))(this, document);
		}

		::System::Xml::XmlName* GetName(::System::String* prefix, ::System::String* localName, ::System::String* ns, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
		{
			return ((::System::Xml::XmlName*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE_GETNAME_OFFSET))(this, prefix, localName, ns, schemaInfo);
		}

		::System::Xml::XmlName* AddName(::System::String* prefix, ::System::String* localName, ::System::String* ns, ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo)
		{
			return ((::System::Xml::XmlName*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE_ADDNAME_OFFSET))(this, prefix, localName, ns, schemaInfo);
		}

		::System::Void Grow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE_GROW_OFFSET))(this);
		}
	};
}
