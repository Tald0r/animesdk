#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_FF9F79030DA2C7CF_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0xA14EC60)
#define CLASS_2_FF9F79030DA2C7CF_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0xA14E7F0)
#define CLASS_2_FF9F79030DA2C7CF_METHOD_2_912644B05A6936B3_OFFSET UNITYSDK_OFFSET(0xA14EAF0)
#define CLASS_2_FF9F79030DA2C7CF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA14EDA0)
#define CLASS_2_FF9F79030DA2C7CF__CTOR_OFFSET UNITYSDK_OFFSET(0xA14ED90)

inline static constexpr unsigned int Class_2_FF9F79030DA2C7CF_TypeDefinitionIndex = 76042;

class Class_2_FF9F79030DA2C7CF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x30
	::MonoUITableScrollV2* Field_2_0; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x40
	::Class_2_1F76884FC39FD584* Field_2_12; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Field_2_13; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF9F79030DA2C7CF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF9F79030DA2C7CF_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF9F79030DA2C7CF_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* Method_2_912644B05A6936B3(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF9F79030DA2C7CF_METHOD_2_912644B05A6936B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FF9F79030DA2C7CF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
