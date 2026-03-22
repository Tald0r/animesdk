#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlReader.h"

namespace System { class String; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlValidatingReaderImpl; }

#define SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1A68DF00)
#define SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1A68DF40)
#define SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A68DEC0)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1A68DE80)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1A68DE00)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1A68DDC0)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1A68E100)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1A68DE40)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A68DCC0)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMESPACES_OFFSET UNITYSDK_OFFSET(0x1A68E290)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1A68DD00)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1A68E190)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A68DC80)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1A68DD40)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1A68E140)
#define SYSTEM_XML_XMLVALIDATINGREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A68DD80)
#define SYSTEM_XML_XMLVALIDATINGREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1A68E1D0)
#define SYSTEM_XML_XMLVALIDATINGREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A68DF80)
#define SYSTEM_XML_XMLVALIDATINGREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1A68E040)
#define SYSTEM_XML_XMLVALIDATINGREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A68DFC0)
#define SYSTEM_XML_XMLVALIDATINGREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A68E000)
#define SYSTEM_XML_XMLVALIDATINGREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1A68E080)
#define SYSTEM_XML_XMLVALIDATINGREADER_READ_OFFSET UNITYSDK_OFFSET(0x1A68E0E0)
#define SYSTEM_XML_XMLVALIDATINGREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1A68E240)

namespace System::Xml
{
	inline static constexpr unsigned int XmlValidatingReader_TypeDefinitionIndex = 1738;

	class XmlValidatingReader : public ::System::Xml::XmlReader
	{
	public:
		::System::Xml::XmlValidatingReaderImpl* impl; // 0x10

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_BASEURI_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttribute_1(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_1_OFFSET))(this, localName, namespaceURI);
		}

		::System::String* GetAttribute_2(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GETATTRIBUTE_2_OFFSET))(this, i);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_MOVETONEXTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_MOVETOELEMENT_OFFSET))(this);
		}

		::System::Boolean ReadAttributeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_READATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_READ_OFFSET))(this);
		}

		::System::Boolean get_EOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_EOF_OFFSET))(this);
		}

		::System::Xml::ReadState get_ReadState()
		{
			return ((::System::Xml::ReadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_READSTATE_OFFSET))(this);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMETABLE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Void ResolveEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_RESOLVEENTITY_OFFSET))(this);
		}

		::System::Boolean get_Namespaces()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLVALIDATINGREADER_GET_NAMESPACES_OFFSET))(this);
		}
	};
}
