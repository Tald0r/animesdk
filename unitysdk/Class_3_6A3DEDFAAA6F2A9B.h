#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6AB2643BC630D64.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_6A3DEDFAAA6F2A9B_METHOD_3_7C2676DAE3F039F9_OFFSET UNITYSDK_OFFSET(0x73F3EE0)
#define CLASS_3_6A3DEDFAAA6F2A9B_METHOD_3_BD0C0FD946920C7F_OFFSET UNITYSDK_OFFSET(0x73F3B20)
#define CLASS_3_6A3DEDFAAA6F2A9B_METHOD_3_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0x73F44D0)
#define CLASS_3_6A3DEDFAAA6F2A9B_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x73F4430)
#define CLASS_3_6A3DEDFAAA6F2A9B__CTOR_OFFSET UNITYSDK_OFFSET(0x73F44B0)

inline static constexpr unsigned int Class_3_6A3DEDFAAA6F2A9B_TypeDefinitionIndex = 60925;

class Class_3_6A3DEDFAAA6F2A9B : public ::Class_2_C6AB2643BC630D64<::Class_3_6A3DEDFAAA6F2A9B*>
{
public:
	::MoleMole::EntityHandle Field_3_0; // 0x10
	::UnityEngine::Vector3 Field_3_3; // 0x20
	::UnityEngine::Vector3 Field_3_1; // 0x2C
	::System::Single Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A3DEDFAAA6F2A9B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_BD0C0FD946920C7F(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_6A3DEDFAAA6F2A9B_METHOD_3_BD0C0FD946920C7F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_7C2676DAE3F039F9(::Class_3_F35B080B137ECC46* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3, ::System::Single a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_6A3DEDFAAA6F2A9B_METHOD_3_7C2676DAE3F039F9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A3DEDFAAA6F2A9B_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BE8A1D0F6D838666(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_6A3DEDFAAA6F2A9B_METHOD_3_BE8A1D0F6D838666_OFFSET))(this, a1, a2, a3, a4);
	}
};
