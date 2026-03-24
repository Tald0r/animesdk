#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_A3D97EDF9C99B3C3_3_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x8E5F7F0)
#define CLASS_2_A3D97EDF9C99B3C3_3_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x8E5F9A0)
#define CLASS_2_A3D97EDF9C99B3C3_3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8E5FA70)
#define CLASS_2_A3D97EDF9C99B3C3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x8E5FA60)

inline static constexpr unsigned int Class_2_A3D97EDF9C99B3C3_3_TypeDefinitionIndex = 60143;

class Class_2_A3D97EDF9C99B3C3_3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x28
	::MonoUITableScrollV2* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D97EDF9C99B3C3_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A3D97EDF9C99B3C3_3_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3D97EDF9C99B3C3_3_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A3D97EDF9C99B3C3_3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
