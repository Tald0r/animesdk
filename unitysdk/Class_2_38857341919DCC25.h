#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoLayoutElementProcessor;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_38857341919DCC25_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6062760)
#define CLASS_2_38857341919DCC25_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x6062680)
#define CLASS_2_38857341919DCC25__CTOR_OFFSET UNITYSDK_OFFSET(0x6062750)

inline static constexpr unsigned int Class_2_38857341919DCC25_TypeDefinitionIndex = 53663;

class Class_2_38857341919DCC25 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoLayoutElementProcessor* Field_2_1; // 0x18
	::UnityEngine::UI::Text* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38857341919DCC25__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_38857341919DCC25_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_38857341919DCC25_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
