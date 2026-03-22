#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5FD_174.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_FF256E0523F0933B_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB9B2C10)
#define CLASS_3_FF256E0523F0933B_METHOD_3_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0xB9B2CF0)
#define CLASS_3_FF256E0523F0933B_METHOD_3_CEE6ECEECA54D21A_OFFSET UNITYSDK_OFFSET(0xB9B2200)
#define CLASS_3_FF256E0523F0933B_METHOD_3_E83FBEBE26AA0751_OFFSET UNITYSDK_OFFSET(0xB9B22F0)
#define CLASS_3_FF256E0523F0933B__CTOR_OFFSET UNITYSDK_OFFSET(0xB9B2CD0)

inline static constexpr unsigned int Class_3_FF256E0523F0933B_TypeDefinitionIndex = 56629;

class Class_3_FF256E0523F0933B : public ::Class_2_534AF681CC2BD5FD_174<::Class_3_FF256E0523F0933B*>
{
public:
	::MoleMole::EntityHandle Field_3_0; // 0x10
	::System::String* Field_3_1; // 0x20
	::UnityEngine::Vector3 Field_3_2; // 0x28
	::UnityEngine::Vector3 Field_3_4; // 0x34
	::System::Boolean Field_3_5; // 0x40
	::System::Single Field_3_3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF256E0523F0933B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CEE6ECEECA54D21A(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_FF256E0523F0933B_METHOD_3_CEE6ECEECA54D21A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_E83FBEBE26AA0751(::Class_3_F35B080B137ECC46* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3, ::System::Single a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_FF256E0523F0933B_METHOD_3_E83FBEBE26AA0751_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF256E0523F0933B_METHOD_3_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_3_BE8A1D0F6D838666(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_FF256E0523F0933B_METHOD_3_BE8A1D0F6D838666_OFFSET))(this, a1, a2, a3, a4);
	}
};
