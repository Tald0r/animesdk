#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_4DB8F971EA29B0BC_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0xA0CE640)
#define CLASS_2_4DB8F971EA29B0BC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA0CE710)
#define CLASS_2_4DB8F971EA29B0BC__CTOR_OFFSET UNITYSDK_OFFSET(0xA0CE700)

inline static constexpr unsigned int Class_2_4DB8F971EA29B0BC_TypeDefinitionIndex = 54300;

class Class_2_4DB8F971EA29B0BC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_1; // 0x18
	::UnityEngine::UI::Text* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4DB8F971EA29B0BC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4DB8F971EA29B0BC_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4DB8F971EA29B0BC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
