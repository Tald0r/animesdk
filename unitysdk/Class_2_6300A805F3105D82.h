#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define CLASS_2_6300A805F3105D82_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x6840D80)
#define CLASS_2_6300A805F3105D82_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x6840F10)
#define CLASS_2_6300A805F3105D82_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6841020)
#define CLASS_2_6300A805F3105D82__CTOR_OFFSET UNITYSDK_OFFSET(0x6841010)

inline static constexpr unsigned int Class_2_6300A805F3105D82_TypeDefinitionIndex = 66480;

class Class_2_6300A805F3105D82 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_0; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6300A805F3105D82__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6300A805F3105D82_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6300A805F3105D82_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6300A805F3105D82_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
