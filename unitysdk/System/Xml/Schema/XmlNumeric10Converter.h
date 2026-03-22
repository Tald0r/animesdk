#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET UNITYSDK_OFFSET(0x18C7B480)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET UNITYSDK_OFFSET(0x18C7C730)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x18C7C870)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x18C7CAE0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_3_OFFSET UNITYSDK_OFFSET(0x18C7CD60)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_4_OFFSET UNITYSDK_OFFSET(0x18C7D090)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x18C7C570)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x18C7AF70)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TODECIMAL_1_OFFSET UNITYSDK_OFFSET(0x18C7B100)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x18C7AFC0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_1_OFFSET UNITYSDK_OFFSET(0x18C7B820)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_2_OFFSET UNITYSDK_OFFSET(0x18C7B940)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x18C7B810)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_1_OFFSET UNITYSDK_OFFSET(0x18C7BC50)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_2_OFFSET UNITYSDK_OFFSET(0x18C7BD70)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x18C7BC40)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x18C7C1A0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x18C7C210)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x18C7C280)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18C7C060)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7AF60)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlNumeric10Converter_TypeDefinitionIndex = 2209;

	class XmlNumeric10Converter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER__CTOR_OFFSET))(this, schemaType);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CREATE_OFFSET))(schemaType);
		}

		::System::Decimal ToDecimal(::System::String* value)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TODECIMAL_OFFSET))(this, value);
		}

		::System::Decimal ToDecimal_1(::System::Object* value)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TODECIMAL_1_OFFSET))(this, value);
		}

		::System::Int32 ToInt32(::System::Int64 value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_OFFSET))(this, value);
		}

		::System::Int32 ToInt32_1(::System::String* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_1_OFFSET))(this, value);
		}

		::System::Int32 ToInt32_2(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT32_2_OFFSET))(this, value);
		}

		::System::Int64 ToInt64(::System::Int32 value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_OFFSET))(this, value);
		}

		::System::Int64 ToInt64_1(::System::String* value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_1_OFFSET))(this, value);
		}

		::System::Int64 ToInt64_2(::System::Object* value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOINT64_2_OFFSET))(this, value);
		}

		::System::String* ToString(::System::Decimal value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_OFFSET))(this, value);
		}

		::System::String* ToString_1(::System::Int32 value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_1_OFFSET))(this, value);
		}

		::System::String* ToString_2(::System::Int64 value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_2_OFFSET))(this, value);
		}

		::System::String* ToString_3(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_TOSTRING_3_OFFSET))(this, value, nsResolver);
		}

		::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Decimal, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_1(::System::Int32 value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_1_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_2(::System::Int64 value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_2_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_3(::System::String* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_3_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeType_4(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPE_4_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC10CONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET))(this, value, destinationType, nsResolver);
		}
	};
}
