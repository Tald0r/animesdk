#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_7A1F9B1E855D33CF;
class Class_3_1A58F01F41846A1D;
class Class_3_883E597458B91E77;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_1_38083B062354CE6A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x66D8DD0)
#define CLASS_1_38083B062354CE6A_METHOD_1_025C10A50003DFAB_OFFSET UNITYSDK_OFFSET(0x66D8E50)
#define CLASS_1_38083B062354CE6A_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x66D9A80)
#define CLASS_1_38083B062354CE6A_METHOD_1_705AF43C01ED360A_OFFSET UNITYSDK_OFFSET(0x66D9920)
#define CLASS_1_38083B062354CE6A_METHOD_1_77B144CA42B820F0_OFFSET UNITYSDK_OFFSET(0x66D9120)
#define CLASS_1_38083B062354CE6A_METHOD_1_B88F221B047B1528_OFFSET UNITYSDK_OFFSET(0x66D9680)
#define CLASS_1_38083B062354CE6A_METHOD_1_DCCF63B007FEBD16_OFFSET UNITYSDK_OFFSET(0x66D99C0)
#define CLASS_1_38083B062354CE6A_METHOD_1_FA113CD55D99F4AF_OFFSET UNITYSDK_OFFSET(0x66D9B20)
#define CLASS_1_38083B062354CE6A__CTOR_OFFSET UNITYSDK_OFFSET(0x66D8DB0)

inline static constexpr unsigned int Class_1_38083B062354CE6A_TypeDefinitionIndex = 63117;

class Class_1_38083B062354CE6A : public ::System::Object
{
public:
	::Class_3_883E597458B91E77* Field_1_9; // 0x10
	::Class_3_F35B080B137ECC46* Field_1_10; // 0x18
	::Class_3_1A58F01F41846A1D* Field_1_11; // 0x20
	::System::Action* Field_1_8; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::UnityEngine::Vector2 Field_1_0; // 0x34
	::System::Single Field_1_1; // 0x3C
	::UnityEngine::Vector2 Field_1_2; // 0x40
	::System::Single Field_1_3; // 0x48
	::System::Int32 Field_1_5; // 0x4C
	::System::Boolean Field_1_6; // 0x50
	::System::Boolean Field_1_7; // 0x51

	::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_025C10A50003DFAB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_025C10A50003DFAB_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_77B144CA42B820F0(::Class_2_7A1F9B1E855D33CF* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_2_7A1F9B1E855D33CF*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_77B144CA42B820F0_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Quaternion Method_1_B88F221B047B1528(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_B88F221B047B1528_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_705AF43C01ED360A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_705AF43C01ED360A_OFFSET))(this);
	}

	::System::Void Method_1_DCCF63B007FEBD16(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_DCCF63B007FEBD16_OFFSET))(this, a1);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_1_FA113CD55D99F4AF()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38083B062354CE6A_METHOD_1_FA113CD55D99F4AF_OFFSET))(this);
	}
};
