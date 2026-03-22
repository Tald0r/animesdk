#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"
#include "unitysdk/System/Xml/XmlNodeReaderNavigator_VirtualAttribute.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Xml { class XmlDeclaration; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlDocumentType; }
namespace System::Xml { class XmlElement; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNode; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }

#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_CHECKINDEXCONDITION_OFFSET UNITYSDK_OFFSET(0x1947ACD0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_DEFAULTLOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1947CBC0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTEFROMELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1947B420)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTEFROMELEMENT_OFFSET UNITYSDK_OFFSET(0x1947B180)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1947B460)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1947B6D0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1947B1C0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECATTRIND_OFFSET UNITYSDK_OFFSET(0x1947AE90)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECLARATIONATTR_1_OFFSET UNITYSDK_OFFSET(0x1947AE40)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECLARATIONATTR_OFFSET UNITYSDK_OFFSET(0x1947AD40)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCTYPEATTRIND_OFFSET UNITYSDK_OFFSET(0x1947B090)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCUMENTTYPEATTR_1_OFFSET UNITYSDK_OFFSET(0x1947B040)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCUMENTTYPEATTR_OFFSET UNITYSDK_OFFSET(0x1947AF80)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1947D150)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1947AA20)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1947A820)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1947A950)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1947A8B0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISONDECLORDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1947BAF0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1947A300)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1947A1C0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1947A1F0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1947A180)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1947A380)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1947A9F0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1947A3B0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1947A880)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1947A850)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_INITDECATTR_OFFSET UNITYSDK_OFFSET(0x1947A690)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_INITDOCTYPEATTR_OFFSET UNITYSDK_OFFSET(0x1947ABD0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_ISLOCALNAMEEMPTY_OFFSET UNITYSDK_OFFSET(0x1947A2E0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOGMOVE_OFFSET UNITYSDK_OFFSET(0x1947BAA0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1947C980)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1947CCF0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTEFROMELEMENT_OFFSET UNITYSDK_OFFSET(0x1947C1D0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1947BD70)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1947C280)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1947BD60)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1947C910)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOFIRSTCHILD_OFFSET UNITYSDK_OFFSET(0x1947C7F0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1947C530)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x1947C840)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXT_OFFSET UNITYSDK_OFFSET(0x1947C890)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOPARENT_OFFSET UNITYSDK_OFFSET(0x1947C7A0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1947D7C0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_RESETMOVE_OFFSET UNITYSDK_OFFSET(0x1947BBE0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_RESETTOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1947BB30)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_ROLLBACKMOVE_OFFSET UNITYSDK_OFFSET(0x1947BAC0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19479F60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeReaderNavigator_TypeDefinitionIndex = 1782;

	class XmlNodeReaderNavigator : public ::System::Object
	{
	public:
		::System::Xml::XmlNameTable* nameTable; // 0x10
		::System::Xml::XmlNode* logNode; // 0x18
		::Il2CppArray<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute>* decNodeAttributes; // 0x20
		::System::Xml::XmlNode* elemNode; // 0x28
		::Il2CppArray<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute>* docTypeNodeAttributes; // 0x30
		::System::Xml::XmlNode* curNode; // 0x38
		::System::Xml::XmlDocument* doc; // 0x40
		::System::Int32 attrIndex; // 0x48
		::System::Int32 nAttrInd; // 0x4C
		::System::Int32 logAttrIndex; // 0x50
		::System::Int32 nDeclarationAttrCount; // 0x54
		::System::Int32 nLogAttrInd; // 0x58
		::System::Int32 nDocTypeAttrCount; // 0x5C
		::System::Int32 nLogLevel; // 0x60
		::System::Boolean bCreatedOnAttribute; // 0x64
		::System::Boolean bLogOnAttrVal; // 0x65
		::System::Boolean bOnAttrVal; // 0x66

		::System::Void _ctor(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR__CTOR_OFFSET))(this, node);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Boolean IsLocalNameEmpty(::System::Xml::XmlNodeType nt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_ISLOCALNAMEEMPTY_OFFSET))(this, nt);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_BASEURI_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_XMLLANG_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_SCHEMAINFO_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::Void CheckIndexCondition(::System::Int32 attributeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_CHECKINDEXCONDITION_OFFSET))(this, attributeIndex);
		}

		::System::Void InitDecAttr()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_INITDECATTR_OFFSET))(this);
		}

		::System::String* GetDeclarationAttr(::System::Xml::XmlDeclaration* decl, ::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlDeclaration*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECLARATIONATTR_OFFSET))(this, decl, name);
		}

		::System::String* GetDeclarationAttr_1(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECLARATIONATTR_1_OFFSET))(this, i);
		}

		::System::Int32 GetDecAttrInd(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECATTRIND_OFFSET))(this, name);
		}

		::System::Void InitDocTypeAttr()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_INITDOCTYPEATTR_OFFSET))(this);
		}

		::System::String* GetDocumentTypeAttr(::System::Xml::XmlDocumentType* docType, ::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlDocumentType*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCUMENTTYPEATTR_OFFSET))(this, docType, name);
		}

		::System::String* GetDocumentTypeAttr_1(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCUMENTTYPEATTR_1_OFFSET))(this, i);
		}

		::System::Int32 GetDocTypeAttrInd(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCTYPEATTRIND_OFFSET))(this, name);
		}

		::System::String* GetAttributeFromElement(::System::Xml::XmlElement* elem, ::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlElement*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTEFROMELEMENT_OFFSET))(this, elem, name);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttributeFromElement_1(::System::Xml::XmlElement* elem, ::System::String* name, ::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlElement*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTEFROMELEMENT_1_OFFSET))(this, elem, name, ns);
		}

		::System::String* GetAttribute_1(::System::String* name, ::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_1_OFFSET))(this, name, ns);
		}

		::System::String* GetAttribute_2(::System::Int32 attributeIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_2_OFFSET))(this, attributeIndex);
		}

		::System::Void LogMove(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOGMOVE_OFFSET))(this, level);
		}

		::System::Void RollBackMove(::System::Int32& level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_ROLLBACKMOVE_OFFSET))(this, level);
		}

		::System::Boolean get_IsOnDeclOrDocType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISONDECLORDOCTYPE_OFFSET))(this);
		}

		::System::Void ResetToAttribute(::System::Int32& level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_RESETTOATTRIBUTE_OFFSET))(this, level);
		}

		::System::Void ResetMove(::System::Int32& level, ::System::Xml::XmlNodeType& nt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Xml::XmlNodeType&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_RESETMOVE_OFFSET))(this, level, nt);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Boolean MoveToAttributeFromElement(::System::Xml::XmlElement* elem, ::System::String* name, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlElement*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTEFROMELEMENT_OFFSET))(this, elem, name, ns);
		}

		::System::Boolean MoveToAttribute_1(::System::String* name, ::System::String* namespaceURI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_1_OFFSET))(this, name, namespaceURI);
		}

		::System::Void MoveToAttribute_2(::System::Int32 attributeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_2_OFFSET))(this, attributeIndex);
		}

		::System::Boolean MoveToNextAttribute(::System::Int32& level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXTATTRIBUTE_OFFSET))(this, level);
		}

		::System::Boolean MoveToParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOPARENT_OFFSET))(this);
		}

		::System::Boolean MoveToFirstChild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOFIRSTCHILD_OFFSET))(this);
		}

		::System::Boolean MoveToNextSibling(::System::Xml::XmlNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXTSIBLING_OFFSET))(this, node);
		}

		::System::Boolean MoveToNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXT_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOELEMENT_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* DefaultLookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_DEFAULTLOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::Boolean ReadAttributeValue(::System::Int32& level, ::System::Boolean& bResolveEntity, ::System::Xml::XmlNodeType& nt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Boolean&, ::System::Xml::XmlNodeType&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_READATTRIBUTEVALUE_OFFSET))(this, level, bResolveEntity, nt);
		}
	};
}
