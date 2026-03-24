#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_CA832D813F452AD6;

#define CLASS_2_DD0BEC19545FD166_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x808F860)
#define CLASS_2_DD0BEC19545FD166_METHOD_2_37917191637BFFF4_OFFSET UNITYSDK_OFFSET(0x808F6A0)
#define CLASS_2_DD0BEC19545FD166_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x808F910)
#define CLASS_2_DD0BEC19545FD166__CTOR_OFFSET UNITYSDK_OFFSET(0x808F900)

inline static constexpr unsigned int Class_2_DD0BEC19545FD166_TypeDefinitionIndex = 53802;

class Class_2_DD0BEC19545FD166 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_0; // 0x20
	::Class_3_CA832D813F452AD6<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD0BEC19545FD166__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_37917191637BFFF4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD0BEC19545FD166_METHOD_2_37917191637BFFF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD0BEC19545FD166_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD0BEC19545FD166_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
