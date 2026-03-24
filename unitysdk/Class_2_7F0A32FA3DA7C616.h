#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoMaskSlider; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7F0A32FA3DA7C616_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x92FCE50)
#define CLASS_2_7F0A32FA3DA7C616_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x92FCF90)
#define CLASS_2_7F0A32FA3DA7C616__CTOR_OFFSET UNITYSDK_OFFSET(0x92FCF80)

inline static constexpr unsigned int Class_2_7F0A32FA3DA7C616_TypeDefinitionIndex = 78647;

class Class_2_7F0A32FA3DA7C616 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::UnityEngine::UI::Text* Field_2_3; // 0x20
	::UnityEngine::UI::Text* Field_2_6; // 0x28
	::MoleMole::MonoMaskSlider* Field_2_2; // 0x30
	::UnityEngine::UI::Text* Field_2_4; // 0x38
	::UnityEngine::UI::Text* Field_2_5; // 0x40
	::UnityEngine::Animation* Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F0A32FA3DA7C616__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7F0A32FA3DA7C616_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7F0A32FA3DA7C616_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
