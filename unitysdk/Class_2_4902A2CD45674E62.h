#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_4902A2CD45674E62_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x9DC4E00)
#define CLASS_2_4902A2CD45674E62_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x9DC5190)
#define CLASS_2_4902A2CD45674E62_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0x9DC5020)
#define CLASS_2_4902A2CD45674E62_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9DC5280)
#define CLASS_2_4902A2CD45674E62__CTOR_OFFSET UNITYSDK_OFFSET(0x9DC5270)

inline static constexpr unsigned int Class_2_4902A2CD45674E62_TypeDefinitionIndex = 43059;

class Class_2_4902A2CD45674E62 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4902A2CD45674E62__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4902A2CD45674E62_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4902A2CD45674E62_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4902A2CD45674E62_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4902A2CD45674E62_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
