#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_7C86492618AE1202_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x795BF30)
#define CLASS_2_7C86492618AE1202_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x795C020)
#define CLASS_2_7C86492618AE1202_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x795BD90)
#define CLASS_2_7C86492618AE1202__CTOR_OFFSET UNITYSDK_OFFSET(0x795C010)

inline static constexpr unsigned int Class_2_7C86492618AE1202_TypeDefinitionIndex = 44670;

class Class_2_7C86492618AE1202 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x20
	::UnityEngine::UI::Text* Field_2_0; // 0x28
	::UnityEngine::UI::Text* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C86492618AE1202__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7C86492618AE1202_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C86492618AE1202_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7C86492618AE1202_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
