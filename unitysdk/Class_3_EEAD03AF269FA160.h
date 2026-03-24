#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_AA9239F66AD90F88_3.h"
#include "unitysdk/Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_EEAD03AF269FA160_METHOD_3_1A0D85E5904D9469_OFFSET UNITYSDK_OFFSET(0xAFBAE10)
#define CLASS_3_EEAD03AF269FA160_METHOD_3_3482906B0868371E_OFFSET UNITYSDK_OFFSET(0xAFBAEB0)
#define CLASS_3_EEAD03AF269FA160_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xAFBB160)
#define CLASS_3_EEAD03AF269FA160__CTOR_OFFSET UNITYSDK_OFFSET(0xAFBB1E0)

inline static constexpr unsigned int Class_3_EEAD03AF269FA160_TypeDefinitionIndex = 78285;

class Class_3_EEAD03AF269FA160 : public ::Class_2_AA9239F66AD90F88_3<::Class_3_EEAD03AF269FA160*>
{
public:
	::UnityEngine::Vector3 Field_3_0; // 0x10
	::System::Single Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EEAD03AF269FA160__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1A0D85E5904D9469(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF& a3, ::MoleMole::Battle::Entity* a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::Class_3_248DACE3BB3053DD_Enum_3_208B758CC2D6E4CF&, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_EEAD03AF269FA160_METHOD_3_1A0D85E5904D9469_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_3482906B0868371E(::Class_3_F35B080B137ECC46* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EEAD03AF269FA160_METHOD_3_3482906B0868371E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EEAD03AF269FA160_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
