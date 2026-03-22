#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlCharacterData.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLTEXT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1A5B4C40)
#define SYSTEM_XML_XMLTEXT_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x1A5B4D90)
#define SYSTEM_XML_XMLTEXT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1A5B4B80)
#define SYSTEM_XML_XMLTEXT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A5B4B60)
#define SYSTEM_XML_XMLTEXT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1A5B4BA0)
#define SYSTEM_XML_XMLTEXT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1A5B4BB0)
#define SYSTEM_XML_XMLTEXT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A5B4C90)
#define SYSTEM_XML_XMLTEXT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A5B4CB0)
#define SYSTEM_XML_XMLTEXT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1A5B4D80)
#define SYSTEM_XML_XMLTEXT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A5B4D40)
#define SYSTEM_XML_XMLTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5B4AE0)
#define SYSTEM_XML_XMLTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5B4A80)

namespace System::Xml
{
	inline static constexpr unsigned int XmlText_TypeDefinitionIndex = 1788;

	class XmlText : public ::System::Xml::XmlCharacterData
	{
	public:
		::System::Void _ctor(::System::String* strData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT__CTOR_OFFSET))(this, strData);
		}

		::System::Void _ctor_1(::System::String* strData, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT__CTOR_1_OFFSET))(this, strData, doc);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_CLONENODE_OFFSET))(this, deep);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_WRITECONTENTTO_OFFSET))(this, w);
		}

		::System::Boolean get_IsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_ISTEXT_OFFSET))(this);
		}
	};
}
