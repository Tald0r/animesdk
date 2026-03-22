#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class TextMesh; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define CLASS_2_8E88A0E1784C6047_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6B397E0)
#define CLASS_2_8E88A0E1784C6047_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x6B39650)
#define CLASS_2_8E88A0E1784C6047__CTOR_OFFSET UNITYSDK_OFFSET(0x6B397D0)

inline static constexpr unsigned int Class_2_8E88A0E1784C6047_TypeDefinitionIndex = 73193;

class Class_2_8E88A0E1784C6047 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::TextMesh* Field_2_4; // 0x18
	::UnityEngine::TextMesh* Field_2_8; // 0x20
	::UnityEngine::TextMesh* Field_2_3; // 0x28
	::UnityEngine::Playables::PlayableDirector* Field_2_0; // 0x30
	::UnityEngine::TextMesh* Field_2_6; // 0x38
	::UnityEngine::TextMesh* Field_2_7; // 0x40
	::UnityEngine::TextMesh* Field_2_2; // 0x48
	::UnityEngine::Camera* Field_2_1; // 0x50
	::UnityEngine::TextMesh* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E88A0E1784C6047__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8E88A0E1784C6047_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8E88A0E1784C6047_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
