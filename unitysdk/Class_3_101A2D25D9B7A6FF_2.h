#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_534AF681CC2BD5FD_174.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_101A2D25D9B7A6FF_2_METHOD_3_25D77E54879BE12D_OFFSET UNITYSDK_OFFSET(0x99CD290)
#define CLASS_3_101A2D25D9B7A6FF_2_METHOD_3_AF329E363131D972_OFFSET UNITYSDK_OFFSET(0x99CD5B0)
#define CLASS_3_101A2D25D9B7A6FF_2_METHOD_3_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0x99CD770)
#define CLASS_3_101A2D25D9B7A6FF_2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x99CD6B0)
#define CLASS_3_101A2D25D9B7A6FF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x99CD750)

inline static constexpr unsigned int Class_3_101A2D25D9B7A6FF_2_TypeDefinitionIndex = 68163;

class Class_3_101A2D25D9B7A6FF_2 : public ::Class_2_534AF681CC2BD5FD_174<::Class_3_101A2D25D9B7A6FF_2*>
{
public:
	::UnityEngine::Vector3 Field_3_0; // 0x10
	::System::Single Field_3_3; // 0x1C
	::System::Single Field_3_1; // 0x20
	::UnityEngine::Vector3 Field_3_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_101A2D25D9B7A6FF_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_25D77E54879BE12D(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_101A2D25D9B7A6FF_2_METHOD_3_25D77E54879BE12D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_AF329E363131D972(::Class_3_F35B080B137ECC46* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3, ::System::Single a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_101A2D25D9B7A6FF_2_METHOD_3_AF329E363131D972_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_101A2D25D9B7A6FF_2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BE8A1D0F6D838666(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_101A2D25D9B7A6FF_2_METHOD_3_BE8A1D0F6D838666_OFFSET))(this, a1, a2, a3, a4);
	}
};
