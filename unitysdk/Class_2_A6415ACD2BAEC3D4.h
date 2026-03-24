#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_A6415ACD2BAEC3D4_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0xD628FE0)
#define CLASS_2_A6415ACD2BAEC3D4_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xD629200)
#define CLASS_2_A6415ACD2BAEC3D4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD629310)
#define CLASS_2_A6415ACD2BAEC3D4__CTOR_OFFSET UNITYSDK_OFFSET(0xD629300)

inline static constexpr unsigned int Class_2_A6415ACD2BAEC3D4_TypeDefinitionIndex = 70630;

class Class_2_A6415ACD2BAEC3D4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_5; // 0x38
	::MoleMole::UIGeneralButtonController* Field_2_3; // 0x40
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_8; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x50
	::MonoUITableScrollV2* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6415ACD2BAEC3D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A6415ACD2BAEC3D4_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A6415ACD2BAEC3D4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6415ACD2BAEC3D4_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
