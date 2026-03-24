#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_77ED6AE6421E24B7.h"
#include "unitysdk/System/Object.h"

namespace SimpleJSON { class JSONNode; }

#define CLASS_1_C9F2ECC1154D5689_METHOD_1_9C12A00315CAECCE_OFFSET UNITYSDK_OFFSET(0x660E3C0)
#define CLASS_1_C9F2ECC1154D5689_METHOD_1_E4C777FAF0E22569_OFFSET UNITYSDK_OFFSET(0x660E5E0)
#define CLASS_1_C9F2ECC1154D5689_METHOD_1_FC80167987D356A4_OFFSET UNITYSDK_OFFSET(0x660E480)
#define CLASS_1_C9F2ECC1154D5689__CTOR_OFFSET UNITYSDK_OFFSET(0x660E710)

inline static constexpr unsigned int Class_1_C9F2ECC1154D5689_TypeDefinitionIndex = 47509;

class Class_1_C9F2ECC1154D5689 : public ::System::Object
{
public:
	::Struct_2_77ED6AE6421E24B7 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9F2ECC1154D5689__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9C12A00315CAECCE(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_C9F2ECC1154D5689_METHOD_1_9C12A00315CAECCE_OFFSET))(this, a1);
	}

	::SimpleJSON::JSONNode* Method_1_E4C777FAF0E22569()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9F2ECC1154D5689_METHOD_1_E4C777FAF0E22569_OFFSET))(this);
	}

	::System::Boolean Method_1_FC80167987D356A4(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_C9F2ECC1154D5689_METHOD_1_FC80167987D356A4_OFFSET))(this, a1);
	}
};
