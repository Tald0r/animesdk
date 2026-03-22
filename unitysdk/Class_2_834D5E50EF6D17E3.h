#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_834D5E50EF6D17E3_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x8508580)
#define CLASS_2_834D5E50EF6D17E3_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x85087A0)
#define CLASS_2_834D5E50EF6D17E3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x85088E0)
#define CLASS_2_834D5E50EF6D17E3__CTOR_OFFSET UNITYSDK_OFFSET(0x85088D0)

inline static constexpr unsigned int Class_2_834D5E50EF6D17E3_TypeDefinitionIndex = 62264;

class Class_2_834D5E50EF6D17E3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::Transform* Field_2_3; // 0x20
	::UnityEngine::GameObject* Field_2_5; // 0x28
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x38
	::MonoUITableScrollV2* Field_2_1; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_834D5E50EF6D17E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_834D5E50EF6D17E3_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_834D5E50EF6D17E3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_834D5E50EF6D17E3_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
