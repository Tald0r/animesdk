#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1F76884FC39FD584;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_6E6CF000E7362025_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x7A1BE70)
#define CLASS_2_6E6CF000E7362025_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x7A1BC30)
#define CLASS_2_6E6CF000E7362025_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7A1BF20)
#define CLASS_2_6E6CF000E7362025__CTOR_OFFSET UNITYSDK_OFFSET(0x7A1BF10)

inline static constexpr unsigned int Class_2_6E6CF000E7362025_TypeDefinitionIndex = 56767;

class Class_2_6E6CF000E7362025 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_7; // 0x20
	::UnityEngine::RectTransform* Field_2_1; // 0x28
	::UnityEngine::Transform* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_8; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x48
	::UnityEngine::RectTransform* Field_2_5; // 0x50
	::Class_2_1F76884FC39FD584* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E6CF000E7362025__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6E6CF000E7362025_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6E6CF000E7362025_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E6CF000E7362025_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
