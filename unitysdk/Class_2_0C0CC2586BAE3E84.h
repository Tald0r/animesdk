#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIMainCityMiniMenuButtonWidgetController; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_95EF0285C16C5E7C;

#define CLASS_2_0C0CC2586BAE3E84_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0xB0B5DE0)
#define CLASS_2_0C0CC2586BAE3E84_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xB0B5FE0)
#define CLASS_2_0C0CC2586BAE3E84_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB0B60B0)
#define CLASS_2_0C0CC2586BAE3E84__CTOR_OFFSET UNITYSDK_OFFSET(0xB0B60A0)

inline static constexpr unsigned int Class_2_0C0CC2586BAE3E84_TypeDefinitionIndex = 47291;

class Class_2_0C0CC2586BAE3E84 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_0; // 0x28
	::Class_3_95EF0285C16C5E7C<::MoleMole::UIMainCityMiniMenuButtonWidgetController*>* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C0CC2586BAE3E84__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C0CC2586BAE3E84_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C0CC2586BAE3E84_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C0CC2586BAE3E84_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
