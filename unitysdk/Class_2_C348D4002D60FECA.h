#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_C348D4002D60FECA_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x90E6740)
#define CLASS_2_C348D4002D60FECA_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x90E68D0)
#define CLASS_2_C348D4002D60FECA_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x90E69E0)
#define CLASS_2_C348D4002D60FECA__CTOR_OFFSET UNITYSDK_OFFSET(0x90E69D0)

inline static constexpr unsigned int Class_2_C348D4002D60FECA_TypeDefinitionIndex = 48243;

class Class_2_C348D4002D60FECA : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::MoleMole::MonoGamepadModule* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C348D4002D60FECA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C348D4002D60FECA_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C348D4002D60FECA_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C348D4002D60FECA_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
