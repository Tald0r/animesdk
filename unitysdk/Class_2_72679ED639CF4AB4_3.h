#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_72679ED639CF4AB4_3_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xA0CE930)
#define CLASS_2_72679ED639CF4AB4_3_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0xA0CE780)
#define CLASS_2_72679ED639CF4AB4_3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA0CEA40)
#define CLASS_2_72679ED639CF4AB4_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA0CEA30)

inline static constexpr unsigned int Class_2_72679ED639CF4AB4_3_TypeDefinitionIndex = 55255;

class Class_2_72679ED639CF4AB4_3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_3; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x28
	::UnityEngine::Transform* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_3_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_3_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
