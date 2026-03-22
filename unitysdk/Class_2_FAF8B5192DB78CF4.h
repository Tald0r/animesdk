#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class Class_2_FAF8B5192DB78CF4_Class_1_9AD1F86ADF386F9E;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadRegion; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_FAF8B5192DB78CF4_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xB98DAB0)
#define CLASS_2_FAF8B5192DB78CF4_METHOD_2_5BF0416DCB5CF2C8_OFFSET UNITYSDK_OFFSET(0xB98D720)
#define CLASS_2_FAF8B5192DB78CF4_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xB98D4A0)
#define CLASS_2_FAF8B5192DB78CF4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB98DC00)
#define CLASS_2_FAF8B5192DB78CF4__CTOR_OFFSET UNITYSDK_OFFSET(0xB98DBE0)

inline static constexpr unsigned int Class_2_FAF8B5192DB78CF4_TypeDefinitionIndex = 69046;

class Class_2_FAF8B5192DB78CF4 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadRegion* Field_2_6; // 0x18
	::UnityEngine::Transform* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::UnityEngine::Transform* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x48
	::UnityEngine::Transform* Field_2_8; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x58
	::MoleMole::MonoGamepadCustomList* Field_2_10; // 0x60
	::System::Collections::Generic::List_1<::Class_2_FAF8B5192DB78CF4_Class_1_9AD1F86ADF386F9E*>* Field_2_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF8B5192DB78CF4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FAF8B5192DB78CF4_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_FAF8B5192DB78CF4_Class_1_9AD1F86ADF386F9E*>* Method_2_5BF0416DCB5CF2C8(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_FAF8B5192DB78CF4_Class_1_9AD1F86ADF386F9E*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FAF8B5192DB78CF4_METHOD_2_5BF0416DCB5CF2C8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FAF8B5192DB78CF4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FAF8B5192DB78CF4_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
