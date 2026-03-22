#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_4B21424E3D00C7BC.h"
#include "unitysdk/UnityEngine/PBDParticleHook.h"

class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_8CAD669444D1F6DE;
class Class_2_D907381C5F6CD15B;
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

#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_0C600F12A4EB6D84_OFFSET UNITYSDK_OFFSET(0x84E48C0)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_19FB5FBEA9EA66CD_1_OFFSET UNITYSDK_OFFSET(0x84E5CD0)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x84E5040)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x84E68C0)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_277F8930086803D1_1_OFFSET UNITYSDK_OFFSET(0x84E7EE0)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x84E4180)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_3F6D1D5F2134A212_OFFSET UNITYSDK_OFFSET(0x84E6930)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x84E8350)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0x84E70D0)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_4F4447C45F6CF7F8_OFFSET UNITYSDK_OFFSET(0x84E6780)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x84E4230)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_7619D93B61B6E841_OFFSET UNITYSDK_OFFSET(0x84E7ED0)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x84E8990)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x84E4930)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_914316E906F0DE73_OFFSET UNITYSDK_OFFSET(0x84E8820)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_92A998451FF61049_OFFSET UNITYSDK_OFFSET(0x84E5410)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x84E5BB0)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x84E8920)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_A4C9499E519D205D_OFFSET UNITYSDK_OFFSET(0x84E4080)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0x84E8630)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_B501FD3352312876_1_OFFSET UNITYSDK_OFFSET(0x84E8A10)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_B501FD3352312876_OFFSET UNITYSDK_OFFSET(0x84E63A0)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x84E82F0)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x84E8B70)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x84E6500)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_D2B8326EE7EAFF17_OFFSET UNITYSDK_OFFSET(0x84E7F50)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_D33BA2B6C0CF2EDA_1_OFFSET UNITYSDK_OFFSET(0x84E7BB0)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_D33BA2B6C0CF2EDA_OFFSET UNITYSDK_OFFSET(0x84E7A60)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_F8197BD8ABC6DAF3_OFFSET UNITYSDK_OFFSET(0x84E7D00)
#define CLASS_2_ED8FCFEDF0E085ED_METHOD_2_FD6692A5F6B0AC0C_OFFSET UNITYSDK_OFFSET(0x84E6560)
#define CLASS_2_ED8FCFEDF0E085ED__CTOR_OFFSET UNITYSDK_OFFSET(0x84E5C60)

inline static constexpr unsigned int Class_2_ED8FCFEDF0E085ED_TypeDefinitionIndex = 66594;

class Class_2_ED8FCFEDF0E085ED : public ::Class_1_C836D00248E6EFFE
{
public:
	// static const ::System::Single Field_2_34; // 0x0
	::Il2CppArray<::UnityEngine::PBDDeformer*>* Field_2_1; // 0x50
	::Class_3_6124F7AF16B30AB1* Field_2_5; // 0x58
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_12; // 0x60
	::Class_3_A5AF8EA2F7094EFB* Field_2_4; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* Field_2_29; // 0x70
	::UnityEngine::AnimationCurve* Field_2_18; // 0x78
	::MoleMole::EntityHandle Field_2_10; // 0x80
	::Il2CppArray<::Il2CppArray<::UnityEngine::PBDParticleHook>*>* Field_2_2; // 0x90
	::System::Collections::Generic::List_1<::Struct_2_4B21424E3D00C7BC>* Field_2_11; // 0x98
	::System::Collections::Generic::List_1<::System::Boolean>* Field_2_13; // 0xA0
	::MoleMole::MonoEffect* Field_2_3; // 0xA8
	::Class_3_2939A9182115D3D5* Field_2_0; // 0xB0
	::System::Single Field_2_15; // 0xB8
	::System::Single Field_2_17; // 0xBC
	::System::Single Field_2_23; // 0xC0
	::System::Boolean Field_2_19; // 0xC4
	::System::Boolean Field_2_6; // 0xC5
	::System::Single Field_2_31; // 0xC8
	::System::Single Field_2_16; // 0xCC
	::System::Single Field_2_7; // 0xD0
	::System::Single Field_2_14; // 0xD4
	::System::Single Field_2_33; // 0xD8
	::System::Single Field_2_20; // 0xDC
	::System::Single Field_2_22; // 0xE0
	::System::Boolean Field_2_32; // 0xE4
	::System::Boolean Field_2_9; // 0xE5
	::System::Boolean Field_2_26; // 0xE6
	::System::Boolean Field_2_24; // 0xE7
	::System::UInt32 Field_2_27; // 0xE8
	::System::Boolean Field_2_28; // 0xEC
	::System::Boolean Field_2_21; // 0xED
	::System::Boolean Field_2_8; // 0xEE
	::System::Boolean Field_2_30; // 0xEF
	::System::UInt32 Field_2_25; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4C9499E519D205D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_A4C9499E519D205D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_2_0C600F12A4EB6D84(::Class_2_D907381C5F6CD15B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D907381C5F6CD15B*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_0C600F12A4EB6D84_OFFSET))(this, a1);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_19FB5FBEA9EA66CD_1_OFFSET))(this);
	}

	::System::Void Method_2_B501FD3352312876(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_B501FD3352312876_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_FD6692A5F6B0AC0C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_FD6692A5F6B0AC0C_OFFSET))(this);
	}

	::System::Void Method_2_4F4447C45F6CF7F8(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_4F4447C45F6CF7F8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3F6D1D5F2134A212(::Class_3_F35B080B137ECC46* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_3F6D1D5F2134A212_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D33BA2B6C0CF2EDA(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_D33BA2B6C0CF2EDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_7619D93B61B6E841(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_8CAD669444D1F6DE* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_8CAD669444D1F6DE*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_7619D93B61B6E841_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_277F8930086803D1_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_277F8930086803D1_1_OFFSET))(this);
	}

	::System::Void Method_2_D33BA2B6C0CF2EDA_1(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_D33BA2B6C0CF2EDA_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_D2B8326EE7EAFF17(::UnityEngine::PBDDeformer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDDeformer*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_D2B8326EE7EAFF17_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_F8197BD8ABC6DAF3(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_F8197BD8ABC6DAF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_D907381C5F6CD15B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D907381C5F6CD15B*))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_914316E906F0DE73(::UnityEngine::PBDDeformer* a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::PBDDeformer*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_914316E906F0DE73_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::Void Method_2_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_2_B501FD3352312876_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_B501FD3352312876_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_2_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_2_92A998451FF61049(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_92A998451FF61049_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED8FCFEDF0E085ED_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}
};
