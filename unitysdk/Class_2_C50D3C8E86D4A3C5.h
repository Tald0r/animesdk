#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_C50D3C8E86D4A3C5_METHOD_2_4F04DC1F998B4F77_OFFSET UNITYSDK_OFFSET(0xD368C80)
#define CLASS_2_C50D3C8E86D4A3C5_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xD368E50)
#define CLASS_2_C50D3C8E86D4A3C5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD368F60)
#define CLASS_2_C50D3C8E86D4A3C5__CTOR_OFFSET UNITYSDK_OFFSET(0xD368F50)

inline static constexpr unsigned int Class_2_C50D3C8E86D4A3C5_TypeDefinitionIndex = 43103;

class Class_2_C50D3C8E86D4A3C5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_3; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C50D3C8E86D4A3C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4F04DC1F998B4F77(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C50D3C8E86D4A3C5_METHOD_2_4F04DC1F998B4F77_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C50D3C8E86D4A3C5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C50D3C8E86D4A3C5_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
