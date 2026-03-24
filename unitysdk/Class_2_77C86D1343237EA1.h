#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_77C86D1343237EA1_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1A6F6B30)
#define CLASS_2_77C86D1343237EA1_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x1A6F6910)
#define CLASS_2_77C86D1343237EA1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1A6F6C20)
#define CLASS_2_77C86D1343237EA1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6F6C10)

inline static constexpr unsigned int Class_2_77C86D1343237EA1_TypeDefinitionIndex = 83685;

class Class_2_77C86D1343237EA1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x18
	::UnityEngine::Transform* Field_2_7; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x28
	::UnityEngine::GameObject* Field_2_8; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x38
	::UnityEngine::Animation* Field_2_3; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77C86D1343237EA1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77C86D1343237EA1_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77C86D1343237EA1_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77C86D1343237EA1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
