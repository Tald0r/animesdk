#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_8C9A9085BCBE9349_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x8CFE030)
#define CLASS_2_8C9A9085BCBE9349_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8CFE0E0)
#define CLASS_2_8C9A9085BCBE9349_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x8CFDE90)
#define CLASS_2_8C9A9085BCBE9349__CTOR_OFFSET UNITYSDK_OFFSET(0x8CFE0D0)

inline static constexpr unsigned int Class_2_8C9A9085BCBE9349_TypeDefinitionIndex = 61524;

class Class_2_8C9A9085BCBE9349 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C9A9085BCBE9349__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8C9A9085BCBE9349_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C9A9085BCBE9349_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8C9A9085BCBE9349_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
