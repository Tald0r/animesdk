#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_4B21424E3D00C7BC.h"
#include "unitysdk/UnityEngine/PBDParticleHook.h"

class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_2_E4A383A32564601B;
class Class_3_2939A9182115D3D5;
class Class_3_6124F7AF16B30AB1;
class Class_3_A5AF8EA2F7094EFB;
class Class_3_F35B080B137ECC46;
class Class_3_F41D242A20F8FE06;
namespace MoleMole { class MonoEffect; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class PBDDeformer; }

#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_0C600F12A4EB6D84_OFFSET UNITYSDK_OFFSET(0x6C1CED0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_19FB5FBEA9EA66CD_1_OFFSET UNITYSDK_OFFSET(0x6C1E9E0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x6C1D650)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x6C1E7D0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_277F8930086803D1_1_OFFSET UNITYSDK_OFFSET(0x6C20D50)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x6C1C7A0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_3F6D1D5F2134A212_OFFSET UNITYSDK_OFFSET(0x6C20590)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x6C1F0B0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x6C1F3A0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_4F4447C45F6CF7F8_OFFSET UNITYSDK_OFFSET(0x6C1E840)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x6C1C850)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_7619D93B61B6E841_OFFSET UNITYSDK_OFFSET(0x6C20250)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x6C20510)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x6C1CF40)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_914316E906F0DE73_OFFSET UNITYSDK_OFFSET(0x6C1E4B0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_92A998451FF61049_OFFSET UNITYSDK_OFFSET(0x6C1DA20)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x6C1E1C0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x6C20DC0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_A4C9499E519D205D_OFFSET UNITYSDK_OFFSET(0x6C1C6A0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x6C20E30)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_B501FD3352312876_1_OFFSET UNITYSDK_OFFSET(0x6C21020)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_B501FD3352312876_OFFSET UNITYSDK_OFFSET(0x6C20260)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x6C201F0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x6C21180)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x6C1E980)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_D2B8326EE7EAFF17_OFFSET UNITYSDK_OFFSET(0x6C1FD10)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_D33BA2B6C0CF2EDA_1_OFFSET UNITYSDK_OFFSET(0x6C203C0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_D33BA2B6C0CF2EDA_OFFSET UNITYSDK_OFFSET(0x6C200A0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_F8197BD8ABC6DAF3_OFFSET UNITYSDK_OFFSET(0x6C1E2E0)
#define CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x6C1E5B0)
#define CLASS_2_ED8FCFEDF0E085ED_3__CTOR_OFFSET UNITYSDK_OFFSET(0x6C1E270)

inline static constexpr unsigned int Class_2_ED8FCFEDF0E085ED_3_TypeDefinitionIndex = 58007;

class Class_2_ED8FCFEDF0E085ED_3 : public ::Class_1_C836D00248E6EFFE
{
public:
	// static const ::System::Single Field_2_34; // 0x0
	::Class_3_A5AF8EA2F7094EFB* Field_2_4; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_29; // 0x58
	::System::Collections::Generic::List_1<::System::Boolean>* Field_2_13; // 0x60
	::Class_3_6124F7AF16B30AB1* Field_2_5; // 0x68
	::MoleMole::EntityHandle Field_2_10; // 0x70
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_12; // 0x80
	::UnityEngine::AnimationCurve* Field_2_18; // 0x88
	::Il2CppArray<::Il2CppArray<::UnityEngine::PBDParticleHook>*>* Field_2_2; // 0x90
	::Il2CppArray<::UnityEngine::PBDDeformer*>* Field_2_1; // 0x98
	::System::Collections::Generic::List_1<::Struct_2_4B21424E3D00C7BC>* Field_2_11; // 0xA0
	::Class_3_2939A9182115D3D5* Field_2_0; // 0xA8
	::MoleMole::MonoEffect* Field_2_3; // 0xB0
	::System::Single Field_2_23; // 0xB8
	::System::Single Field_2_20; // 0xBC
	::System::Single Field_2_15; // 0xC0
	::System::Single Field_2_31; // 0xC4
	::System::Single Field_2_7; // 0xC8
	::System::Single Field_2_33; // 0xCC
	::System::Boolean Field_2_19; // 0xD0
	::System::Boolean Field_2_28; // 0xD1
	::System::Boolean Field_2_26; // 0xD2
	::System::Boolean Field_2_24; // 0xD3
	::System::Single Field_2_17; // 0xD4
	::System::Single Field_2_16; // 0xD8
	::System::Boolean Field_2_6; // 0xDC
	::System::Boolean Field_2_9; // 0xDD
	::System::UInt32 Field_2_25; // 0xE0
	::System::UInt32 Field_2_27; // 0xE4
	::System::Single Field_2_14; // 0xE8
	::System::Single Field_2_22; // 0xEC
	::System::Boolean Field_2_21; // 0xF0
	::System::Boolean Field_2_30; // 0xF1
	::System::Boolean Field_2_32; // 0xF2
	::System::Boolean Field_2_8; // 0xF3

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4C9499E519D205D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_A4C9499E519D205D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_2_0C600F12A4EB6D84(::Class_2_E4A383A32564601B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E4A383A32564601B*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_0C600F12A4EB6D84_OFFSET))(this, a1);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_F8197BD8ABC6DAF3(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_F8197BD8ABC6DAF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_4F4447C45F6CF7F8(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_4F4447C45F6CF7F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_19FB5FBEA9EA66CD_1_OFFSET))(this);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_7619D93B61B6E841(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_7619D93B61B6E841_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B501FD3352312876(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_B501FD3352312876_OFFSET))(this, a1);
	}

	::System::Void Method_2_D33BA2B6C0CF2EDA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_D33BA2B6C0CF2EDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2B8326EE7EAFF17(::UnityEngine::PBDDeformer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDDeformer*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_D2B8326EE7EAFF17_OFFSET))(this, a1);
	}

	::System::Void Method_2_D33BA2B6C0CF2EDA_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_D33BA2B6C0CF2EDA_1_OFFSET))(this, a1);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_92A998451FF61049(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_92A998451FF61049_OFFSET))(this, a1);
	}

	::System::Void Method_2_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_2_277F8930086803D1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_277F8930086803D1_1_OFFSET))(this);
	}

	::System::Void Method_2_3F6D1D5F2134A212(::Class_3_F35B080B137ECC46* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_3F6D1D5F2134A212_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_E4A383A32564601B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_E4A383A32564601B*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_914316E906F0DE73(::UnityEngine::PBDDeformer* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDDeformer*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_914316E906F0DE73_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B501FD3352312876_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_B501FD3352312876_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_3_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}
};
