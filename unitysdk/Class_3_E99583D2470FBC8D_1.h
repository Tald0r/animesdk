#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_3_E99583D2470FBC8D_1_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x92A71F0)
#define CLASS_3_E99583D2470FBC8D_1_METHOD_3_677D6FAAC7F4CD6A_OFFSET UNITYSDK_OFFSET(0x92A6F00)
#define CLASS_3_E99583D2470FBC8D_1_METHOD_3_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x92A7130)
#define CLASS_3_E99583D2470FBC8D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x92A75B0)

inline static constexpr unsigned int Class_3_E99583D2470FBC8D_1_TypeDefinitionIndex = 76991;

class Class_3_E99583D2470FBC8D_1 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::UnityEngine::RectTransform* Field_3_1; // 0x28
	::UnityEngine::RectTransform* Field_3_6; // 0x30
	::UnityEngine::RectTransform* Field_3_7; // 0x38
	::UnityEngine::RectTransform* Field_3_2; // 0x40
	::Class_2_60DDD9C206686F44* Field_3_3; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_3_0; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_4; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_5; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E99583D2470FBC8D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_677D6FAAC7F4CD6A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_E99583D2470FBC8D_1_METHOD_3_677D6FAAC7F4CD6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E99583D2470FBC8D_1_METHOD_3_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_3_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E99583D2470FBC8D_1_METHOD_3_5176DC743E478510_OFFSET))(this);
	}
};
