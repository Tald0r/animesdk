#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class Class_2_B191F157DF5DCD67_Class_2_0D5D8405826EE6F8_9;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_B191F157DF5DCD67_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x63DD080)
#define CLASS_2_B191F157DF5DCD67_METHOD_2_8B7E7695FC17D6DD_OFFSET UNITYSDK_OFFSET(0x63DD2F0)
#define CLASS_2_B191F157DF5DCD67_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x63DD500)
#define CLASS_2_B191F157DF5DCD67_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x63DD5F0)
#define CLASS_2_B191F157DF5DCD67__CTOR_OFFSET UNITYSDK_OFFSET(0x63DD5E0)

inline static constexpr unsigned int Class_2_B191F157DF5DCD67_TypeDefinitionIndex = 44000;

class Class_2_B191F157DF5DCD67 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x30
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B191F157DF5DCD67_Class_2_0D5D8405826EE6F8_9*>*>* Field_2_4; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::MonoUITableScrollV2* Field_2_0; // 0x48
	::MonoUITableScrollV2* Field_2_9; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x58
	::UnityEngine::RectTransform* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B191F157DF5DCD67__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B191F157DF5DCD67_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B191F157DF5DCD67_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B191F157DF5DCD67_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B191F157DF5DCD67_Class_2_0D5D8405826EE6F8_9*>*>* Method_2_8B7E7695FC17D6DD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_B191F157DF5DCD67_Class_2_0D5D8405826EE6F8_9*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B191F157DF5DCD67_METHOD_2_8B7E7695FC17D6DD_OFFSET))(this, a1, a2);
	}
};
