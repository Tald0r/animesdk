#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaObject.h"

namespace System { class String; }
namespace System::Xml { class XmlAttribute; }
namespace System::Xml::Schema { class XmlSchemaAnnotation; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_ADDANNOTATION_OFFSET UNITYSDK_OFFSET(0x19A41900)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_GET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19A418D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SETUNHANDLEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19A418F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SET_IDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19A418E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED__CTOR_OFFSET UNITYSDK_OFFSET(0x19A41910)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAnnotated_TypeDefinitionIndex = 2116;

	class XmlSchemaAnnotated : public ::System::Xml::Schema::XmlSchemaObject
	{
	public:
		::Il2CppArray<::System::Xml::XmlAttribute*>* moreAttributes; // 0x38
		::System::Xml::Schema::XmlSchemaAnnotation* annotation; // 0x40
		::System::String* id; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED__CTOR_OFFSET))(this);
		}

		::System::String* get_IdAttribute()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_GET_IDATTRIBUTE_OFFSET))(this);
		}

		::System::Void set_IdAttribute(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SET_IDATTRIBUTE_OFFSET))(this, value);
		}

		::System::Void SetUnhandledAttributes(::Il2CppArray<::System::Xml::XmlAttribute*>* moreAttributes)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Xml::XmlAttribute*>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_SETUNHANDLEDATTRIBUTES_OFFSET))(this, moreAttributes);
		}

		::System::Void AddAnnotation(::System::Xml::Schema::XmlSchemaAnnotation* annotation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaAnnotation*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANNOTATED_ADDANNOTATION_OFFSET))(this, annotation);
		}
	};
}
