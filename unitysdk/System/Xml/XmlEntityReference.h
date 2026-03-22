#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlLinkedNode.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLENTITYREFERENCE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x19E70280)
#define SYSTEM_XML_XMLENTITYREFERENCE_CONSTRUCTBASEURI_OFFSET UNITYSDK_OFFSET(0x19E707B0)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x19E70790)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_CHILDBASEURI_OFFSET UNITYSDK_OFFSET(0x19E70840)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x19E702D0)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19E702C0)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x19E70400)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x19E701F0)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19E701E0)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x19E70270)
#define SYSTEM_XML_XMLENTITYREFERENCE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19E70200)
#define SYSTEM_XML_XMLENTITYREFERENCE_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x19E70420)
#define SYSTEM_XML_XMLENTITYREFERENCE_SETPARENTFORLOAD_OFFSET UNITYSDK_OFFSET(0x19E70370)
#define SYSTEM_XML_XMLENTITYREFERENCE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x19E702E0)
#define SYSTEM_XML_XMLENTITYREFERENCE_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x19E70410)
#define SYSTEM_XML_XMLENTITYREFERENCE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19E70210)
#define SYSTEM_XML_XMLENTITYREFERENCE_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x19E70470)
#define SYSTEM_XML_XMLENTITYREFERENCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x19E70440)
#define SYSTEM_XML_XMLENTITYREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19E70020)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEntityReference_TypeDefinitionIndex = 1768;

	class XmlEntityReference : public ::System::Xml::XmlLinkedNode
	{
	public:
		::System::Xml::XmlLinkedNode* lastChild; // 0x20
		::System::String* name; // 0x28

		::System::Void _ctor(::System::String* name, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE__CTOR_OFFSET))(this, name, doc);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_CLONENODE_OFFSET))(this, deep);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Void SetParent(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_SETPARENT_OFFSET))(this, node);
		}

		::System::Void SetParentForLoad(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_SETPARENTFORLOAD_OFFSET))(this, node);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_SET_LASTNODE_OFFSET))(this, value);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_ISVALIDCHILDTYPE_OFFSET))(this, type);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_WRITECONTENTTO_OFFSET))(this, w);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_BASEURI_OFFSET))(this);
		}

		::System::String* ConstructBaseURI(::System::String* baseURI, ::System::String* systemId)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_CONSTRUCTBASEURI_OFFSET))(this, baseURI, systemId);
		}

		::System::String* get_ChildBaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLENTITYREFERENCE_GET_CHILDBASEURI_OFFSET))(this);
		}
	};
}
