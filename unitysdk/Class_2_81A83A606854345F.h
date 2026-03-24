#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralSortWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_81A83A606854345F_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0xB167900)
#define CLASS_2_81A83A606854345F_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xB167B20)
#define CLASS_2_81A83A606854345F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB167C30)
#define CLASS_2_81A83A606854345F__CTOR_OFFSET UNITYSDK_OFFSET(0xB167C20)

inline static constexpr unsigned int Class_2_81A83A606854345F_TypeDefinitionIndex = 37824;

class Class_2_81A83A606854345F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::UI::Text* Field_2_4; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x38
	::MonoUITableScrollV2* Field_2_3; // 0x40
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralSortWidgetController*>* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A83A606854345F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_81A83A606854345F_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A83A606854345F_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_81A83A606854345F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
