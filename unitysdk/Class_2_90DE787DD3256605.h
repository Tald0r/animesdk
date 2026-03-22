#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define CLASS_2_90DE787DD3256605_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x6C48430)
#define CLASS_2_90DE787DD3256605_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6C48520)
#define CLASS_2_90DE787DD3256605_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x6C48290)
#define CLASS_2_90DE787DD3256605__CTOR_OFFSET UNITYSDK_OFFSET(0x6C48510)

inline static constexpr unsigned int Class_2_90DE787DD3256605_TypeDefinitionIndex = 44229;

class Class_2_90DE787DD3256605 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_1; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_2; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90DE787DD3256605__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_90DE787DD3256605_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_90DE787DD3256605_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90DE787DD3256605_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
