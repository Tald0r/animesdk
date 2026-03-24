#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_6E0647BD0D3D5DD8_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x6572050)
#define CLASS_2_6E0647BD0D3D5DD8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6572140)
#define CLASS_2_6E0647BD0D3D5DD8__CTOR_OFFSET UNITYSDK_OFFSET(0x6572130)

inline static constexpr unsigned int Class_2_6E0647BD0D3D5DD8_TypeDefinitionIndex = 45664;

class Class_2_6E0647BD0D3D5DD8 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::UnityEngine::CanvasGroup* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_2; // 0x28
	::UnityEngine::UI::RawImage* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E0647BD0D3D5DD8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6E0647BD0D3D5DD8_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6E0647BD0D3D5DD8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
