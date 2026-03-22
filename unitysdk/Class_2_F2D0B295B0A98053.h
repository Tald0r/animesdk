#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_F2D0B295B0A98053_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x7C3E960)
#define CLASS_2_F2D0B295B0A98053_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x7C3E710)
#define CLASS_2_F2D0B295B0A98053_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7C3EA30)
#define CLASS_2_F2D0B295B0A98053__CTOR_OFFSET UNITYSDK_OFFSET(0x7C3EA20)

inline static constexpr unsigned int Class_2_F2D0B295B0A98053_TypeDefinitionIndex = 74414;

class Class_2_F2D0B295B0A98053 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x18
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_6; // 0x20
	::MoleMole::MonoGamepadModule* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_5; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x38
	::MonoUITableScrollV2* Field_2_2; // 0x40
	::UnityEngine::GameObject* Field_2_3; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2D0B295B0A98053_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
