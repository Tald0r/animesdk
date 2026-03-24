#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_79AE422BA06F6D26_23;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_FB1E92840A1B534B_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x9628C30)
#define CLASS_2_FB1E92840A1B534B_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x9628ED0)
#define CLASS_2_FB1E92840A1B534B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9628FC0)
#define CLASS_2_FB1E92840A1B534B__CTOR_OFFSET UNITYSDK_OFFSET(0x9628FB0)

inline static constexpr unsigned int Class_2_FB1E92840A1B534B_TypeDefinitionIndex = 49912;

class Class_2_FB1E92840A1B534B : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_10; // 0x18
	::UnityEngine::RectTransform* Field_2_7; // 0x20
	::MonoUITableScrollV2* Field_2_1; // 0x28
	::UnityEngine::CanvasGroup* Field_2_6; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_11; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_23*>* Field_2_9; // 0x48
	::UnityEngine::Transform* Field_2_3; // 0x50
	::MoleMole::MonoGamepadNavigatableList* Field_2_5; // 0x58
	::UnityEngine::RectTransform* Field_2_8; // 0x60
	::UnityEngine::Transform* Field_2_4; // 0x68
	::MonoUITableScrollV2* Field_2_2; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB1E92840A1B534B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB1E92840A1B534B_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FB1E92840A1B534B_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FB1E92840A1B534B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
