#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/SchemaType.h"

namespace System { class String; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_SCHEMANAMES_CREATETOKENTOQNAMETABLE_OFFSET UNITYSDK_OFFSET(0x19A385A0)
#define SYSTEM_XML_SCHEMA_SCHEMANAMES_ISXDRROOT_OFFSET UNITYSDK_OFFSET(0x19A3CC90)
#define SYSTEM_XML_SCHEMA_SCHEMANAMES_ISXSDROOT_OFFSET UNITYSDK_OFFSET(0x19A3CC10)
#define SYSTEM_XML_SCHEMA_SCHEMANAMES_SCHEMATYPEFROMROOT_OFFSET UNITYSDK_OFFSET(0x19A3CB10)
#define SYSTEM_XML_SCHEMA_SCHEMANAMES__CTOR_OFFSET UNITYSDK_OFFSET(0x19A35A10)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int SchemaNames_TypeDefinitionIndex = 2089;

	class SchemaNames : public ::System::Object
	{
	public:
		::System::Xml::XmlQualifiedName* QnXsdKeyRef; // 0x10
		::System::Xml::XmlQualifiedName* QnRef; // 0x18
		::System::Xml::XmlQualifiedName* QnMemberTypes; // 0x20
		::System::Xml::XmlQualifiedName* QnNamespace; // 0x28
		::System::Xml::XmlQualifiedName* QnXsdUnique; // 0x30
		::System::Xml::XmlQualifiedName* QnMaxOccurs; // 0x38
		::System::Xml::XmlQualifiedName* QnXsdComplexContent; // 0x40
		::System::String* NsXsi; // 0x48
		::System::Xml::XmlQualifiedName* QnXdrElement; // 0x50
		::System::Xml::XmlQualifiedName* QnXPath; // 0x58
		::System::Xml::XmlQualifiedName* QnDtMin; // 0x60
		::System::Xml::XmlQualifiedName* QnBase; // 0x68
		::System::Xml::XmlQualifiedName* QnXsdTotalDigits; // 0x70
		::System::Xml::XmlQualifiedName* QnNo; // 0x78
		::System::Xml::XmlQualifiedName* QnSubstitutionGroup; // 0x80
		::System::Xml::XmlQualifiedName* QnClosed; // 0x88
		::System::Xml::XmlQualifiedName* QnID; // 0x90
		::System::String* XsdSchema; // 0x98
		::System::Xml::XmlQualifiedName* QnXmlLang; // 0xA0
		::System::Xml::XmlQualifiedName* QnOne; // 0xA8
		::System::Xml::XmlQualifiedName* QnXsdChoice; // 0xB0
		::System::Xml::XmlQualifiedName* QnXsdInclude; // 0xB8
		::System::Xml::XmlQualifiedName* QnDefault; // 0xC0
		::System::Xml::XmlQualifiedName* QnXsdExtension; // 0xC8
		::System::Xml::XmlQualifiedName* QnContent; // 0xD0
		::System::Xml::XmlQualifiedName* QnDtMax; // 0xD8
		::System::Xml::XmlQualifiedName* QnXsdAppinfo; // 0xE0
		::System::Xml::XmlQualifiedName* QnTargetNamespace; // 0xE8
		::System::Xml::XmlQualifiedName* QnName; // 0xF0
		::System::Xml::XmlQualifiedName* QnNillable; // 0xF8
		::System::Xml::XmlQualifiedName* QnXsdGroup; // 0x100
		::System::Xml::XmlQualifiedName* QnXsdMinExclusive; // 0x108
		::System::Xml::XmlQualifiedName* QnXsdKey; // 0x110
		::System::Xml::XmlQualifiedName* QnDtMaxExclusive; // 0x118
		::System::Xml::XmlQualifiedName* QnXdrElementType; // 0x120
		::System::Xml::XmlQualifiedName* QnProcessContents; // 0x128
		::System::String* NsXml; // 0x130
		::System::Xml::XmlQualifiedName* QnXdrAttribute; // 0x138
		::System::String* NsDataTypeOld; // 0x140
		::System::Xml::XmlQualifiedName* QnXsdAttribute; // 0x148
		::System::Xml::XmlQualifiedName* QnAbstract; // 0x150
		::System::String* NsDataTypeAlias; // 0x158
		::System::Xml::XmlQualifiedName* QnXsdMaxLength; // 0x160
		::System::Xml::XmlQualifiedName* QnRequired; // 0x168
		::System::Xml::XmlQualifiedName* QnUse; // 0x170
		::System::Xml::XmlQualifiedName* QnXdrDataType; // 0x178
		::System::Xml::XmlQualifiedName* QnXsdDocumentation; // 0x180
		::System::Xml::XmlQualifiedName* QnXsdPattern; // 0x188
		::System::Xml::XmlQualifiedName* QnSeq; // 0x190
		::System::Xml::XmlQualifiedName* QnXdrExtends; // 0x198
		::System::Xml::XmlQualifiedName* QnOrder; // 0x1A0
		::System::Xml::XmlQualifiedName* QnXsdRedefine; // 0x1A8
		::System::Xml::XmlQualifiedName* QnInfinite; // 0x1B0
		::System::Xml::XmlQualifiedName* QnXsdAll; // 0x1B8
		::System::Xml::XmlQualifiedName* QnString; // 0x1C0
		::System::Xml::XmlQualifiedName* QnDtDt; // 0x1C8
		::System::Xml::XmlQualifiedName* QnSource; // 0x1D0
		::System::Xml::XmlQualifiedName* QnXdrSchema; // 0x1D8
		::System::Xml::XmlQualifiedName* QnMany; // 0x1E0
		::System::Xml::XmlQualifiedName* QnIDRef; // 0x1E8
		::System::String* XsiNil; // 0x1F0
		::System::Xml::XmlQualifiedName* QnForm; // 0x1F8
		::System::Xml::XmlQualifiedName* QnXdrGroup; // 0x200
		::Il2CppArray<::System::Xml::XmlQualifiedName*>* TokenToQName; // 0x208
		::System::Xml::XmlQualifiedName* QnYes; // 0x210
		::System::Xml::XmlQualifiedName* QnXsdAny; // 0x218
		::System::String* XsiSchemaLocation; // 0x220
		::System::Xml::XmlQualifiedName* QnFinal; // 0x228
		::System::Xml::XmlQualifiedName* QnRefer; // 0x230
		::System::Xml::XmlQualifiedName* QnMinOccurs; // 0x238
		::System::Xml::XmlQualifiedName* QnXsdAnyType; // 0x240
		::System::Xml::XmlQualifiedName* QnXsdWhiteSpace; // 0x248
		::System::String* NsXs; // 0x250
		::System::Xml::XmlQualifiedName* QnDtMaxLength; // 0x258
		::System::String* NsXdrAlias; // 0x260
		::System::Xml::XmlQualifiedName* QnDtMinExclusive; // 0x268
		::System::Xml::XmlQualifiedName* QnDtMinLength; // 0x270
		::System::Xml::XmlQualifiedName* QnElementFormDefault; // 0x278
		::System::Xml::XmlQualifiedName* QnType; // 0x280
		::System::Xml::XmlQualifiedName* QnIDRefs; // 0x288
		::System::Xml::XmlQualifiedName* QnXsdImport; // 0x290
		::System::Xml::XmlQualifiedName* QnXsdLength; // 0x298
		::System::Xml::XmlQualifiedName* QnSystem; // 0x2A0
		::System::Xml::XmlQualifiedName* QnXdrDescription; // 0x2A8
		::System::Xml::XmlQualifiedName* QnXsdList; // 0x2B0
		::System::Xml::XmlQualifiedName* QnXdrAttributeType; // 0x2B8
		::System::Xml::XmlQualifiedName* QnFinalDefault; // 0x2C0
		::System::Xml::XmlQualifiedName* QnXsdComplexType; // 0x2C8
		::System::Xml::XmlQualifiedName* QnDtValues; // 0x2D0
		::System::Xml::XmlQualifiedName* QnXsdAnyAttribute; // 0x2D8
		::System::Xml::XmlQualifiedName* QnXsdEnumeration; // 0x2E0
		::System::Xml::XmlQualifiedName* QnXsdAttributeGroup; // 0x2E8
		::System::Xml::XmlQualifiedName* QnEmpty; // 0x2F0
		::System::String* NsDataType; // 0x2F8
		::System::Xml::XmlQualifiedName* QnMixed; // 0x300
		::System::Xml::XmlQualifiedName* QnXsdSchema; // 0x308
		::System::Xml::XmlQualifiedName* QnXmlNs; // 0x310
		::System::Xml::XmlQualifiedName* QnAttributeFormDefault; // 0x318
		::System::Xml::XmlQualifiedName* QnEntities; // 0x320
		::System::Xml::XmlQualifiedName* QnXsdAnnotation; // 0x328
		::System::Xml::XmlQualifiedName* QnXsdSequence; // 0x330
		::System::String* NsXmlNs; // 0x338
		::System::Xml::XmlQualifiedName* QnXsdFractionDigits; // 0x340
		::System::Xml::XmlQualifiedName* QnXml; // 0x348
		::System::Xml::XmlQualifiedName* QnXsdElement; // 0x350
		::System::Xml::XmlQualifiedName* QnXsdField; // 0x358
		::System::String* XdrSchema; // 0x360
		::System::Xml::XmlQualifiedName* QnSchemaLocation; // 0x368
		::System::Xml::XmlQualifiedName* QnEltOnly; // 0x370
		::System::Xml::XmlQualifiedName* QnDtType; // 0x378
		::System::Xml::XmlQualifiedName* QnXdrAliasSchema; // 0x380
		::System::Xml::XmlQualifiedName* QnPCData; // 0x388
		::System::Xml::XmlQualifiedName* QnModel; // 0x390
		::System::Xml::XmlQualifiedName* QnBlockDefault; // 0x398
		::System::Xml::XmlQualifiedName* QnEntity; // 0x3A0
		::System::Xml::XmlQualifiedName* QnFixed; // 0x3A8
		::System::Xml::XmlQualifiedName* QnNmTokens; // 0x3B0
		::System::Xml::XmlQualifiedName* QnItemType; // 0x3B8
		::System::Xml::XmlQualifiedName* QnPublic; // 0x3C0
		::System::Xml::XmlQualifiedName* QnXsdUnion; // 0x3C8
		::System::Xml::XmlQualifiedName* QnVersion; // 0x3D0
		::System::Xml::XmlQualifiedName* QnEnumeration; // 0x3D8
		::System::Xml::XmlQualifiedName* QnTextOnly; // 0x3E0
		::System::Xml::XmlQualifiedName* QnXsdRestriction; // 0x3E8
		::System::Xml::XmlQualifiedName* QnOpen; // 0x3F0
		::System::Xml::XmlQualifiedName* QnXsdSelector; // 0x3F8
		::System::String* NsXdr; // 0x400
		::System::Xml::XmlQualifiedName* QnXsdNotation; // 0x408
		::System::Xml::XmlQualifiedName* QnXsdSimpleType; // 0x410
		::System::Xml::XmlQualifiedName* QnXsdMinLength; // 0x418
		::System::Xml::XmlQualifiedName* QnBlock; // 0x420
		::System::Xml::XmlQualifiedName* QnXsdMaxExclusive; // 0x428
		::System::Xml::XmlNameTable* nameTable; // 0x430
		::System::String* XsiType; // 0x438
		::System::Xml::XmlQualifiedName* QnXsdMinInclusive; // 0x440
		::System::Xml::XmlQualifiedName* QnNmToken; // 0x448
		::System::Xml::XmlQualifiedName* QnXsdMaxInclusive; // 0x450
		::System::Xml::XmlQualifiedName* QnDerivedBy; // 0x458
		::System::String* XsiNoNamespaceSchemaLocation; // 0x460
		::System::Xml::XmlQualifiedName* QnValue; // 0x468
		::System::Xml::XmlQualifiedName* QnXsdSimpleContent; // 0x470

		::System::Void _ctor(::System::Xml::XmlNameTable* nameTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMES__CTOR_OFFSET))(this, nameTable);
		}

		::System::Void CreateTokenToQNameTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMES_CREATETOKENTOQNAMETABLE_OFFSET))(this);
		}

		::System::Xml::Schema::SchemaType SchemaTypeFromRoot(::System::String* localName, ::System::String* ns)
		{
			return ((::System::Xml::Schema::SchemaType(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMES_SCHEMATYPEFROMROOT_OFFSET))(this, localName, ns);
		}

		::System::Boolean IsXSDRoot(::System::String* localName, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMES_ISXSDROOT_OFFSET))(this, localName, ns);
		}

		::System::Boolean IsXDRRoot(::System::String* localName, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_SCHEMANAMES_ISXDRROOT_OFFSET))(this, localName, ns);
		}
	};
}
