#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Xml::Schema { class Asttree; }

#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_ENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A103760)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A103A70)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A103390)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS_REACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A1030B0)
#define SYSTEM_XML_SCHEMA_ACTIVEAXIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1030C0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ActiveAxis_TypeDefinitionIndex = 1942;

	class ActiveAxis : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* axisStack; // 0x10
		::System::Xml::Schema::Asttree* axisTree; // 0x18
		::System::Int32 currentDepth; // 0x20
		::System::Boolean isActive; // 0x24

		::System::Void _ctor(::System::Xml::Schema::Asttree* axisTree)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::Asttree*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS__CTOR_OFFSET))(this, axisTree);
		}

		::System::Void Reactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_REACTIVATE_OFFSET))(this);
		}

		::System::Boolean MoveToStartElement(::System::String* localname, ::System::String* URN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOSTARTELEMENT_OFFSET))(this, localname, URN);
		}

		::System::Boolean EndElement(::System::String* localname, ::System::String* URN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_ENDELEMENT_OFFSET))(this, localname, URN);
		}

		::System::Boolean MoveToAttribute(::System::String* localname, ::System::String* URN)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ACTIVEAXIS_MOVETOATTRIBUTE_OFFSET))(this, localname, URN);
		}
	};
}
