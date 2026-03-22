#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_BD90A3078513E576_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x9AB45F0)
#define CLASS_2_BD90A3078513E576_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x9AB49F0)
#define CLASS_2_BD90A3078513E576_METHOD_2_912644B05A6936B3_OFFSET UNITYSDK_OFFSET(0x9AB4880)
#define CLASS_2_BD90A3078513E576_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9AB4B70)
#define CLASS_2_BD90A3078513E576__CTOR_OFFSET UNITYSDK_OFFSET(0x9AB4B60)

inline static constexpr unsigned int Class_2_BD90A3078513E576_TypeDefinitionIndex = 59997;

class Class_2_BD90A3078513E576 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_7; // 0x20
	::UnityEngine::UI::Text* Field_2_4; // 0x28
	::MoleMole::MonoGamepadCustomList* Field_2_5; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x50
	::UnityEngine::RectTransform* Field_2_0; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD90A3078513E576__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BD90A3078513E576_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_912644B05A6936B3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BD90A3078513E576_METHOD_2_912644B05A6936B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD90A3078513E576_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BD90A3078513E576_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
