#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6AB2643BC630D64.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_FF256E0523F0933B_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x6F43E30)
#define CLASS_3_FF256E0523F0933B_METHOD_3_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0x6F43F10)
#define CLASS_3_FF256E0523F0933B_METHOD_3_CEE6ECEECA54D21A_OFFSET UNITYSDK_OFFSET(0x6F43410)
#define CLASS_3_FF256E0523F0933B_METHOD_3_E83FBEBE26AA0751_OFFSET UNITYSDK_OFFSET(0x6F43510)
#define CLASS_3_FF256E0523F0933B__CTOR_OFFSET UNITYSDK_OFFSET(0x6F43EF0)

inline static constexpr unsigned int Class_3_FF256E0523F0933B_TypeDefinitionIndex = 43227;

class Class_3_FF256E0523F0933B : public ::Class_2_C6AB2643BC630D64<::Class_3_FF256E0523F0933B*>
{
public:
	::System::String* Field_3_1; // 0x10
	::MoleMole::EntityHandle Field_3_0; // 0x18
	::System::Single Field_3_3; // 0x28
	::System::Boolean Field_3_5; // 0x2C
	::UnityEngine::Vector3 Field_3_2; // 0x30
	::UnityEngine::Vector3 Field_3_4; // 0x3C

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
