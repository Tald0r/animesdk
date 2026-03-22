#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8663075EB5BD170B_Struct_2_10E322F059E101C7.h"
#include "unitysdk/Class_1_8663075EB5BD170B_Struct_2_F7165D996F513ABC.h"
#include "unitysdk/MoleMole/Vehicle/VehicleAttachedEffect.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollider_Enum_3_B92C1798682AC0E0.h"
#include "unitysdk/MoleMole/Vehicle/VehicleControlInput.h"
#include "unitysdk/MoleMole/Vehicle/VehicleScreenEffect.h"
#include "unitysdk/Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC.h"
#include "unitysdk/System/Object.h"

class Class_1_0698DCBDF48031C1;
class Class_1_695ECC8F55F7635A;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Vehicle { class VehicleConfig; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8663075EB5BD170B_METHOD_1_19AA766105F77B82_OFFSET UNITYSDK_OFFSET(0x9A4DD50)
#define CLASS_1_8663075EB5BD170B_METHOD_1_1FF2F2C6E71ECAD4_OFFSET UNITYSDK_OFFSET(0x9A4ED70)
#define CLASS_1_8663075EB5BD170B_METHOD_1_34333DF1C3142AAC_OFFSET UNITYSDK_OFFSET(0x9A4F0C0)
#define CLASS_1_8663075EB5BD170B_METHOD_1_43404D2D1401A05C_OFFSET UNITYSDK_OFFSET(0x9A4D690)
#define CLASS_1_8663075EB5BD170B_METHOD_1_7202C24C27D4FC4E_OFFSET UNITYSDK_OFFSET(0x9A4FCA0)
#define CLASS_1_8663075EB5BD170B_METHOD_1_7B630BC7263B2497_OFFSET UNITYSDK_OFFSET(0x9A4D7A0)
#define CLASS_1_8663075EB5BD170B_METHOD_1_CCAAE56E08561869_1_OFFSET UNITYSDK_OFFSET(0x9A4EBD0)
#define CLASS_1_8663075EB5BD170B_METHOD_1_CCAAE56E08561869_OFFSET UNITYSDK_OFFSET(0x9A4EF20)
#define CLASS_1_8663075EB5BD170B_METHOD_1_D516A05366CC21E1_OFFSET UNITYSDK_OFFSET(0x9A4F430)
#define CLASS_1_8663075EB5BD170B_METHOD_1_E8B24B59E51F86EC_OFFSET UNITYSDK_OFFSET(0x9A4F270)
#define CLASS_1_8663075EB5BD170B_METHOD_1_F78C032061CEA1F7_OFFSET UNITYSDK_OFFSET(0x9A4FE10)
#define CLASS_1_8663075EB5BD170B__CCTOR_OFFSET UNITYSDK_OFFSET(0x9A4DC60)
#define CLASS_1_8663075EB5BD170B__CTOR_OFFSET UNITYSDK_OFFSET(0x9A4D5C0)

inline static constexpr unsigned int Class_1_8663075EB5BD170B_TypeDefinitionIndex = 46088;

class Class_1_8663075EB5BD170B : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8663075EB5BD170B_TypeDefinitionIndex)->GetStaticField(0x10220);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8663075EB5BD170B_TypeDefinitionIndex)->GetStaticField(0x10224);
	}
	static ::System::Int32* StaticGet_Field_1_15()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8663075EB5BD170B_TypeDefinitionIndex)->GetStaticField(0x10228);
	}
	static ::System::Int32* StaticGet_Field_1_13()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8663075EB5BD170B_TypeDefinitionIndex)->GetStaticField(0x1022C);
	}
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8663075EB5BD170B_TypeDefinitionIndex)->GetStaticField(0x10230);
	}
	static ::System::Int32* StaticGet_Field_1_17()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8663075EB5BD170B_TypeDefinitionIndex)->GetStaticField(0x10234);
	}
	static ::System::Int32* StaticGet_Field_1_11()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8663075EB5BD170B_TypeDefinitionIndex)->GetStaticField(0x10238);
	}
	static ::System::Int32* StaticGet_Field_1_7()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8663075EB5BD170B_TypeDefinitionIndex)->GetStaticField(0x1023C);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8663075EB5BD170B_TypeDefinitionIndex)->GetStaticField(0x10240);
	}
	static ::System::Int32* StaticGet_Field_1_9()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8663075EB5BD170B_TypeDefinitionIndex)->GetStaticField(0x10244);
	}
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_6; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_16; // 0x0
	// static const ::System::String* Field_1_18; // 0x0
	::MoleMole::Vehicle::VehicleConfig* Field_1_27; // 0x10
	::UnityEngine::Animator* Field_1_25; // 0x18
	::Il2CppArray<::System::Int32>* Field_1_28; // 0x20
	::UnityEngine::Animator* Field_1_26; // 0x28
	::Il2CppArray<::Class_1_8663075EB5BD170B_Struct_2_F7165D996F513ABC>* Field_1_32; // 0x30
	::Il2CppArray<::System::Int32>* Field_1_29; // 0x38
	::Il2CppArray<::Class_1_8663075EB5BD170B_Struct_2_10E322F059E101C7>* Field_1_30; // 0x40
	::Class_1_8663075EB5BD170B_Struct_2_10E322F059E101C7 Field_1_31; // 0x48
	::System::Int32 Field_1_24; // 0x70
	::System::Boolean Field_1_22; // 0x74
	::System::Single Field_1_20; // 0x78
	::System::Single Field_1_23; // 0x7C
	::System::Int32 Field_1_21; // 0x80

	::System::Void _ctor(::Class_1_8663075EB5BD170B* a1, ::MoleMole::Vehicle::VehicleConfig* a2, ::UnityEngine::Animator* a3, ::UnityEngine::Animator* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8663075EB5BD170B*, ::MoleMole::Vehicle::VehicleConfig*, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_19AA766105F77B82(::MoleMole::Vehicle::VehicleControlInput& a1, ::Class_1_695ECC8F55F7635A* a2, ::System::Single a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5, ::System::Boolean a6, ::Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC a7, ::MoleMole::Vehicle::VehicleCollider_Enum_3_B92C1798682AC0E0 a8, ::System::Boolean a9, ::System::Boolean a10, ::UnityEngine::Transform* a11, ::Class_1_0698DCBDF48031C1* a12)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleControlInput&, ::Class_1_695ECC8F55F7635A*, ::System::Single, ::MoleMole::Battle::Entity*, ::System::Boolean, ::System::Boolean, ::Struct_2_A0DCDC0C49E88627_Enum_3_6CD40AC38147E2AC, ::MoleMole::Vehicle::VehicleCollider_Enum_3_B92C1798682AC0E0, ::System::Boolean, ::System::Boolean, ::UnityEngine::Transform*, ::Class_1_0698DCBDF48031C1*))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_19AA766105F77B82_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	::System::Void Method_1_34333DF1C3142AAC(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_34333DF1C3142AAC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7202C24C27D4FC4E(::Il2CppArray<::System::Int32>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_7202C24C27D4FC4E_OFFSET))(this, a1);
	}

	::System::Void Method_1_D516A05366CC21E1(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_D516A05366CC21E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E8B24B59E51F86EC(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_E8B24B59E51F86EC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F78C032061CEA1F7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_F78C032061CEA1F7_OFFSET))(this);
	}

	::System::Void Method_1_CCAAE56E08561869(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_CCAAE56E08561869_OFFSET))(this, a1);
	}

	::System::Void Method_1_1FF2F2C6E71ECAD4(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_1FF2F2C6E71ECAD4_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::Int32>* Method_1_43404D2D1401A05C(::Il2CppArray<::System::String*>* a1)
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_43404D2D1401A05C_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B630BC7263B2497(::Il2CppArray<::MoleMole::Vehicle::VehicleAttachedEffect>* a1, ::Il2CppArray<::MoleMole::Vehicle::VehicleScreenEffect>* a2, ::MoleMole::Vehicle::VehicleAttachedEffect a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Vehicle::VehicleAttachedEffect>*, ::Il2CppArray<::MoleMole::Vehicle::VehicleScreenEffect>*, ::MoleMole::Vehicle::VehicleAttachedEffect))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_7B630BC7263B2497_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CCAAE56E08561869_1(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8663075EB5BD170B_METHOD_1_CCAAE56E08561869_1_OFFSET))(this, a1);
	}
};
