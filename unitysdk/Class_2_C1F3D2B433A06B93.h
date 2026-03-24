#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace MoleMole { class UIOverlordFeastLevelWidgetController; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_C1F3D2B433A06B93_METHOD_2_4F04DC1F998B4F77_OFFSET UNITYSDK_OFFSET(0xFB12990)
#define CLASS_2_C1F3D2B433A06B93_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xFB12B60)
#define CLASS_2_C1F3D2B433A06B93_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFB12C70)
#define CLASS_2_C1F3D2B433A06B93__CTOR_OFFSET UNITYSDK_OFFSET(0xFB12C60)

inline static constexpr unsigned int Class_2_C1F3D2B433A06B93_TypeDefinitionIndex = 66075;

class Class_2_C1F3D2B433A06B93 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIOverlordFeastLevelWidgetController*>* Field_2_1; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_3; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::MonoUITableScrollV2* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1F3D2B433A06B93__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F04DC1F998B4F77(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C1F3D2B433A06B93_METHOD_2_4F04DC1F998B4F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C1F3D2B433A06B93_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1F3D2B433A06B93_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
