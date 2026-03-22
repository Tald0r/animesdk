#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_07DB2847CB677EC1_METHOD_2_51D75D66AB0E1B00_OFFSET UNITYSDK_OFFSET(0x8508950)
#define CLASS_2_07DB2847CB677EC1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x8508B30)
#define CLASS_2_07DB2847CB677EC1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8508C20)
#define CLASS_2_07DB2847CB677EC1__CTOR_OFFSET UNITYSDK_OFFSET(0x8508C10)

inline static constexpr unsigned int Class_2_07DB2847CB677EC1_TypeDefinitionIndex = 39862;

class Class_2_07DB2847CB677EC1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x20
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_3; // 0x28
	::MonoUITableScrollV2* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DB2847CB677EC1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_51D75D66AB0E1B00(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07DB2847CB677EC1_METHOD_2_51D75D66AB0E1B00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07DB2847CB677EC1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_07DB2847CB677EC1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
