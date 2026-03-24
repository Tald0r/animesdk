#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_0683A56451C2D19E;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define CLASS_1_CB33FB1C921481D2_METHOD_1_04C88C21C4168065_OFFSET UNITYSDK_OFFSET(0x6CFE9F0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_05E99053E414F608_OFFSET UNITYSDK_OFFSET(0x6CFF360)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_12E2584290784D11_OFFSET UNITYSDK_OFFSET(0x6CFFAA0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_381C575FCD3BB9D1_OFFSET UNITYSDK_OFFSET(0x6D006A0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_4396FDCE12D17230_OFFSET UNITYSDK_OFFSET(0x6CFEEC0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_43E25F8407C293CB_OFFSET UNITYSDK_OFFSET(0x6CFE7E0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_52ECE44AC4A22964_OFFSET UNITYSDK_OFFSET(0x6CFFBC0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_52F25BC67C7C01DC_OFFSET UNITYSDK_OFFSET(0x6CFED90)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_64DF330BF96FEE77_OFFSET UNITYSDK_OFFSET(0x6CFFDB0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_67213F366C0692BA_OFFSET UNITYSDK_OFFSET(0x6CFE460)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_776B81C1B8864184_OFFSET UNITYSDK_OFFSET(0x6D008F0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_8FABE8B192FA92B9_OFFSET UNITYSDK_OFFSET(0x6D01040)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_93B3335B303376DD_OFFSET UNITYSDK_OFFSET(0x6CFE590)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_942C0482B8C0DBFC_OFFSET UNITYSDK_OFFSET(0x6CFF660)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_96E9A19006DD4D5E_OFFSET UNITYSDK_OFFSET(0x6CFEAA0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_9EBE34584164F7EB_OFFSET UNITYSDK_OFFSET(0x6D01390)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_AF6EBC2ED0E53773_OFFSET UNITYSDK_OFFSET(0x6D00E60)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_B38C19DBC7ED71B7_OFFSET UNITYSDK_OFFSET(0x6CFEB10)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_B4441DA2218099CA_OFFSET UNITYSDK_OFFSET(0x6D014D0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_CC4553D8ED149019_OFFSET UNITYSDK_OFFSET(0x6D00740)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_CCF7ABC7CDE47B53_OFFSET UNITYSDK_OFFSET(0x6CFF140)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_D2809205008ACF99_1_OFFSET UNITYSDK_OFFSET(0x6CFF270)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x6CFE6F0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_DAD4B2596A6E68F9_OFFSET UNITYSDK_OFFSET(0x6D01900)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_EFECA06FAD7051C8_OFFSET UNITYSDK_OFFSET(0x6D001D0)
#define CLASS_1_CB33FB1C921481D2_METHOD_1_F2EF3BADD2016D89_OFFSET UNITYSDK_OFFSET(0x6D00010)
#define CLASS_1_CB33FB1C921481D2__CCTOR_OFFSET UNITYSDK_OFFSET(0x6CFE410)

inline static constexpr unsigned int Class_1_CB33FB1C921481D2_TypeDefinitionIndex = 72670;

class Class_1_CB33FB1C921481D2 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB33FB1C921481D2_TypeDefinitionIndex)->GetStaticField(0xCB40);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CB33FB1C921481D2_TypeDefinitionIndex)->GetStaticField(0xCB44);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_67213F366C0692BA(::MoleMole::Battle::Entity* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_67213F366C0692BA_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_93B3335B303376DD(::System::Boolean a1, ::UnityEngine::Material* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::UnityEngine::Material*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_93B3335B303376DD_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_D2809205008ACF99_OFFSET))();
	}

	static ::UnityEngine::Vector3 Method_1_43E25F8407C293CB(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_43E25F8407C293CB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_96E9A19006DD4D5E(::MoleMole::Config::EtherEyesObjectType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::EtherEyesObjectType))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_96E9A19006DD4D5E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_B38C19DBC7ED71B7(::System::UInt32 a1, ::MoleMole::Config::EtherEyesObjectType& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::MoleMole::Config::EtherEyesObjectType&))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_B38C19DBC7ED71B7_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_4396FDCE12D17230(::System::UInt32 a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_4396FDCE12D17230_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_D2809205008ACF99_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_D2809205008ACF99_1_OFFSET))();
	}

	static ::System::Boolean Method_1_05E99053E414F608(::MoleMole::Battle::Entity* a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_05E99053E414F608_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_942C0482B8C0DBFC(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::System::Single(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_942C0482B8C0DBFC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_12E2584290784D11(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_12E2584290784D11_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_52ECE44AC4A22964(::MoleMole::Battle::Entity* a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_52ECE44AC4A22964_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_64DF330BF96FEE77(::System::Collections::Generic::List_1<::UnityEngine::Material*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_64DF330BF96FEE77_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F2EF3BADD2016D89(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_F2EF3BADD2016D89_OFFSET))(a1);
	}

	static ::UnityEngine::Quaternion Method_1_381C575FCD3BB9D1(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_381C575FCD3BB9D1_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_CC4553D8ED149019(::MoleMole::Battle::Entity* a1)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_CC4553D8ED149019_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_776B81C1B8864184(::Class_3_F35B080B137ECC46* a1, ::Class_3_0683A56451C2D19E* a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_F35B080B137ECC46*, ::Class_3_0683A56451C2D19E*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_776B81C1B8864184_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AF6EBC2ED0E53773(::Il2CppArray<::UnityEngine::Material*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Material*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_AF6EBC2ED0E53773_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_EFECA06FAD7051C8(::Class_3_F35B080B137ECC46* a1, ::Class_3_0683A56451C2D19E* a2)
	{
		return ((::System::Single(*)(::Class_3_F35B080B137ECC46*, ::Class_3_0683A56451C2D19E*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_EFECA06FAD7051C8_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8FABE8B192FA92B9(::MoleMole::Battle::Entity* a1, ::System::Single a2, ::UnityEngine::Vector2& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_8FABE8B192FA92B9_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_9EBE34584164F7EB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_9EBE34584164F7EB_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_04C88C21C4168065(::Class_3_F35B080B137ECC46* a1)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_04C88C21C4168065_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_52F25BC67C7C01DC(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::EtherEyesObjectType& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::EtherEyesObjectType&))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_52F25BC67C7C01DC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_B4441DA2218099CA(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_B4441DA2218099CA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CCF7ABC7CDE47B53(::MoleMole::Battle::Entity* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_CCF7ABC7CDE47B53_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_DAD4B2596A6E68F9(::System::UInt32 a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_CB33FB1C921481D2_METHOD_1_DAD4B2596A6E68F9_OFFSET))(a1, a2);
	}
};
