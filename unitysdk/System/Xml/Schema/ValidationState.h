#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/RangePositionInfo.h"
#include "unitysdk/System/Xml/Schema/StateUnion.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentProcessing.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaValidity.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml::Schema { class BitSet; }
namespace System::Xml::Schema { class ConstraintStruct; }
namespace System::Xml::Schema { class SchemaElementDecl; }

#define SYSTEM_XML_SCHEMA_VALIDATIONSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x199AAA20)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int ValidationState_TypeDefinitionIndex = 2098;

	class ValidationState : public ::System::Object
	{
	public:
		::System::Xml::Schema::SchemaElementDecl* ElementDeclBeforeXsi; // 0x10
		::Il2CppArray<::System::Xml::Schema::BitSet*>* CurPos; // 0x18
		::System::String* LocalName; // 0x20
		::System::String* Namespace; // 0x28
		::Il2CppArray<::System::Xml::Schema::ConstraintStruct*>* Constr; // 0x30
		::System::Xml::Schema::SchemaElementDecl* ElementDecl; // 0x38
		::System::Xml::Schema::BitSet* AllElementsSet; // 0x40
		::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>* RunningPositions; // 0x48
		::System::Xml::Schema::XmlSchemaContentProcessing ProcessContents; // 0x50
		::System::Xml::Schema::StateUnion CurrentState; // 0x54
		::System::Boolean IsNill; // 0x58
		::System::Boolean CheckRequiredAttribute; // 0x59
		::System::Boolean TooComplex; // 0x5A
		::System::Boolean IsDefault; // 0x5B
		::System::Xml::Schema::XmlSchemaValidity Validity; // 0x5C
		::System::Boolean HasMatched; // 0x60
		::System::Boolean ValidationSkipped; // 0x61
		::System::Boolean NeedValidateChildren; // 0x62

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_VALIDATIONSTATE__CTOR_OFFSET))(this);
		}
	};
}
