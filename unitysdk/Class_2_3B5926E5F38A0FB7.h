#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_3B5926E5F38A0FB7_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xBDDFA00)
#define CLASS_2_3B5926E5F38A0FB7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBDDFAB0)
#define CLASS_2_3B5926E5F38A0FB7_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0xBDDF860)
#define CLASS_2_3B5926E5F38A0FB7__CTOR_OFFSET UNITYSDK_OFFSET(0xBDDFAA0)

inline static constexpr unsigned int Class_2_3B5926E5F38A0FB7_TypeDefinitionIndex = 74202;

class Class_2_3B5926E5F38A0FB7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x18
	::UnityEngine::CanvasGroup* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B5926E5F38A0FB7_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
