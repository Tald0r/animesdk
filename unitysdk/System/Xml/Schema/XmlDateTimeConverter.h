#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x199B3EA0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x199B4100)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x199B3C50)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x199B2CF0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x199B32D0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_2_OFFSET UNITYSDK_OFFSET(0x199B35B0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x199B32B0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x199B2DC0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_2_OFFSET UNITYSDK_OFFSET(0x199B3080)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x199B2D40)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x199B38F0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x199B3A70)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x199B37E0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x199B2CE0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlDateTimeConverter_TypeDefinitionIndex = 2211;

	class XmlDateTimeConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER__CTOR_OFFSET))(this, schemaType);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CREATE_OFFSET))(schemaType);
		}

		::System::DateTime ToDateTime(::System::DateTimeOffset value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime_1(::System::String* value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_1_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime_2(::System::Object* value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_2_OFFSET))(this, value);
		}

		::System::DateTimeOffset ToDateTimeOffset(::System::DateTime value)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_OFFSET))(this, value);
		}

		::System::DateTimeOffset ToDateTimeOffset_1(::System::String* value)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_1_OFFSET))(this, value);
		}

		::System::DateTimeOffset ToDateTimeOffset_2(::System::Object* value)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_2_OFFSET))(this, value);
		}

		::System::String* ToString(::System::DateTime value)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_OFFSET))(this, value);
		}

		::System::String* ToString_1(::System::DateTimeOffset value)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_1_OFFSET))(this, value);
		}

		::System::String* ToString_2(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_2_OFFSET))(this, value, nsResolver);
		}

		::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::DateTime, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_1(::System::String* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_1_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeType_2(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_2_OFFSET))(this, value, destinationType, nsResolver);
		}
	};
}
