#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDataFixGameWidgetController; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_DD3DB71501D05A1E_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0xAF54480)
#define CLASS_2_DD3DB71501D05A1E_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xAF546A0)
#define CLASS_2_DD3DB71501D05A1E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAF54800)
#define CLASS_2_DD3DB71501D05A1E__CTOR_OFFSET UNITYSDK_OFFSET(0xAF547F0)

inline static constexpr unsigned int Class_2_DD3DB71501D05A1E_TypeDefinitionIndex = 45460;

class Class_2_DD3DB71501D05A1E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_CA67A9CEB871FFD3* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_4; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::Class_3_647A206587033F4E<::MoleMole::UIDataFixGameWidgetController*>* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD3DB71501D05A1E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD3DB71501D05A1E_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD3DB71501D05A1E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD3DB71501D05A1E_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
